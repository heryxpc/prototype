# 2 6 12 17 21 40

time cbmc --unwind 2 --no-unwinding-assertions --32 benchmarks/original/loops/n.c24_false-unreach-call.i > logs/bmc/LOG_2u_n.c24_false-unreach-call.i.log
#real	0m0.497s
time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/original/loops/n.c24_false-unreach-call.i > logs/bmc/LOG_6u_n.c24_false-unreach-call.i.log
#real	0m9.360s
time cbmc --unwind 12 --no-unwinding-assertions --32 benchmarks/original/loops/n.c24_false-unreach-call.i > logs/bmc/LOG_12u_n.c24_false-unreach-call.i.log
#real	7m52.746s
time cbmc --unwind 17 --no-unwinding-assertions --32 benchmarks/original/loops/n.c24_false-unreach-call.i > logs/bmc/LOG_17u_n.c24_false-unreach-call.i.log
# Killed - probably due to out of memory
# real	69m18.028s
time cbmc --unwind 21 --no-unwinding-assertions --32 benchmarks/original/loops/n.c24_false-unreach-call.i > logs/bmc/LOG_21u_n.c24_false-unreach-call.i.log

time cbmc --unwind 40 --no-unwinding-assertions --32 benchmarks/original/loops/n.c24_false-unreach-call.i > logs/bmc/LOG_40u_n.c24_false-unreach-call.i.log

cp benchmarks/original/loops/n.c24_false-unreach-call.i benchmarks/invariant/loops/n.c24_false-unreach-call.c
mv benchmarks/invariant/loops/n.c24_false-unreach-call.c benchmarks/invariant/loops/n.c24_false-unreach-call.tmp.c

time pagai -i benchmarks/invariant/loops/n.c24_false-unreach-call.tmp.c | sed -r 's:\x1B\[[0-9;]*[mK]::g' > benchmarks/invariant/loops/n.c24_false-unreach-call.i
# 47 warnings generated.

# real	0m1.204s
# user	0m0.921s
# sys	0m0.115s

grep -c invariant benchmarks/invariant/loops/n.c24_false-unreach-call.i
grep -l invariant benchmarks/invariant/loops/n.c24_false-unreach-call.i

time cbmc --unwind 2 --no-unwinding-assertions --32 benchmarks/invariant/loops/n.c24_false-unreach-call.i > logs/bmc/invariant/LOG_2u_n.c24_false-unreach-call.i.log
# real	0m0.633s
time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/invariant/loops/n.c24_false-unreach-call.i > logs/bmc/invariant/LOG_6u_n.c24_false-unreach-call.i.log
# real	0m9.413s
time cbmc --unwind 12 --no-unwinding-assertions --32 benchmarks/invariant/loops/n.c24_false-unreach-call.i > logs/bmc/invariant/LOG_12u_n.c24_false-unreach-call.i.log
# real	7m43.564s
time cbmc --unwind 17 --no-unwinding-assertions --32 benchmarks/invariant/loops/n.c24_false-unreach-call.i > logs/bmc/invariant/LOG_17u_n.c24_false-unreach-call.i.log


# Assertion
time cbmc --unwind 12 --no-unwinding-assertions --32 benchmarks/invariant/assert/loops/n.c24_false-unreach-call.i > logs/bmc/assertion/LOG_12u_n.c24_false-unreach-call.i.log
# real	10m38.384s
time cbmc --unwind 2 --no-unwinding-assertions --32 benchmarks/invariant/assert/loops/n.c24_false-unreach-call.i > logs/bmc/assertion/LOG_2u_n.c24_false-unreach-call.i.log
# real 0m0.838s

time cbmc --unwind 17 --no-unwinding-assertions --32 benchmarks/invariant/loops/n.c24_false-unreach-call.i > logs/bmc/invariant/LOG201507201435_17u_n.c24_false-unreach-call.i.log