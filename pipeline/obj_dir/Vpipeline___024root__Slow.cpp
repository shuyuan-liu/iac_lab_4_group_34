// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"

#include "Vpipeline__Syms.h"
#include "Vpipeline___024root.h"

void Vpipeline___024root___ctor_var_reset(Vpipeline___024root* vlSelf);

Vpipeline___024root::Vpipeline___024root(Vpipeline__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpipeline___024root___ctor_var_reset(this);
}

void Vpipeline___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpipeline___024root::~Vpipeline___024root() {
}
