#!/usr/bin/env python

from interface import Transformer

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

def PAGAITransformer(Transformer):
	"""
	Transforms a C file in a valid input file to Pagai
	"""
	def __init__(self):
		"""Default constructor"""
		return

	def transformFile(self, input, format):
		""" Transforms input C file to valid C input file for Pagai """
		instr = self.__read(input)
		outstr = ""
		outs = self.transfromString(intstr, outstr)
		outfile = self.__write(output, outs)


	def transformString(self, input, format):
		""" 
		Transforms a string with a valid C Syntax tree to a 
		valid Pagai C input file
		"""
		# For the moment don't do anything with the input
		return input

