#!/usr/bin/env python

import sys, time, subprocess, re, os, collections
from cStringIO import StringIO
parserpath = '/home/heryxpc/Documents/soton/dissertation/tools/pycparser/barel/barel-pycparser-b9ad39646ebc'
pagaipath = 'pagai'
sys.path.extend(['.', parserpath])
from pycparser import c_parser, c_ast, parse_file, c_generator


class TimeLog:
	'Class to save time execution'
	count = 0

	def setInit(self):
		self.initime = time.time()

	def setEnd(self):
		self.endtime = time.time()

	def seconds(self):
		self.count = int(self.endtime - self.initime)
		return self.count

	def formatTime(self, timeticks, prefix):
		formattime = time.asctime(time.localtime(timeticks) )
		print (prefix+' time:'+formattime)

	def displayInit(self):
		self.formatTime(self.initime, 'Starting')

	def displayEnd(self):
		self.formatTime(self.endtime, 'Ending')

	def displaySeconds(self):
		seconds = str(self.seconds() )
		print ('Elapsed milliseconds between start and end time:'+ seconds)

	def __init__(self):
		self.initime = self.setInit
		self.endtime = self.setEnd		

class Command:
	'Class that contains an external command execution'

	def __init__(self, config ):
		self.config = config
		self.name = config['name']
		self.input = config['input']
		self.output = ''

	def execute(self):
		args = [self.name]+self.input
		print ('Executing command:'+' '.join(args) )
		try:
			self.output = subprocess.check_output(args, 
							stderr=subprocess.STDOUT)
		except subprocess.CalledProcessError as e:
			print 'Error:',e.returncode, e.cmd, e.output
			#TODO check if error can be resolved		

	def getOutput(self):
		return self.output

###############################################################
# Annotations code

# Finds the closest comment in a dictionary of comments
def closest_comment(line, comments) :
	closerLine = sys.maxint
	distance = 0
	for ln in comments :
		distance = abs(ln - line)
		if distance <= abs(closerLine - line) :
			closerLine = ln
		if line > ln : 
			# If comment line is larger than the reference line, 
			# shouldn't be a comment for this line
			pass
	return closerLine


class AnnotationsVisitor(c_ast.NodeVisitor):
	'Visits all loop statements looking for annotations'
	comments = []
	annotations = []
	# TODO set annotation range dinamically based on code length
	def __init__(self):
		pass

	def setCloserInvariant(self, node, range=10):
		line = node.coord.line
		annotPos = closest_comment(line, self.comments)
		annotation = ''
		if abs(annotPos - line) > range :
			# In case the distance between the line and comment is larger than
			# range, assume there is no invariant for this coord
			pass
		else :
			annotation = self.comments[annotPos]
		 	self.setAnnotation(node, annotation)
		 	self.annotations.append(annotation)
		return annotation

	def setComments(self, comments):
		self.comments = collections.OrderedDict(sorted(comments.items(), 
									key=lambda t: t[0]) )
		# ~print (comments)

	def visit_While(self, node):
	    # print 'While found at line: %s in file %s' % (
	    # 	node.coord.line, node.coord.file)
	    # annotation = self.setCloserInvariant(node)
	    self.setCloserInvariant(node)
	    # print 'Annotation set:[' + annotation + ']'
	    
	def visit_For(self, node):
	    # print 'For found at line: %s in file %s' % (
	    # 	node.coord.line, node.coord.file)
	    # annotation = self.setCloserInvariant(node)
	    self.setCloserInvariant(node)
	    # print 'Annotation set:[' + annotation + ']'
	   
	def setAnnotation(self, node, annotation):
		node.annotation = annotation
		# print "Node:%s" % node.coord
		# print "Annotation:%s" % node.annotation

def parse_pagai_invariant(comment):
	# Function to parse an invariant comment
	# SAMPLE: /* invariant:\n\t\t    102-x-y >= 0\n\t\t    y >= 0\n\t\t    x-y >= 0\n\t\t    */
	pattern = '\s*([A-Za-z0-9+-_/*]+)*\s([<>=]*)\s([0-9])*\s*'
	prog = re.compile(pattern)
	m = prog.search(comment)
	expressions = []
	while m:
		group = m.group(0)
		# print (group)
		pos = m.end()
		# print (pos)
		lexp =  m.group(1)
		op =  m.group(2)
		rexp =  m.group(3)
		texp = (lexp, op, rexp)
		if (not group.startswith(' invariant:') ):
			expressions.append( texp )
		m = prog.search(comment, pos)
	# expressions = prog.findall(comment, re.DOTALL|re.DEBUG)
	# print (expressions)
	# lexp = ''
	# rexp = '' 
	# op = ''
	# for exp in expressions:
	# 	lexp = exp[0]
	# 	op = exp[1]
	# 	rexp = exp[2]
	# 	#~ print "Expression - Leftside: %s Operator: %s Right side: %s" % (lexp, op, rexp)
	return expressions

