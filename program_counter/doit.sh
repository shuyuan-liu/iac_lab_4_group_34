rm -rf obj_dir
rm -f program_counter.vcd

verilator -Wall --cc --trace program_counter.sv --exe ProgramCounter_tb.cpp

make -j -C obj_dir/ -f Vprogram_counter.mk 

obj_dir/Vprogram_counter