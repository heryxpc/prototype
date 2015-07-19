

 wc -l benchmarks/original/loops/s3_false-unreach-call.i

# 2 6 12 17 21 40

time cbmc --unwind 2 --no-unwinding-assertions --32 benchmarks/original/loops/s3_false-unreaclh-call.i > logs/bmc/LOG_2u_s3_false-unreaclh-call.i.log
time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/original/loops/s3_false-unreach-call.i > logs/bmc/LOG_6u_s3_false-unreach-call.i.log
time cbmc --unwind 12 --no-unwinding-assertions --32 benchmarks/original/loops/s3_false-unreach-call.i > logs/bmc/LOG_12u_s3_false-unreach-call.i.log

cp benchmarks/original/loops/s3_false-unreach-call.i benchmarks/invariant/loops/s3_false-unreach-call.c
mv benchmarks/invariant/loops/s3_false-unreach-call.c benchmarks/invariant/loops/s3_false-unreach-call.tmp.c

time pagai -i benchmarks/invariant/loops/s3_false-unreach-call.tmp.c | sed -r 's:\x1B\[[0-9;]*[mK]::g' > benchmarks/invariant/loops/s3_false-unreach-call.i

grep invariant benchmarks/invariant/loops/s3_false-unreach-call.i | wc -l
grep -c invariant benchmarks/invariant/loops/s3_false-unreach-call.i 

time cbmc --unwind 2 --no-unwinding-assertions --32 benchmarks/invariant/loops/s3_false-unreach-call.i > logs/bmc/invariant/LOG_2u_s3_false-unreaclh-call.i.log
time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/invariant/loops/s3_false-unreach-call.i > logs/bmc/invariant/LOG_6u_s3_false-unreach-call.i.log
time cbmc --unwind 12 --no-unwinding-assertions --32 benchmarks/invariant/loops/s3_false-unreach-call.i > logs/bmc/invariant/LOG_12u_s3_false-unreach-call.i.log

time cbmc --unwind 12 --no-unwinding-assertions --32 benchmarks/invariant/assert/loops/s3_false-unreach-call.i > logs/bmc/assertion/LOG_12u_assert_s3_false-unreach-call.i.log
time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/invariant/assert/loops/s3_false-unreach-call.i > logs/bmc/assertion/LOG_6u_assert_s3_false-unreach-call.i.log
time cbmc --unwind 2 --no-unwinding-assertions --32 benchmarks/invariant/assert/loops/s3_false-unreach-call.i > logs/bmc/assertion/LOG_2u_assert_s3_false-unreach-call.i.log