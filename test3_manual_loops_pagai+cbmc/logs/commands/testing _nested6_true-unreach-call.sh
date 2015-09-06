# testing  nested6_true-unreach-call.i

time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/original/loop-invgen/nested6_true-unreach-call.i > logs/bmc/original/LOG_6u_nested6_true-unreach-call.i.log
# real	0m0.762s

time cbmc --unwind 12 --no-unwinding-assertions --32 benchmarks/original/loop-invgen/nested6_true-unreach-call.i > logs/bmc/original/LOG_12u_nested6_true-unreach-call.i.log
# real 0m18.301s


cp benchmarks/original/loop-invgen/nested6_true-unreach-call.i benchmarks/original/loop-invgen/nested6_true-unreach-call.c

time pagai -i benchmarks/original/loop-invgen/nested6_true-unreach-call.c | sed -r 's:\x1B\[[0-9;]*[mK]::g' > benchmarks/invariant/loop-invgen/nested6_true-unreach-call.i
# real	0m0.184s

time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/invariant/loop-invgen/nested6_true-unreach-call.i > logs/bmc/invariant/LOG_6u_nested6_true-unreach-call.i.log
# real 0m0.769s
time cbmc --unwind 12 --no-unwinding-assertions --32 benchmarks/invariant/loop-invgen/nested6_true-unreach-call.i > logs/bmc/invariant/LOG_12u_nested6_true-unreach-call.i.log
# real 0m17.948s
