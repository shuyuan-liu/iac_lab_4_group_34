// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1_cpu.h for the primary calling header

#ifndef VERILATED_VF1_CPU___024ROOT_H_
#define VERILATED_VF1_CPU___024ROOT_H_  // guard

#include "verilated.h"

class Vf1_cpu__Syms;

class Vf1_cpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(a0,0,0);
    CData/*0:0*/ f1_cpu__DOT__PCSrc;
    CData/*0:0*/ f1_cpu__DOT__ResultSrc;
    CData/*2:0*/ f1_cpu__DOT__ALUctrl;
    CData/*0:0*/ f1_cpu__DOT__ALUSrcB;
    CData/*1:0*/ f1_cpu__DOT__ImmSrc;
    CData/*0:0*/ f1_cpu__DOT__RegWrite;
    CData/*0:0*/ f1_cpu__DOT__MemWrite;
    CData/*0:0*/ f1_cpu__DOT__ALUSrcA;
    CData/*0:0*/ f1_cpu__DOT__JALctrl;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ f1_cpu__DOT__PC;
    IData/*31:0*/ f1_cpu__DOT__instr;
    IData/*31:0*/ f1_cpu__DOT__rd2;
    IData/*31:0*/ f1_cpu__DOT__ImmExt;
    IData/*31:0*/ f1_cpu__DOT__PCTarget;
    IData/*31:0*/ f1_cpu__DOT__SrcA;
    IData/*31:0*/ f1_cpu__DOT__SrcB;
    IData/*31:0*/ f1_cpu__DOT__ALUResult;
    VlUnpacked<IData/*31:0*/, 32> f1_cpu__DOT__MyRegister__DOT__registers;
    VlUnpacked<CData/*7:0*/, 4096> f1_cpu__DOT__Instr_Mem__DOT__memory;
    VlUnpacked<CData/*7:0*/, 256> f1_cpu__DOT__Data_Mem__DOT__memory;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vf1_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1_cpu___024root(Vf1_cpu__Syms* symsp, const char* name);
    ~Vf1_cpu___024root();
    VL_UNCOPYABLE(Vf1_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
