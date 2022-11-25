rm -rf obj_dir
rm -f register_file.vcd

verilator -Wall --cc --trace register_file.sv --exe register_file_tb.cpp

make -j -C obj_dir/ -f Vregister_file.mk 

obj_dir/Vregister_file