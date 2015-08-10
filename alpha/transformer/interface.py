#!usr/bin/env/python

from enum import Enum


class Transformer:
	"""
	Defines the behaviour of a Transformer class capable to convert
	from one input to another.

	Could be useful for example to transform one C file to 

	Transformer should be able to transform a whole file or just one string.
	"""
	Format = Enum('Format', 'pagai cseq cbmc pips')
	
	def transformFile(self, input, format):
		""" Transforms one input file to a different output file"""
		pass

	def transformString(self, input, format):
		""" Transforms one input string to a different output string"""
		pass

	def trasformAST(self, inputast, format):
		"""Transform from an AST to an output string"""
		pass
	
	def __readFile(self, file):
		fd = open(file, "r")
		str = fd.read()
		fd.close()
		return str

	def __writeFile(self, file, data):
		"""
		Writes data to file. Always truncates and refresh the file.
		"""
		fd = open(file, "w")
		fd.write(data)
		fd.seek(0)
		fd.truncate()
		fd.write(newcode)
		fd.close()
		return file