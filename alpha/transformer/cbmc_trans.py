#!usr/bin/env/python

from interface import Transformer
class CBMCTransformer(Transformer):
	"""
	Transforms a C file in a valid input file to CSeq
	"""
	def __init__(self):
		"""Default constructor"""
		return

	def transformFile(self, input, output):
		""" Transforms input C file to valid C input file for CSeq """
		instr = self.__read(input)
		outstr = ""
		outs = self.transfromString(intstr, outstr)
		outfile = self.__write(output, outs)


	def transformString(self, input, output):
		""" 
		Transforms a string with a valid C Syntax three to a 
		valid CSeq c file syntax three input
		"""
		# For the moment don't do anything with the input
		return input


	
