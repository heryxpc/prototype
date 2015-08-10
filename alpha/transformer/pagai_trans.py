#!usr/bin/env/python

def parse_pagai_invariant(comment):
	# Function to parse an invariant comment
	# SAMPLE: /* invariant:\n\t\t    102-x-y >= 0\n\t\t    y >= 0\n\t\t    x-y >= 0\n\t\t    */
	pattern = '\s*([A-Za-z0-9+-_/*]+)*\s([<>=]*)\s([0-9])*\s*'
	prog = re.compile(pattern)
	m = prog.search(comment)
	expressions = []
	while m:
		group = m.group(0)
		# print (group)
		pos = m.end()
		# print (pos)
		lexp =  m.group(1)
		op =  m.group(2)
		rexp =  m.group(3)
		texp = (lexp, op, rexp)
		if (not group.startswith(' invariant:') ):
			expressions.append( texp )
		m = prog.search(comment, pos)
	# expressions = prog.findall(comment, re.DOTALL|re.DEBUG)
	# print (expressions)
	# lexp = ''
	# rexp = '' 
	# op = ''
	# for exp in expressions:
	# 	lexp = exp[0]
	# 	op = exp[1]
	# 	rexp = exp[2]
	# 	#~ print "Expression - Leftside: %s Operator: %s Right side: %s" % (lexp, op, rexp)
	return expressions