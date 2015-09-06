# testing  apache-escape-absolute_true-unreach-call.i

time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/original/loop-invgen/apache-escape-absolute_true-unreach-call.i > logs/bmc/original/LOG6u_apache-escape-absolute_true-unreach-call.i.log
# real	0m5.888s 

cp benchmarks/original/loop-invgen/apache-escape-absolute_true-unreach-call.i benchmarks/original/loop-invgen/apache-escape-absolute_true-unreach-call.c

time pagai -i benchmarks/original/loop-invgen/apache-escape-absolute_true-unreach-call.c | sed -r 's:\x1B\[[0-9;]*[mK]::g' > benchmarks/invariant/loop-invgen/apache-escape-absolute_true-unreach-call.i
# real	0m0.201s
# No invariants generated

