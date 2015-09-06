#!/usr/bin/env python

import sys, time, subprocess, re, os, collections, logging
from cStringIO import StringIO

parserpath = '/home/heryxpc/Documents/soton/dissertation/tools/pycparser/barel/barel-pycparser-b9ad39646ebc'
pagaipath = '/home/heryxpc/Documents/soton/dissertation/tools/pagai/pagai'
cbmcpath = '/home/heryxpc/Documents/soton/dissertation/tools/cbmc/cbmc-5-1-linux-64/cbmc'
clangpath = 'clang-3.5'
fakelib_parser = '/home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg/core/include'

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
		self.error = ''

	def execute(self):
		args = [self.name]+self.input
		print ('Executing command:'+' '.join(args) )
		try:
			# self.output = subprocess.check_output(args, 
			# 				stderr=subprocess.STDOUT)
			sp = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
			out, err = sp.communicate()
			self.output = out
			self.error = err
		except subprocess.CalledProcessError as e:
			print 'Error:',e.returncode, e.cmd, e.output
			#TODO check if error can be resolved		

	def getOutput(self):
		return self.output

	def getError(self):
		return self.error		

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
		# print node.coord
		# print annotPos, self.comments[annotPos]
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
	    c_ast.NodeVisitor.generic_visit(self, node)
	    # print 'Annotation set:[' + annotation + ']'
	    
	def visit_For(self, node):
	    # print 'For found at line: %s in file %s' % (
	    # 	node.coord.line, node.coord.file)
	    # annotation = self.setCloserInvariant(node)
	    self.setCloserInvariant(node)
	    c_ast.NodeVisitor.generic_visit(self, node)
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

	def addAssumeAnnotations(self, n):
		# print dir(n.stmt)
		blockItems = []
		if hasattr(n, 'annotation'):
			assumeStr = self.transToAssume(n)
			# print (n.coord.line, assumeStr)
			text = 'void fake_func() {' + assumeStr + '}'
			parser = c_parser.CParser()
			ast = parser.parse(text, filename='<none>' )
			# ast.show()
			assumeFuncCall = ast.ext[0].body.block_items[0]
			blockItems.insert(0, assumeFuncCall)
			blockItems.insert(1, n.stmt)
			comp = c_ast.Compound(blockItems, n.stmt.coord)
			n.stmt = comp
			# s = super(CAnnotatedGenerator, self).visit_While(n)
			# print "New while: "+s
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
	# print "Start of ensure_C99main"
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
			if mainRetType == 'oid ':
				# Need to strip including void
				newcode = code[:codepos - 5] + "int " + code[codepos:]
			else: 
				newcode = code[:codepos] + "int " + code[codepos:]
			# file = file + '_C99.c'
			# newFile = open(file, 'w ')
			# newFile.write(newcode)
			# newFile.close()
			openFile.seek(0)
			openFile.truncate()
			openFile.write(newcode)
	openFile.close()
	# print "End of ensure_C99main"
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
            cpp_args= [ '-C', 
              '-D__builtin_va_list=int',        
              '-D__attribute__(x)=', 
              '-D__extension__(x)=',
              '-D__volatile__=',
              '-D__asm__=',
            ]
    )
	# print "===== %s =====" % file
    # fd = open(file, 'r')
    # original = fd.read()
    # print 'Original:::::::::::::::'
    # print original
    # print ':::::::::::::::Original'
    # fd.close()
	annotations = dict()
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
    # print "Assumed:::::::::::::::::"
    # print assumed
    # print ":::::::::::::::::Assumed"
    # print "=============================================\n"
	return assumedfile

# parse_invariant('/* invariant:\n  -n+x+y = 0\n  n-x >= 0\n  */')
# parse_invariant('/* invariant:\n\t\t    102-x-y >= 0\n\t\t    y >= 0\n\t\t    x-y >= 0\n\t\t    */')
# show_while('anno_gopan.c')

#~ annotated_parse('anno_gopan.c')

def saveSTDERR(cmd, errfile):
	fd = open(errfile, "w")
	error = cmd.getError()
	fd.write(error)
	fd.close()


