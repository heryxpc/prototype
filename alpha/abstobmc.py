#!usr/bin/env/python
"""
Abstract to Bounded Model Checking module that executes sequentially
software verification tools on concurrent programs.

Aim is to prove that conjunction of Abstract Interpreation and Bounded 
Model Checking provide enhanced performance on software verification 
on concurrent programs.
"""
class AbsToBMC:
	"""Main class to orchestate execution of software verification tools"""
	def arguments = ""
	def attributes = []

	def __init__(self, arguments):
		""" Creates a new AbsToBMC object based on input arguments """
		self.arguments = arguments
		self.splitArguments(arguments)

	def splitArguments(self, arguments):
		"""
		Split all the arguments and assign them in pairs of attributes
		"""
		attrib = []
		return atrib

	@staticmethod
	def usage(self):
		"""	Displays usage information	"""
		pass

	def orchestate(self):
		""" 
		Executes the chain of software verification tools according to 
		arguments received at command line
		"""
		pass

def main():
	"""
	Main function of AbsToBMC module
	"""
 	if len(sys.argv) > 1:
 	       abstobmc = AbsToBMC(sys)
 	else:
 	     AbsToBMC.usage()
 	return
	
if __name__ == "__main__":
	main()


