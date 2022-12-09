#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1_cpu.h"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    Vf1_cpu* top = new Vf1_cpu;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("f1_cpu.vcd");


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