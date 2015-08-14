#!/usr/bin/env python

import sys, os

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
	commands = []
	input_file = ""
	work_dir = ""
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
			if "input_file" == arg:
				if not os.path.isfile(value):
					print "ERROR: Invalid input file:" + value
				realpath = os.path.realpath(value)
				self.work_dir = os.path.dirname(realpath)
				self.input_file = os.path.basename(realpath)
		self.sequence = sorted(self.sequence)

	def init():
		""" 
		Initialize the tool chain commands, and transformers required
		to pass information from one command to the other
		"""
		cmd = None
		tools = self.sequence
		for t in reversed(tools):
			# Need the transformation output file name 
			# before creating the command
			if t == self.tool["pagai"]:
				sourcefile = 
				config = {'name':'clang-3.5', 'input': ['-emit-llvm', '-g', '-c', 
				sourcefile, '-o', llvmfile] }
				cmd = Command(config)


	def printChain():
		"""
		Prints the toolchain to be executed
		"""
		pass

	def execute():
		""" Executes the commands in the toolchain """
		pass