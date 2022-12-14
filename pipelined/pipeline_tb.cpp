#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vpipeline.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto top = new Vpipeline;
    Verilated::traceEverOn(true);
    auto tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("pipeline.vcd");

    top->clk = 0;
    for (int cycle = 0; cycle < 10000; cycle++) {
        top->rst = (cycle == 0);
        for (int tick = 0; tick < 2; tick++){
            top->eval();
            tfp->dump(2 * cycle + tick);
            top->clk = !top->clk;
        }
        if (Verilated::gotFinish()) exit(0);
    }

    tfp->close();
    exit(0);
}
