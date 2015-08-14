#!/usr/bin/env python
"""
Abstract to Bounded Model Checking module that executes sequentially
software verification tools on concurrent programs.

Aim is to prove that conjunction of Abstract Interpreation and Bounded 
Model Checking provide enhanced performance on software verification 
on concurrent programs.
"""

from argparse import ArgumentParser
from core.toolchain import ToolChain

class AbsToBMC:
	"""Main class to orchestate execution of software verification tools"""
	arguments = []

	def __init__(self, arguments):
		""" Creates a new AbsToBMC object based on input arguments """
		self.arguments = arguments

	@staticmethod
	def parseArguments():
		"""
		Parse all the arguments from CLI
		"""
		parser = ArgumentParser(
			description="""Executes a set of verification tools on given 
							input file""")
		AbsToBMC.__addArgs(parser)
		arguments = parser.parse_args()
		return arguments


	@staticmethod
	def __addArgs(args):
		"""	Defines valid CLI arguments"""
		# print "Usage ./abstobmc.py <options> <input_file>\n"
		# print "Where options are:\n"
		# print "      -h Display this help"
		args.add_argument("input_file", 
			help="Input file on which to run verification tools")
		args.add_argument("-s", "--enable-cseq", action="store_true", 
			help="Enables execution of CSeq sequentialization")
		args.add_argument("-g", "--enable-pagai", action="store_true", 
			help="Enables execution of Pagai")
		args.add_argument("-p", "--enable-pips", action="store_true", 
			help="Enables execution of PIPS")
		args.add_argument("-a", "--enable-annot", action="store_true",
			help="Enables annotations translation to assume statements")
		args.add_argument("-b", "--enable-cbmc", action="store_true", 
			help="Enables execution of CBMC")
		args.add_argument("--cseq-args",  
			help="Arguments to be passed to CSeq.")
		args.add_argument("--pagai-args", 
			help="Arguments to be passed to Pagai")
		args.add_argument("--pips-args",  
			help="Arguments to be passed to PIPS")


	def orchestrate(self):
		""" 
		Executes the chain of software verification tools according to 
		arguments received at command line
		"""
		args = vars(self.arguments)
		ToolChain(args)
			
		

def main():
	"""
	Main function of AbsToBMC module
	"""
	arguments = AbsToBMC.parseArguments()
	if arguments:
		instance = AbsToBMC(arguments)
		instance.orchestrate()
	# if len(sys.argv) > 1:
 # 	       abstobmc = AbsToBMC(sys)
 # 	else:
 # 	     AbsToBMC.usage()
 # 	return
	
 	
	
if __name__ == "__main__":
	main()


