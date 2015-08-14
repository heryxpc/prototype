#!/usr/bin/env python

import sys

sys.path.extend([".","../transformer"])

tool = {'pagai':1, 'cseq':2, 'cbmc':3, 'pips':4, 'annot':5}

class ToolChain:
	"""
	Toolchain to execute a set of commands
	"""
	args = []
	commands = []
	transformers = []
	sequence = []
	def __init__(self, args):
		"""
		Default constructor
		"""
		self.args = args
		
		for arg, value in args.items():
			if "enable_" in arg:
				flag = arg[7:]
				if value == True:
					self.sequence.append(tool[flag] )
			if "_args" in arg:
				flag = arg.replace("_args", "")
		self.sequence = sorted(self.sequence)
	def printChain():
		"""
		Prints the toolchain to be executed
		"""
		pass