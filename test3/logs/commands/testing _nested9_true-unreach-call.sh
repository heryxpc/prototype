# testing  nested9_true-unreach-call.i

time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/original/loop-invgen/nested9_true-unreach-call.i > logs/bmc/original/LOG_6u_nested9_true-unreach-call.i.log
# real	0m0.225s

time cbmc --unwind 12 --no-unwinding-assertions --32 benchmarks/original/loop-invgen/nested9_true-unreach-call.i > logs/bmc/original/LOG_12u_nested9_true-unreach-call.i.log
# real 0m1.039s

time cbmc --unwind 17 --no-unwinding-assertions --32 benchmarks/original/loop-invgen/nested9_true-unreach-call.i > logs/bmc/original/LOG_17u_nested9_true-unreach-call.i.log
# 0m5.952s

time cbmc --unwind 21--no-unwinding-assertions --32 benchmarks/original/loop-invgen/nested9_true-unreach-call.i > logs/bmc/original/LOG_21u_nested9_true-unreach-call.i.log

cp benchmarks/original/loop-invgen/nested9_true-unreach-call.i benchmarks/original/loop-invgen/nested9_true-unreach-call.c

time pagai -i benchmarks/original/loop-invgen/nested9_true-unreach-call.c | sed -r 's:\x1B\[[0-9;]*[mK]::g' > benchmarks/invariant/loop-invgen/nested9_true-unreach-call.i
#real 0m0.233s

time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/invariant/loop-invgen/nested9_true-unreach-call.i > logs/bmc/invariant/LOG_6u_nested9_true-unreach-call.i.log
# real 0m0.246s
time cbmc --unwind 12 --no-unwinding-assertions --32 benchmarks/invariant/loop-invgen/nested9_true-unreach-call.i > logs/bmc/invariant/LOG_12u_nested9_true-unreach-call.i.log
# real 0m1.390s
time cbmc --unwind 17 --no-unwinding-assertions --32 benchmarks/invariant/loop-invgen/nested9_true-unreach-call.i > logs/bmc/invariant/LOG_17u_nested9_true-unreach-call.i.log
# 0m10.345s