def abs_annotate(srcfile):
	sourcefile = srcfile

	llvmfile = srcfile + '.bc'

	config = {'name': clangpath, 'input': ['-emit-llvm', '-g', '-c', 
				sourcefile, '-o', llvmfile] }
	cmd = Command(config)
	cmd.execute()
	# output = cmd.getOutput()
	# print (output)
	saveSTDERR(cmd, llvmfile + '.stderr')

	temp = sourcefile+'.tmp'
	config2 = {'name':pagaipath, 'input':['-i', llvmfile, 
				'--annotated', temp] }
	cmd = Command(config2)
	cmd.execute()
	# output = cmd.getOutput()
	# print (output)
	saveSTDERR(cmd, temp + '_pagai' + '.stderr')

	config3 = {'name':'sed', 'input':['-r', 's:\\x1B\\[[0-9;]*[mK]::g',  
				temp] }
	cmd = Command(config3)
	cmd.execute()
	output = cmd.getOutput()
	# print (output)
	saveSTDERR(cmd, temp + '_sed' + '.stderr')

	config4 = {'name':'rm', 'input':[temp]}
	cmd = Command(config4)
	cmd.execute()

	annotated = sourcefile + '_anno.c'
	saveFile = open(annotated, 'w')
	saveFile.write(output)
	saveFile.close()
	return annotated


def cpdep(lib, origindir, dest, libsfound):
 	""" Copies recursively library dependencies """
 	libpath = origindir + "/" + lib
 	if os.path.exists(libpath):
	 	config4 = {'name':'cp', 'input':[libpath, dest]}
		cmd = Command(config4)
		cmd.execute()
	else:
		print "Dependency not found:" + lib
	# Here starts recursive iteration
	fd = open(lib)
	libtxt = fd.read()
	fd.close()
	libs = os.listdir(origindir)
	# Only run recursive on local dependencies, marked with ' " '
	# Otherwise the dependency exponential problem could arise
	# Also, check that dependency is not already part of libsfounb
	# Otherwise will fall in redundancy
	pattern = '#include "([A-Za-z0-9+-_]+)"'
	prog = re.compile(pattern)
	m = prog.search(libtxt)
	while m:
		newlib = m.group(1)
		# print (newlib)
		if not newlib in libsfound and newlib in libs:
			cpdep(newlib, origindir, dest, libsfound)
			libsfound.append(newlib)
		pos = m.end()
		# print (pos)
		m = prog.search(libtxt, pos)

def isInComments(stmnt, src):
	cmntFlag = 0
	for line in src.split('\n'):
		pos_stmnt = line.find(stmnt, 0, len(line) )
		pos_cmnt_begin = line.find("/*", 0, len(line) )
		pos_cmnt_end = line.find("*/", 0, len(line) )
		if pos_cmnt_begin != -1:
			cmntFlag = 1
		if pos_cmnt_end != -1:
			if pos_cmnt_begin != -1 and pos_cmnt_begin > pos_cmnt_end:
				pass
			elif cmntFlag == 1:
				cmntFlag = 0
		if pos_stmnt != -1:
			if line.startswith("//"):
				return True
			if pos_stmnt > pos_cmnt_begin and pos_stmnt < pos_cmnt_end:
				return True;
			if cmntFlag == 1:
				return True

	return False


def pagai2pycparser(srcfile):
	"""
	Transforms an annotated file output from pagai to an input for pycparser.
	"""
	#Replace standard libraries with fake libraries of pycparser
	fkd = os.path.abspath(fakelib_parser)
	path = os.path.abspath(srcfile)
	wd = os.path.dirname(path)


	libs = os.listdir(fkd)

	srcfd = open(srcfile, 'r')

	src = srcfd.read()
	srcfd.close()

	libsfound = []

	originallibs = []

	codepos	= 0
	for lib in libs:
		if lib in src and not isInComments(lib, src):
			#TODO In case there is an assert library, handle it specially
			# Case like this is file fkp2013_variant_false-unreach.c
			beginInclude = src.find(lib, 0, len(src) )
		 	endInclude =  beginInclude + len(lib)
		 	src = src[:beginInclude - 1] + '"' + lib + '"' + src[endInclude + 1:]
		 	libsfound.append(lib)
		 	# Is important to preserve the original libs so that can be restored
		 	originallibs.append(lib)
		 	cpdep(lib, fkd, wd, libsfound)

	# print "Libs found: " + ', '.join(libsfound)

	newfile = srcfile + '_pyc.c'

	fd = open(newfile, "w")
	fd.seek(0)
	fd.truncate()
	fd.write(src)
	fd.close()

	return (newfile, originallibs)

#TODO test function to add fake-libs of pycparser
# if __name__ == "__main__":
# 	sourcefile = ""
#  	if len(sys.argv) > 1:
#  	    sourcefile  = sys.argv[1]
#  	else:
#  		quit()
#  	pagai2pycparser(sourcefile)



