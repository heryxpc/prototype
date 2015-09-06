#!/bin/sh

#Too execute this shell run ". init.sh" from command line

#Add cbmc and pagai to execution path
export CBMC_PATH=/home/heryxpc/Documents/soton/dissertation/tools/cbmc/cbmc-4-9-linux-64/
export PAGAI_PATH=/home/heryxpc/Documents/soton/dissertation/tools/pagai
export PATH=$PATH:$CBMC_PATH:$PAGAI_PATH