#!/bin/bash

cd aug222015_1
./run_exp_4rounds.sh
cd ../aug222015_2
./run_exp_phtread_lit_4rounds.sh
cd ../aug222015_3/
./run_exp_phtread_lit_10rounds.sh
cd ../aug222015_4/
./run_exp_phtread_wmm_4rounds.sh
