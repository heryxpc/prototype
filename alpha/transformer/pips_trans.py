#!/usr/bin/env python

from interface import Transformer
class PIPSTransformer(Transformer):
	"""
	Transformer from PIPS output
	"""
	def transformFile(self, input, format):
		""" Transforms one input file to a different output file"""
		pass

	def transformString(self, input, format):
		""" Transforms one input string to a different output string"""
		pass

	def trasformAST(self, inputast, format):
		"""Transform from an AST to an output string"""
		pass
