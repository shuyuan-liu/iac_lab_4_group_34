// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprogram_counter.h for the primary calling header

#include "verilated.h"

#include "Vprogram_counter___024root.h"

VL_INLINE_OPT void Vprogram_counter___024root___sequent__TOP__0(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->PC = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->PCsrc)
                                                ? (vlSelf->PC 
                                                   + vlSelf->ImmOp)
                                                : ((IData)(4U) 
                                                   + vlSelf->PC)));
    vlSelf->PC_plus_4 = ((IData)(4U) + vlSelf->PC);
}

void Vprogram_counter___024root___eval(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vprogram_counter___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vprogram_counter___024root___eval_debug_assertions(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->PCsrc & 0xfeU))) {
        Verilated::overWidthError("PCsrc");}
}
#endif  // VL_DEBUG