"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
Taken from lazy-cseq-1.0
"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

''' strip()  -  Strips every line in the given string
				from the line with '_____STARTSTRIPPINGFROMHERE_____' as substring
				to the one with '_____STOPSTRIPPINGFROMHERE_____' as substring.

				Lines are identified by '\n'
'''
def strip(s):
	s2 = ''
	status = 0

	for line in s.split('\n'):
		if '_____STARTSTRIPPINGFROMHERE_____' in line:
			status = 1
			continue;


		if '_____STOPSTRIPPINGFROMHERE_____' in line:
			status = 2
			continue;

		if status == 0 or status == 2: s2 += line + '\n'

	return s2


'''
	strip()  -  Strips every line in the given string
				from the line with 'startmarker' as substring
				to the one with 'endmarker' as substring.

				Lines are identified by '\n'
'''
def strip2(s, startmarker='_____STARTSTRIPPINGFROMHERE_____', endmarker='_____STOPSTRIPPINGFROMHERE_____' ):
	s2 = ''
	status = 0

	for line in s:
		if line.startswith(startmarker) and status == 0:
			# print "start marker found\n"
			status = 1
			continue;

		if line.endswith(endmarker) and line.startswith(startmarker) and status == 1:
			# print "end marker found\n"
			status = 2
			continue;

		if status == 0 or status == 2: s2 += line + '\n'

	return s2

"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
End of code from lazy-cseq-1.0
"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

def pyccparser2cbmc(srcfile, libs):
	"""
	Transforms the result of a parsed file from pycparser to a valid cbmc 
	input.
	"""
	fd = open(srcfile, "r")
	src = fd.read()
	fd.close()

	# Replace the definition of __VERIFIER_error with the one for CBMC
	if "extern void __VERIFIER_error();" in src:
		# print "__VERIFIER_error found"
		pos = re.search("extern void __VERIFIER_error\(\);", src).pos
		# print "position: " + str(pos)
		vererr  = "extern void __VERIFIER_error() __attribute__ ((__noreturn__));" + '\n'
		src = re.sub("extern void __VERIFIER_error\(\);", vererr, src)

	# Remove the strip lines with original libs
	if "_____STARTSTRIPPINGFROMHERE_____" in src:
		# print "_____STARTSTRIPPINGFROMHERE_____ found"
		pos = src.find("typedef int _____STARTSTRIPPINGFROMHERE_____;", 0, len(src) )
		# print "position: " + str(pos)
		libstr = ""
		for lib in reversed(libs):
			libstr += '#include <' + lib + '>' + '\n'
		src = src[:pos] + libstr + '\n' + src[pos:]

	src = strip(src)

	newfile = srcfile + "_cbmc.c"
	fd  = open(newfile, "w")
	fd.write(src)
	fd.close()

	return newfile


def bmc_analyze(sourcefile, unwind):
	k_unwind = str(unwind)
	config = {'name': cbmcpath, 'input': ['--unwind', k_unwind, 
				'--no-unwinding-assertions', sourcefile] }
	cmd = Command(config)
	cmd.execute()
	output = cmd.getOutput()
	if not output:
		output = cmd.getError()
	newfile = sourcefile + "_cex"
	fd = open(newfile, "w")
	fd.write(output)
	fd.close()	
	# print output

def main():
	#Main function
	sourcefile  = ''
	if __name__ == "__main__":
 	   if len(sys.argv) > 2:
 	       sourcefile  = sys.argv[1]
 	       rounds = sys.argv[2]
 	   else:
 	       print "Usage: prototype.py <filename> <unwind_rounds>"
 	       return 1
	# log = TimeLog()
	# log.setInit()
	# log.displayInit()
	annotated = abs_annotate(sourcefile)
	# log.setEnd()
	# log.displayEnd()
	# log.displaySeconds()

	libs = []
	readytoparse, libs = pagai2pycparser(annotated)

	readytoparse = ensure_C99main(readytoparse)
	try:
		assumed = parse_annotated(readytoparse)
	except Exception as e:
		errorfile = sourcefile + '_pycparser' + '.stderr'
		logging.basicConfig(level=logging.DEBUG, filename=errorfile)
		logging.exception(e)
		raise e

	cbmcready = pyccparser2cbmc(assumed, libs)

	bmc_analyze(cbmcready, rounds)
	

main()