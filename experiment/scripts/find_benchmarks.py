#!/usr/bin/env python

import sys

list_files = [
"13_unverif_true-unreach-call.c",
"28_buggy_simple_loop1_vf_false-unreach-call.c",
"fib_bench_false-unreach-call.c",
"fib_bench_longer_false-unreach-call.c",
"fib_bench_longer_true-unreach-call.c",
"fib_bench_longest_false-unreach-call.c",
"fib_bench_longest_true-unreach-call.c",
"fib_bench_true-unreach-call.c",
"indexer_true-unreach-call.c",
"queue_false-unreach-call.c",
"queue_longer_false-unreach-call.c",
"queue_longest_false-unreach-call.c",
"queue_ok_longer_true-unreach-call.c",
"queue_ok_longest_true-unreach-call.c",
"queue_ok_true-unreach-call.c",
"reorder_2_false-unreach-call.c",
"sigma_false-unreach-call.c",
"stack_false-unreach-call.c",
"stack_longer_false-unreach-call.c",
"stack_longer_true-unreach-call.c",
"stack_longest_false-unreach-call.c",
"stack_longest_true-unreach-call.c",
"stack_true-unreach-call.c",
"twostage_3_false-unreach-call.c"
]

if __name__ == "__main__":
 	   if len(sys.argv) > 1:
 	       benchmarks_stats  = sys.argv[1]
fd = open(benchmarks_stats, 'r')
s = fd.read()
for line in s.split('\n'):
	for file_name in list_files:
		if file_name in line:
			print line
