#!/usr/bin/env python

class Command:
	"""Class that contains an external command execution"""

	def __init__(self, config ):
		self.config = config
		self.name = config['name']
		self.input = config['input']
		self.output = ''
		self.error = ''

	def execute(self):
		"""	Runs this command and saves the stdout and stderr as strings """
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

	def getError(self)
		return self.error