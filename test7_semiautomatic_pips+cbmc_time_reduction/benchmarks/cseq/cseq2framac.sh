#!/bin/bash

cd /home/heryxpc/Documents/soton/dissertation/prototype/test7/benchmarks/cseq/

cp 28_buggy_simple_loop1_vf_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp fib_bench_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp fib_bench_longer_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp fib_bench_longest_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp fkp2013_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp fkp2013_variant_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp queue_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp queue_longer_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp queue_longest_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp reorder_2_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp reorder_5_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp sigma_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp stack_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp stack_longer_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp stack_longest_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg
cp twostage_3_false-unreach-call.c /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg

cd /home/heryxpc/Documents/soton/dissertation/tools/cseq/pkg

time ./init_cseq.py --unwind 2 --round 2 -i 28_buggy_simple_loop1_vf_false-unreach-call.c -l out --backend cpachecker > 28_buggy_simple_loop1_vf_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i fib_bench_false-unreach-call.c -l out --backend cpachecker > fib_bench_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i fib_bench_longer_false-unreach-call.c -l out --backend cpachecker > fib_bench_longer_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i fib_bench_longest_false-unreach-call.c -l out --backend cpachecker > fib_bench_longest_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i fkp2013_false-unreach-call.c -l out --backend cpachecker > fkp2013_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i fkp2013_variant_false-unreach-call.c -l out --backend cpachecker > fkp2013_variant_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i queue_false-unreach-call.c -l out --backend cpachecker > queue_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i queue_longer_false-unreach-call.c -l out --backend cpachecker > queue_longer_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i queue_longest_false-unreach-call.c -l out --backend cpachecker > queue_longest_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i reorder_2_false-unreach-call.c -l out --backend cpachecker > reorder_2_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i reorder_5_false-unreach-call.c -l out --backend cpachecker > reorder_5_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i sigma_false-unreach-call.c -l out --backend cpachecker > sigma_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i stack_false-unreach-call.c -l out --backend cpachecker > stack_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i stack_longer_false-unreach-call.c -l out --backend cpachecker > stack_longer_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i stack_longest_false-unreach-call.c -l out --backend cpachecker > stack_longest_false-unreach-call.c_cseq.c
time ./init_cseq.py --unwind 11 --round 2 -i twostage_3_false-unreach-call.c -l out --backend cpachecker > twostage_3_false-unreach-call.c_cseq.c
