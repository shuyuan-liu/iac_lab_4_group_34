// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprogram_counter.h for the primary calling header

#ifndef VERILATED_VPROGRAM_COUNTER___024ROOT_H_
#define VERILATED_VPROGRAM_COUNTER___024ROOT_H_  // guard

#include "verilated.h"

class Vprogram_counter__Syms;

class Vprogram_counter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(PCsrc,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(ImmOp,31,0);
    VL_OUT(PC,31,0);
    VL_OUT(PC_plus_4,31,0);

    // INTERNAL VARIABLES
    Vprogram_counter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vprogram_counter___024root(Vprogram_counter__Syms* symsp, const char* name);
    ~Vprogram_counter___024root();
    VL_UNCOPYABLE(Vprogram_counter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
