#!/bin/bash

CBMC_PATH=/home/heryxpc/Documents/soton/dissertation/tools/cbmc/cbmc-5-1-linux-64
export PATH=$PATH:$CBMC_PATH

date

time cbmc --unwind 4 --no-unwinding-assertions fk2012_true-unreach-call.c
time cbmc --unwind 4 --no-unwinding-assertions fkp2013_false-unreach-call.c
time cbmc --unwind 4 --no-unwinding-assertions fkp2013_true-unreach-call.c
time cbmc --unwind 4 --no-unwinding-assertions fkp2013_variant_false-unreach-call.c
time cbmc --unwind 4 --no-unwinding-assertions fkp2013_variant_true-unreach-call.c
time cbmc --unwind 4 --no-unwinding-assertions fkp2014_true-unreach-call.c
time cbmc --unwind 4 --no-unwinding-assertions qw2004_false-unreach-call.c
time cbmc --unwind 4 --no-unwinding-assertions qw2004_true-unreach-call.c
time cbmc --unwind 4 --no-unwinding-assertions qw2004_variant_true-unreach-call.c
time cbmc --unwind 4 --no-unwinding-assertions sssc12_true-unreach-call.c
time cbmc --unwind 4 --no-unwinding-assertions sssc12_variant_true-unreach-call.c

date