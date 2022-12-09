// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprogram_counter.h for the primary calling header

#include "verilated.h"

#include "Vprogram_counter___024root.h"

VL_ATTR_COLD void Vprogram_counter___024root___settle__TOP__0(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->PC_plus_4 = ((IData)(4U) + vlSelf->PC);
}

VL_ATTR_COLD void Vprogram_counter___024root___eval_initial(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vprogram_counter___024root___eval_settle(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_settle\n"); );
    // Body
    Vprogram_counter___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vprogram_counter___024root___final(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___final\n"); );
}

VL_ATTR_COLD void Vprogram_counter___024root___ctor_var_reset(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
    vlSelf->PC = VL_RAND_RESET_I(32);
    vlSelf->PC_plus_4 = VL_RAND_RESET_I(32);
}
