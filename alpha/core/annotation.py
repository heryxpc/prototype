#!/usr/bin/env python

# Annotations code
import util

util.defParser(comments=true)

# Finds the closest comment in a dictionary of comments
def closest_comment(line, comments) :
	closerLine = sys.maxint
	distance = 0
	for ln in comments :
		distance = abs(ln - line)
		if distance <= abs(closerLine - line) :
			closerLine = ln
		if line > ln : 
			# If comment line is larger than the reference line, 
			# shouldn't be a comment for this line
			pass
	return closerLine


class CAnnotationsVisitor(c_ast.NodeVisitor):
	"""Visits all loop statements looking for annotations"""
	comments = []
	annotations = []
	# TODO set annotation range dinamically based on code length
	def __init__(self):
		pass

	def setCloserInvariant(self, node, range=10):
		line = node.coord.line
		annotPos = closest_comment(line, self.comments)
		annotation = ''
		if abs(annotPos - line) > range :
			# In case the distance between the line and comment is larger than
			# range, assume there is no invariant for this coord
			pass
		else :
			annotation = self.comments[annotPos]
		 	self.setAnnotation(node, annotation)
		 	self.annotations.append(annotation)
		return annotation

	def setComments(self, comments):
		self.comments = collections.OrderedDict(sorted(comments.items(), 
									key=lambda t: t[0]) )
		# ~print (comments)

	def visit_While(self, node):
	    # print 'While found at line: %s in file %s' % (
	    # 	node.coord.line, node.coord.file)
	    # annotation = self.setCloserInvariant(node)
	    self.setCloserInvariant(node)
	    # print 'Annotation set:[' + annotation + ']'
	    
	def visit_For(self, node):
	    # print 'For found at line: %s in file %s' % (
	    # 	node.coord.line, node.coord.file)
	    # annotation = self.setCloserInvariant(node)
	    self.setCloserInvariant(node)
	    # print 'Annotation set:[' + annotation + ']'
	   
	def setAnnotation(self, node, annotation):
		node.annotation = annotation
		# print "Node:%s" % node.coord
		# print "Annotation:%s" % node.annotation

class CAnnotatedGenerator(c_generator.CGenerator):
	"""
	Visitor that transform parsed C code with annotations into
	C code with assume statments based on selected transformer
	"""
	def __init__(self):
		pass

	#TODO Obtain a block statement and then add as first statement assume
	def addAssumeAnnotations(self, n):
		# print dir(n.stmt)
		# TODO First create a list of block items
		blockItems = []
		# TODO Then transform annotation into an FuncCall of an assume from CBMC
		assumeStr = self.transToAssume(n)
		print (n.coord.line, assumeStr)
		text = 'void fake_func() {' + assumeStr + '}'
		parser = c_parser.CParser()
		ast = parser.parse(text, filename='<none>' )
		# ast.show()
		# TODO Add the created statement to block items
		assumeFuncCall = ast.ext[0].body.block_items[0]
		blockItems.insert(0, assumeFuncCall)
		# TODO Add original block to block items
		blockItems.insert(1, n.stmt)
		# TODO Then create a new compound with all the statements
		comp = c_ast.Compound(blockItems, n.stmt.coord)
		n.stmt = comp
		return n
		

	def transToAssume(self, n):
		s = ''
		if hasattr(n, 'annotation'):
			invariants = parse_pagai_invariant(n.annotation)
			# print (invariants)
			s += '__CPROVER_assume('
			for i, exp in enumerate(invariants):
				s+= exp[0] + ' '
				if exp[1] == '=':
					s+= '=' #Add double equal to make it a valid logic operator
				s+= exp[1] + ' '
				s+= exp[2] + ' '
				if not ( (i + 1) == len(invariants) ) :
					s+= '&& '
			s+= ');\n'
		s += self._make_indent()
		return s


	def visit_While(self, n):
		n = self.addAssumeAnnotations(n)
		s = super(CAnnotatedGenerator, self).visit_While(n)
		return s

	def visit_For(self, n):
		n = self.addAssumeAnnotations(n)
		s = super(CAnnotatedGenerator, self).visit_For(n)
		return s


#####################End of annotated code##############