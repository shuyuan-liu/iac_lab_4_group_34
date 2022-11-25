#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vregister_file.h"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    Vregister_file* top = new Vregister_file;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open("register_file.vcd");

    for (i=0; i<10000;i++){
        if(i<32){
            top->ad3 = i;
            top->we3 = 1;
            top->wd3 = i;
        }
        top->ad1 = i-1;
        top->ad2 =i;

        for (clk=0;clk<2;clk++){
            top->clk =! top->clk;
            top->eval();
            tfp->dump (2*i+clk);
        }

        if(Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}