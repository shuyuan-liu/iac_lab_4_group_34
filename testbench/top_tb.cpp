#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    Vtop* top = new Vtop;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");


    for (i=0; i<10000; i++) {
        top->clk = 1;
        top->rst = 0;

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