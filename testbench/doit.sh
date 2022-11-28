rm -rf obj_dir
rm -f top.vcd

verilator -Wall --cc --trace --exe top.sv register_file.sv  alu.sv control.sv mux_2.sv program_counter.sv register_file.sv rom.sv sign_extend.sv top_tb.cpp

make -j -C obj_dir/ -f Vtop.mk 

obj_dir/Vtop