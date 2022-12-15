#!/bin/sh

top=f1_cpu

set -e

rm -rf obj_dir
rm -f $top.vcd

make -C ./src hexfile
cp ./src/myprog/*.s.hex .

verilator --cc --trace --exe --top $top ./*.sv ./${top}_tb.cpp
make -j -C ./obj_dir -f V$top.mk

./obj_dir/V$top
