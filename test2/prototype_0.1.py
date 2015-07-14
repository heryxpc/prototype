#!usr/bin/env/python

import sys, time, subprocess, re
from cStringIO import StringIO
parserpath = '/home/heryxpc/Documents/soton/dissertation/tools/pycparser/barel/barel-pycparser-b9ad39646ebc'
pagaipath = '/home/heryxpc/Documents/soton/dissertation/tools/pagai/pagai'
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
		seconds = str(self.seconds())
		print ('Elapsed seconds between start and end time:'+ seconds)

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
		

class AbstractInterpreter():
	'Holds the definition of an abstract interpreter command'
	def __init__(self, configs):
		self.config = []
		self.command = []
		for cfg in configs:
			self.config.append(cfg)
			cmd = Command(cfg)
			self.append(cmd)
		self.output = []

	def analyze(self):
		i = 0
		result = ''
		for cmd in self.command:
			cmd.execute()
			i += 1
			result = cmd.getOutput()
			self.output[i] = result
		return result

def main():
	#Main function
	sourcefile  = ''
	if __name__ == "__main__":
 	   import os
 	   if len(sys.argv) > 1:
 	       sourcefile  = sys.argv[1]
 	   else:
 	       print "Usage: prototype_0.1.py <filename>"
 	       return 1
	log = TimeLog()
	log.setInit()
	log.displayInit()
	analyzed = abs_analyze(sourcefile)
	log.setEnd()
	log.displayEnd()
	log.displaySeconds()

	assumed = annotated_parse(analyzed)

	log = TimeLog()
	log.setInit()
	log.displayInit()
	analyzed = abs_analyze(assumed)
	log.setEnd()
	log.displayEnd()
	log.displaySeconds()

def abs_analyze(srcfile):
	sourcefile = srcfile
	llvmfile = srcfile + '.bc'
	#config = {'name':'ls', 'input':['-la', 'prototype_0.1.py']}
	#config = {'name':'pwd', 'input':[]}
	config = {'name':'clang-3.5', 'input': ['-emit-llvm', '-g', '-c', 
				sourcefile, '-o', llvmfile] }
	cmd = Command(config)
	cmd.execute()
	output = cmd.getOutput()
	#~ print (output)

	temp = 'tmp_'+sourcefile
	config2 = {'name':pagaipath, 'input':['-i', llvmfile, 
				'--annotated', temp] }
	cmd = Command(config2)
	cmd.execute()
	output = cmd.getOutput()
	#~ print (output)

	annotated = 'anno_'+sourcefile
	config3 = {'name':'sed', 'input':['-r', 's:\\x1B\\[[0-9;]*[mK]::g',  temp] }
	cmd = Command(config3)
	cmd.execute()
	output = cmd.getOutput()
	#~ print (output)

	saveFile = open(annotated, 'w')
	saveFile.write(output)
	saveFile.close()
	return annotated

###############################################################
# Annotations code

class WhileVisitor(c_ast.NodeVisitor):
	'Visits all while statements looking for annotations'
	comments = dict()
	def __init__(self):
		pass

	def setComments(self, comments):
		self.comments = comments
		print (comments)

	def visit_While(self, node):
	    print 'While found at line: %s in file %s' % (node.coord.line, node.coord.file)
	    if self.comments.has_key(node.coord.line):
	    	annotation = self.comments[node.coord.line]
	    	self.setAnnotation(node, annotation)
	   
	def setAnnotation(self, node, annotation):
		node.annotation = annotation
		#~ print "Node:%s" % node
		#~ print "Annotation:%s" % node.annotation

def parse_invariant(comment):
	# Function to parse an invariant comment
	# SAMPLE: /* invariant:\n\t\t    102-x-y >= 0\n\t\t    y >= 0\n\t\t    x-y >= 0\n\t\t    */
	pattern = '\s*([A-Za-z0-9-+*/]+)*\s([<>=]*)\s([0-9])*\s*'
	prog = re.compile(pattern)
	m = prog.search(comment)
	expressions = []
	while m:
		group = m.group(0)
		print (group)
		pos = m.end()
		print (pos)
		lexp =  m.group(1)
		op =  m.group(2)
		rexp =  m.group(3)
		texp = (lexp, op, rexp)
		expressions.append( texp )
		m = prog.search(comment, pos)
	print (comment)
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

	def visit_While(self, n):
		s = ''
		if hasattr(n, 'annotation'):
			invariants = parse_invariant(n.annotation)
			print (invariants)
			s += 'assume('
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
		s += super(CAnnotatedGenerator, self).visit_While(n)
		return s

# def show_while(filename):
# 	ast = parse_file(filename, use_cpp=True)
# 	v = WhileVisitor()
# 	v.visit(ast)

def annotated_parse(file):
    ast = parse_file(file, use_cpp=True,
            cpp_args= [ "-C",       # trigger to keep comments      
              '-D__builtin_va_list=int',
              '-D__attribute__(a)=',
            ]
    )
    annotations = dict()
    print "===== %s =====" % file
    fd = open(file, 'r')
    original = fd.read()
    print 'Original:::::::::::::::'
    print original
    print ':::::::::::::::Original'
    for fn, cmtLst in ast.commentDir.viewitems():
        for tkNo, (fl,fc), (tl, tc), comment in cmtLst:
        	if fn == file and 'invariant' in comment:
	            print "%d:%s:%d:%d-%d:%d: %s" % (
	                tkNo, fn, fl,fc, tl,tc, `comment`)
	            # Annotation may be before or after the while, add in both pos
	            annotations[fl] = comment
	            annotations[fl+tc+1] = comment
    v = WhileVisitor()
    v.setComments(annotations)
    v.visit(ast)
    g = CAnnotatedGenerator()
    assumed = g.visit(ast)
    assumedfile = 'assume_' + file
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

main()