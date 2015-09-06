#!/bin/bash

CBMC_PATH=/home/heryxpc/Documents/soton/dissertation/tools/cbmc/cbmc-5-1-linux-64
export PATH=$PATH:$CBMC_PATH

date

timeout 850 cbmc --unwind 50 --no-unwinding-assertions fkp2013_false-unreach-call.c

date
