
time cbmc --unwind 2 --no-unwinding-assertions --32 benchmarks/original/loops/insertion_sort_false-unreach-call.c >> logs/LOG_2u_insertion_sort_false-unreach-call.c
time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/original/loops/insertion_sort_false-unreach-call.c > logs/bmc/LOG_2u_insertion_sort_false-unreach-call.c.log

pagai -i benchmarks/original/loops/insertion_sort_false-unreach-call.c | sed -r 's:\x1B\[[0-9;]*[mK]::g' > benchmarks/invariant/loops/insertion_sort_false-unreach-call.c

grep invariant benchmarks/invariant/loops/insertion_sort_false-unreach-call.c | wc -l

time cbmc --unwind 6 --no-unwinding-assertions --32 benchmarks/invariant/loops/insertion_sort_false-unreach-call.c > logs/bmc/LOG_6u_anno_insertion_sort_false-unreach-call.c.log
