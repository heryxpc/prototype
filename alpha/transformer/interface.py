#!/usr/bin/env python

Format = {'clang':1, 'pagai':2, 'cseq':3, 'cbmc':4, 'pips':5, 'annot':6}

class Transformer:
	"""
	Defines the behaviour of a Transformer class capable to convert
	from one input to another.

	Could be useful for example to transform one C file to 

	Transformer should be able to transform a whole file or just one string.
	"""
		
	def transformFile(self, input, format):
		""" Transforms one input file to a different output file"""
		pass

	def transformString(self, input, format):
		""" Transforms one input string to a different output string"""
		pass

	def trasformAST(self, inputast, format):
		""" Transform from an AST to an output string"""
		pass	
	
	def readFile(self, file):
		fd = open(file, "r")
		str = fd.read()
		fd.close()
		return str

	def writeFile(self, file, data):
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

	@staticmethod
	def outputName(name, format):
		""" Creates an output file name that this transformer may use """
		suffix = ".c"
		link = "_"
		ftype = format
		if Format.has_key(format):
			# Most cases are just .c, but for clang is .bc
			if Format[format] == Format["clang"]:
				suffix = ".bc"
		elif format in Format.values():
			if format == Format["clang"]:
				suffix = ".bc"
				ftype = "clang"
		output = name + link + ftype + suffix
		return output

	@staticmethod
	def inputName(name, format):
		""" Creates an input file name that this transformer may use """
		suffix = ".c"
		
		if Format.has_key(format):
			# Most cases are just .c, but for pagai is .bc
			if Format[format] == Format["pagai"]:
				suffix = ".bc"
		elif format in Format.values():
			if format == Format["clang"]:
				suffix = ".bc"
				ftype = "clang"
		output = name + link + ftype + suffix
		return output

def test():
	name = "fib_file.c"
	print name
	print Transformer.inputName(name, "pagai")
	print Transformer.inputName(name, "cbmc")
	print Transformer.inputName(name, "pips")
	print Transformer.inputName(name, "annot")
	print Transformer.inputName(name, "clang")
	print Transformer.inputName(name, "wachumera")
	print Transformer.outputName(name, "pagai")
	print Transformer.outputName(name, "cbmc")
	print Transformer.outputName(name, "pips")
	print Transformer.outputName(name, "annot")
	print Transformer.outputName(name, "clang")
	print Transformer.outputName(name, "wachumera")

test()