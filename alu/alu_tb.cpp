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
         if(i<=5){
            top->op1=i;
            top->op2=1;
            top->ctrl=0;

        }
        else if(5<i&&i<=10){
            top->op1 = i;
            top->op2 = i;
            top->ctrl = 1;

        }
        else if(10<i&&i<=15){
            top->op1 = i;
            top->op2 = i+1;
            top->ctrl = 2;
        }
        else if(15<i&&i<=20){
            top->op1 = i;
            top->op2 = i+1;
            top->ctrl = 3;
        }
        else if(20<i&&i<=25){
            top->op1 = i;
            top->op2 = i+1;
            top->ctrl = 4;
        }
        else if(25<i&&i<=30){
            top->op1=i;
            top->op2=2;
            top->ctrl=5;
        }
        else if(30<i&&i<=35){
            top->op1=i;
            top->op2=5;
            top->ctrl=6;
        }
        else{
            top->op1=i;
            top->op2=i;
            top->ctrl=7;
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