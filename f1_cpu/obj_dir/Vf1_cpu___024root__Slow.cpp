// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_cpu.h for the primary calling header

#include "verilated.h"

#include "Vf1_cpu__Syms.h"
#include "Vf1_cpu___024root.h"

void Vf1_cpu___024root___ctor_var_reset(Vf1_cpu___024root* vlSelf);

Vf1_cpu___024root::Vf1_cpu___024root(Vf1_cpu__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vf1_cpu___024root___ctor_var_reset(this);
}

void Vf1_cpu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vf1_cpu___024root::~Vf1_cpu___024root() {
}
