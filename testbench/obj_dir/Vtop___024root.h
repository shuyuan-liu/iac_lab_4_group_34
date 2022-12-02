// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ top__DOT__PCsrc;
    CData/*0:0*/ top__DOT__RegWrite;
    CData/*0:0*/ top__DOT__ALUctrl;
    CData/*0:0*/ top__DOT__ALUsrc;
    CData/*0:0*/ top__DOT__ImmSrc;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    IData/*31:0*/ top__DOT__ImmOp;
    IData/*31:0*/ top__DOT__PC;
    IData/*31:0*/ top__DOT__instr;
    IData/*31:0*/ top__DOT__ALUop1;
    IData/*31:0*/ top__DOT__ALUop2;
    IData/*31:0*/ top__DOT__ALUout;
    VlUnpacked<IData/*31:0*/, 65536> top__DOT__Instr_Mem__DOT__memory;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__Register__DOT__registers;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
