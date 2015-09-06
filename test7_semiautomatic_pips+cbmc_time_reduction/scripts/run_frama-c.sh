#!/bin/bash
echo "Running frama-c value analysis on file: $1 with 10 semantic rounds"
frama-c -slevel 10 -val $1 -print > log_$1_$(date '+%FT%T').log
