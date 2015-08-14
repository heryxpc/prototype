#!/usr/bin/env python

import sys

pycparser_barel = '/home/heryxpc/Documents/soton/dissertation/tools/pycparser/barel/barel-pycparser-b9ad39646ebc'
pycparser_last = '/home/heryxpc/Documents/soton/dissertation/tools/pycparser/pycparser-2.14/pycparser'

def defParser(comments):
	if supportComments:
		sys.path.extend(['.', pycparser_barel])
	else:
		sys.path.extend(['.', pycparser_last])

def ensure_C99main(file) :
	""" Ensures That input C file complies with main function C99 standard """
	# print "Start of ensure_C99main"
	openFile = open(file, 'r+')
	code = openFile.read()
	# Ensure main is of the form "int main(args)"
	codepos = code.find('main(', 0, len(code) )
	if ( codepos == -1) :
		print "File %s has no main!" % file
		return
	else :
		mainRetType = code[codepos - 4:codepos]
		if (mainRetType != 'int ' ) :
			print "File %s does not complain with C99: %s", file, mainRetType
			newcode = code[:codepos] + "int " + code[codepos:]
			# file = file + '_C99.c'
			# newFile = open(file, 'w ')
			# newFile.write(newcode)
			# newFile.close()
			openFile.seek(0)
			openFile.truncate()
			openFile.write(newcode)
	openFile.close()
	# print "End of ensure_C99main"
	return file

def clean(dir, files):
	"""
	Cleans from a dir a list of files.
	Accepts wildcards to delete whole sets of files.
	"""
	pass