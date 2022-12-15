#!/usr/bin/sh

rm -rf obj_dir
rm -f pipeline.vcd

make -C ./src hexfile
mv ./src/myprog/*.s.hex ./

verilator --cc --trace --exe pipeline.sv register_file.sv alu.sv control.sv mux_2.sv instr_rom.sv sign_extend.sv ram.sv adder.sv mux_3.sv fetch.sv decode.sv execute.sv memory.sv writeback.sv pipeline_tb.cpp

make -j -C obj_dir/ -f Vpipeline.mk

obj_dir/Vpipeline
