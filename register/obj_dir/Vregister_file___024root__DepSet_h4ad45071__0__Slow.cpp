// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file.h for the primary calling header

#include "verilated.h"

#include "Vregister_file___024root.h"

VL_ATTR_COLD void Vregister_file___024root___settle__TOP__0(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->resgister_file__DOT__registers
        [0xaU];
    vlSelf->rd1 = ((0U == (IData)(vlSelf->ad1)) ? 0U
                    : vlSelf->resgister_file__DOT__registers
                   [vlSelf->ad1]);
    vlSelf->rd2 = ((0U == (IData)(vlSelf->ad2)) ? 0U
                    : vlSelf->resgister_file__DOT__registers
                   [vlSelf->ad2]);
}

VL_ATTR_COLD void Vregister_file___024root___eval_initial(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vregister_file___024root___eval_settle(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_settle\n"); );
    // Body
    Vregister_file___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vregister_file___024root___final(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___final\n"); );
}

VL_ATTR_COLD void Vregister_file___024root___ctor_var_reset(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->ad1 = VL_RAND_RESET_I(5);
    vlSelf->ad2 = VL_RAND_RESET_I(5);
    vlSelf->ad3 = VL_RAND_RESET_I(5);
    vlSelf->rd1 = VL_RAND_RESET_I(32);
    vlSelf->rd2 = VL_RAND_RESET_I(32);
    vlSelf->wd3 = VL_RAND_RESET_I(32);
    vlSelf->we3 = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->resgister_file__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