class CAnnotatedGenerator(c_generator.CGenerator):
	'''Visitor that transform parsed C code with annotations into
		C code with assume statments'''
	def __init__(self):
		pass

	#TODO Obtain a block statement and then add as first statement assume
	def addAssumeAnnotations(self, n):
		# print dir(n.stmt)
		# TODO First create a list of block items
		blockItems = []
		# TODO Then transform annotation into an FuncCall of an assume from CBMC
		assumeStr = self.transToAssume(n)
		print (n.coord.line, assumeStr)
		text = 'void fake_func() {' + assumeStr + '}'
		parser = c_parser.CParser()
		ast = parser.parse(text, filename='<none>' )
		# ast.show()
		# TODO Add the created statement to block items
		assumeFuncCall = ast.ext[0].body.block_items[0]
		blockItems.insert(0, assumeFuncCall)
		# TODO Add original block to block items
		blockItems.insert(1, n.stmt)
		# TODO Then create a new compound with all the statements
		comp = c_ast.Compound(blockItems, n.stmt.coord)
		n.stmt = comp
		return n
		

	def transToAssume(self, n):
		s = ''
		if hasattr(n, 'annotation'):
			invariants = parse_pagai_invariant(n.annotation)
			# print (invariants)
			s += '__CPROVER_assume('
			for i, exp in enumerate(invariants):
				s+= exp[0] + ' '
				if exp[1] == '=':
					s+= '=' #Add double equal to make it a valid logic operator
				s+= exp[1] + ' '
				s+= exp[2] + ' '
				if not ( (i + 1) == len(invariants) ) :
					s+= '&& '
			s+= ');\n'
		s += self._make_indent()
		return s


	def visit_While(self, n):
		n = self.addAssumeAnnotations(n)
		s = super(CAnnotatedGenerator, self).visit_While(n)
		return s

	def visit_For(self, n):
		n = self.addAssumeAnnotations(n)
		s = super(CAnnotatedGenerator, self).visit_For(n)
		return s


#####################End of annotated code##############33

def ensure_C99main(file) :
	print "Start of ensure_C99main"
	openFile = open(file, 'r+')
	code = openFile.read()
	codepos = code.find('main(', 0, len(code) )
	if ( codepos == -1) :
		print "File %s has no main!" % file
		return
	else :
		mainRetType = code[codepos - 4:codepos]
		if (mainRetType != 'int ' ) :
			print "File %s does not complain with C99: %s", file, mainRetType
			newcode = code[:codepos] + "int " + code[codepos:]
			# file = file + '_C99.c'
			# newFile = open(file, 'w ')
			# newFile.write(newcode)
			# newFile.close()
			openFile.seek(0)
			openFile.truncate()
			openFile.write(newcode)
	openFile.close()
	print "End of ensure_C99main"
	return file

# Test ensure_C99main function
# cFile = ensure_C99main(sys.argv[1])
# parse_file(cFile, use_cpp=True,
#             cpp_args= [ "-C",       # trigger to keep comments
#               '-D__builtin_va_list=int',        
#               "-D__attribute__(x)=", 
#               "-D__extension__(x)=" ,
#               "-D__volatile__=",
#               "-D__asm__="
#             ]
#     )

def parse_annotated(file):
	
    ast = parse_file(file, use_cpp=True,
            cpp_args= [ "-C",       # trigger to keep comments
              '-D__builtin_va_list=int',        
              '-D__attribute__(x)=', 
              '-D__extension__(x)=',
              '-D__volatile__=',
              '-D__asm__='
            ]
    )
    annotations = dict()
    print "===== %s =====" % file
    # fd = open(file, 'r')
    # original = fd.read()
    # print 'Original:::::::::::::::'
    # print original
    # print ':::::::::::::::Original'
    # fd.close()
    for fn, cmtLst in ast.commentDir.viewitems():
        for tkNo, (fl,fc), (tl, tc), comment in cmtLst:
        	if fn == file and 'invariant' in comment:
	            # print "Line number:%d:Comment: %s" % (
	            #     fl, `comment`)
	            # Cooment coord is moved by one line down
	            annotations[fl + 1] = comment
    v = AnnotationsVisitor()
    v.setComments(annotations)
    v.visit(ast)
    g = CAnnotatedGenerator()
    assumed = g.visit(ast)
    assumedfile = file + '_assume.c'
    saveFile = open(assumedfile, 'w')
    saveFile.write(assumed)
    saveFile.close()
    print "Assumed:::::::::::::::::"
    print assumed
    print ":::::::::::::::::Assumed"
    print "=============================================\n"
    return assumedfile

# parse_invariant('/* invariant:\n  -n+x+y = 0\n  n-x >= 0\n  */')
# parse_invariant('/* invariant:\n\t\t    102-x-y >= 0\n\t\t    y >= 0\n\t\t    x-y >= 0\n\t\t    */')
# show_while('anno_gopan.c')

#~ annotated_parse('anno_gopan.c')

def abs_annotate(srcfile):
	srcfile = ensure_C99main(srcfile)
	sourcefile = srcfile

	temp = sourcefile+'.tmp'
	config2 = {'name':pagaipath, 'input':['-i', sourcefile, 
				'--annotated', temp] }
	cmd = Command(config2)
	cmd.execute()
	output = cmd.getOutput()
	#~ print (output)

	config3 = {'name':'sed', 'input':['-r', 's:\\x1B\\[[0-9;]*[mK]::g',  
				temp] }
	cmd = Command(config3)
	cmd.execute()
	output = cmd.getOutput()
	#~ print (output)

	config4 = {'name':'rm', 'input':[temp]}
	cmd = Command(config4)
	cmd.execute()

	annotated = sourcefile + '_anno.c'
	saveFile = open(annotated, 'w')
	saveFile.write(output)
	saveFile.close()
	return annotated


def main():
	#Main function
	sourcefile  = ''
	if __name__ == "__main__":
 	   if len(sys.argv) > 1:
 	       sourcefile  = sys.argv[1]
 	   else:
 	       print "Usage: prototype_1.0b.py <filename>"
 	       return 1
	log = TimeLog()
	log.setInit()
	log.displayInit()
	annotated = abs_annotate(sourcefile)
	log.setEnd()
	log.displayEnd()
	# log.displaySeconds()

	assumed = parse_annotated(annotated)

	

main()

# text = '''void fake_func()
# {
# __CPROVER_assume(5-i >= 0 && i >= 0 );
# }'''

# parser = c_parser.CParser()
# ast = parser.parse(text, filename='<none>' )
# ast.show()