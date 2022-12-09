rm -rf obj_dir
rm -f f1_cpu.vcd

verilator --cc --trace --exe f1_cpu.sv register_file.sv  alu.sv control.sv mux_2.sv program_counter.sv register_file.sv instr_rom.sv sign_extend.sv ram.sv adder.sv f1_cpu_tb.cpp

make -j -C obj_dir/ -f Vf1_cpu.mk 

obj_dir/Vf1_cpu