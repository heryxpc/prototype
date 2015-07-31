#!/bin/bash
echo "Running frama-c value analysis on file: $1 with $2 semantic rounds"
frama-c -slevel $2 -val ../benchmarks/original/$1 -print > log_$1_$(date '+%FT%T').log
