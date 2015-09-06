#!/bin/bash

date

time ./prototype_1.2b.py 28_buggy_simple_loop1_vf_false-unreach-call.c_cseq.c 4  
time ./prototype_1.2b.py fib_bench_false-unreach-call.c_cseq.c 4  
time ./prototype_1.2b.py fib_bench_longer_false-unreach-call.c_cseq.c 4  
time ./prototype_1.2b.py fib_bench_longest_false-unreach-call.c_cseq.c 4  
time ./prototype_1.2b.py fkp2013_false-unreach-call.c_cseq.c 4  
time ./prototype_1.2b.py fkp2013_variant_false-unreach-call.c_cseq.c 4  
time ./prototype_1.2b.py queue_false-unreach-call.c_cseq.c 4  
time ./prototype_1.2b.py queue_longer_false-unreach-call.c_cseq.c 4  
time ./prototype_1.2b.py queue_longest_false-unreach-call.c_cseq.c 4  
time ./prototype_1.2b.py reorder_2_false-unreach-call.c_cseq.c 4  
time ./prototype_1.2b.py reorder_5_false-unreach-call.c_cseq.c 4  
time ./prototype_1.2b.py sigma_false-unreach-call.c_cseq.c 4  
time ./prtotype_1.2b.py stack_false-unreach-call.c_cseq.c 4  
time ./prototype_1.2b.py stack_longer_false-unreach-call.c_cseq.c 4  
time ./prototype_1.2b.py stack_longest_false-unreach-call.c_cseq.c 4  
time ./prototype_1.2b.py twostage_3_false-unreach-call.c_cseq.c 4  

date