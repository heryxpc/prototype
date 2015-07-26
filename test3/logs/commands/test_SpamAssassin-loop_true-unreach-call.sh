# testing  SpamAssassin-loop_true-unreach-call.i

time cbmc --unwind 12 --no-unwinding-assertions --32 benchmarks/original/loop-invgen/SpamAssassin-loop_true-unreach-call.i > logs/bmc/original/LOG_201507231817_12u_SpamAssassin-loop_true-unreach-call.i.log
# real	46m28.133s
time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/original/loop-invgen/SpamAssassin-loop_true-unreach-call.i > logs/bmc/original/LOG_201507231916_6u_SpamAssassin-loop_true-unreach-call.i.log
# real	0m19.061s
time cbmc --unwind 10 --no-unwinding-assertions --32 benchmarks/original/loop-invgen/SpamAssassin-loop_true-unreach-call.i > logs/bmc/original/LOG_201507261950_10u_SpamAssassin-loop_true-unreach-call.i.log
# real 21m18.298s

cp benchmarks/original/loop-invgen/SpamAssassin-loop_true-unreach-call.i benchmarks/original/loop-invgen/SpamAssassin-loop_true-unreach-call.c

time pagai -i benchmarks/original/loop-invgen/SpamAssassin-loop_true-unreach-call.c | sed -r 's:\x1B\[[0-9;]*[mK]::g' > benchmarks/invariant/loop-invgen/SpamAssassin-loop_true-unreach-call.i
# real	0m0.201s

time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/invariant/loop-invgen/SpamAssassin-loop_true-unreach-call.i > logs/bmc/invariant/LOG_201507231955_6u_SpamAssassin-loop_true-unreach-call.i.log
# real	0m2.473s
time cbmc --unwind 12 --no-unwinding-assertions --32 benchmarks/invariant/loop-invgen/SpamAssassin-loop_true-unreach-call.i > logs/bmc/invariant/LOG_201507231956_12u_SpamAssassin-loop_true-unreach-call.i.log
# real	0m36.626s
time cbmc --unwind 10 --no-unwinding-assertions --32 benchmarks/invariant/loop-invgen/SpamAssassin-loop_true-unreach-call.i > logs/bmc/invariant/LOG_201507261951_10u_SpamAssassin-loop_true-unreach-call.i.log
# real 0m24.632s