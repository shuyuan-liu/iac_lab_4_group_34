#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Valu.h"


int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    Valu* top = new Valu;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open("alu.vcd");

    

    for (i=0; i<10000; i++) {
         if(i<500){
            top->op1=i;
            top->op2=1;
            top->ctrl=0;

        }
        else{
            top->op1 = i;
            top->op2 = i;
            top->ctrl = 1;

        }

        for (clk=0; clk<2; clk++) {
            top->eval();
            tfp->dump (2*i+clk);
        }

    


    
        


        if (Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}