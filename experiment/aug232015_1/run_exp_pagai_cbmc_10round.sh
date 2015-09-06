#!/bin/bash

date

time ./prototype_1.2b.py 13_unverif_true-unreach-call.c 10
time ./prototype_1.2b.py fib_bench_false-unreach-call.c 10
time ./prototype_1.2b.py fib_bench_longer_false-unreach-call.c 10
time ./prototype_1.2b.py fib_bench_longer_true-unreach-call.c 10
time ./prototype_1.2b.py fib_bench_longest_false-unreach-call.c 10
time ./prototype_1.2b.py fib_bench_longest_true-unreach-call.c 10
time ./prototype_1.2b.py fib_bench_true-unreach-call.c 10
time ./prototype_1.2b.py sigma_false-unreach-call.c 10
time ./prototype_1.2b.py stack_longer_true-unreach-call.c 10
time ./prototype_1.2b.py stack_longest_true-unreach-call.c 10
time ./prototype_1.2b.py stack_true-unreach-call.c 10
time ./prototype_1.2b.py 28_buggy_simple_loop1_vf_false-unreach-call.c 10
time ./prototype_1.2b.py reorder_2_false-unreach-call.c 10
time ./prototype_1.2b.py stack_false-unreach-call.c 10
time ./prototype_1.2b.py stack_longer_false-unreach-call.c 10
time ./prototype_1.2b.py stack_longest_false-unreach-call.c 10
time ./prototype_1.2b.py twostage_3_false-unreach-call.c 10

date
