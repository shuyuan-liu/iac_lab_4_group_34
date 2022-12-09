// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprogram_counter.h for the primary calling header

#include "verilated.h"

#include "Vprogram_counter__Syms.h"
#include "Vprogram_counter___024root.h"

void Vprogram_counter___024root___ctor_var_reset(Vprogram_counter___024root* vlSelf);

Vprogram_counter___024root::Vprogram_counter___024root(Vprogram_counter__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vprogram_counter___024root___ctor_var_reset(this);
}

void Vprogram_counter___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vprogram_counter___024root::~Vprogram_counter___024root() {
}
