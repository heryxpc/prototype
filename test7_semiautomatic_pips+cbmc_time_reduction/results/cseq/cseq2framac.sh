#!/bin/bash


date

time frama-c -val -print -slevel 10 28_buggy_simple_loop1_vf_false-unreach-call.c_cseq.c -print -machdep x86_64 > 28_buggy_simple_loop1_vf_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 fib_bench_false-unreach-call.c_cseq.c -print -machdep x86_64 > fib_bench_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 fib_bench_longer_false-unreach-call.c_cseq.c -print -machdep x86_64 > fib_bench_longer_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 fib_bench_longest_false-unreach-call.c_cseq.c -print -machdep x86_64 > fib_bench_longest_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 fkp2013_false-unreach-call.c_cseq.c -print -machdep x86_64 > fkp2013_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 fkp2013_variant_false-unreach-call.c_cseq.c -print -machdep x86_64 > fkp2013_variant_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 queue_false-unreach-call.c_cseq.c -print -machdep x86_64 > queue_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 queue_longer_false-unreach-call.c_cseq.c -print -machdep x86_64 > queue_longer_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 queue_longest_false-unreach-call.c_cseq.c -print -machdep x86_64 > queue_longest_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 reorder_2_false-unreach-call.c_cseq.c -print -machdep x86_64 > reorder_2_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 reorder_5_false-unreach-call.c_cseq.c -print -machdep x86_64 > reorder_5_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 sigma_false-unreach-call.c_cseq.c -print -machdep x86_64 > sigma_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 stack_false-unreach-call.c_cseq.c -print -machdep x86_64 > stack_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 stack_longer_false-unreach-call.c_cseq.c -print -machdep x86_64 > stack_longer_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 stack_longest_false-unreach-call.c_cseq.c -print -machdep x86_64 > stack_longest_false-unreach-call.c_cseq.c_val.c
time frama-c -val -print -slevel 10 twostage_3_false-unreach-call.c_cseq.c -print -machdep x86_64 > twostage_3_false-unreach-call.c_cseq.c_val.c

date