#!/bin/bash
for f in *.c 
do 
	echo "File $f"
	pagai -i $f | 
	grep -n "invariant"
done
