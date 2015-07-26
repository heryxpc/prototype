
time cbmc --unwind 2 --no-unwinding-assertions --32 benchmarks/original/loops/insertion_sort_false-unreach-call.c >> logs/LOG_2u_insertion_sort_false-unreach-call.c
time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/original/loops/insertion_sort_false-unreach-call.c > logs/bmc/LOG_2u_insertion_sort_false-unreach-call.c.log

pagai -i benchmarks/original/loops/insertion_sort_false-unreach-call.c | sed -r 's:\x1B\[[0-9;]*[mK]::g' > benchmarks/invariant/loops/insertion_sort_false-unreach-call.c

grep invariant benchmarks/invariant/loops/insertion_sort_false-unreach-call.c | wc -l

time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/invariant/loops/insertion_sort_false-unreach-call.c > logs/bmc/LOG_6u_anno_insertion_sort_false-unreach-call.c.log


time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/invariant/loops/insertion_sort_false-unreach-call.c > logs/bmc/invariant/LOG201507201332_6u_anno_insertion_sort_false-unreach-call.c.log
# real	0m9.908s
time cbmc --unwind 2 --no-unwinding-assertions --32 benchmarks/invariant/loops/insertion_sort_false-unreach-call.c > logs/bmc/invariant/LOG201507201337_2u_anno_insertion_sort_false-unreach-call.c.log
# real	0m0.395s
time cbmc --unwind 4 --no-unwinding-assertions --32 benchmarks/invariant/loops/insertion_sort_false-unreach-call.c > logs/bmc/invariant/LOG201507201340_4u_anno_insertion_sort_false-unreach-call.c.log
# real	0m1.755s


time cbmc --unwind 4 --no-unwinding-assertions --32 benchmarks/original/loops/insertion_sort_false-unreach-call.c > logs/bmc/LOG201507201346_4u_insertion_sort_false-unreach-call.c
# real	0m1.765s