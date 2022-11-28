// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file.h for the primary calling header

#include "verilated.h"

#include "Vregister_file___024root.h"

VL_INLINE_OPT void Vregister_file___024root___sequent__TOP__0(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__resgister_file__DOT__registers__v0;
    IData/*31:0*/ __Vdlyvval__resgister_file__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvset__resgister_file__DOT__registers__v0;
    // Body
    __Vdlyvset__resgister_file__DOT__registers__v0 = 0U;
    if (vlSelf->we3) {
        __Vdlyvval__resgister_file__DOT__registers__v0 
            = vlSelf->wd3;
        __Vdlyvset__resgister_file__DOT__registers__v0 = 1U;
        __Vdlyvdim0__resgister_file__DOT__registers__v0 
            = vlSelf->ad3;
    }
    if (__Vdlyvset__resgister_file__DOT__registers__v0) {
        vlSelf->resgister_file__DOT__registers[__Vdlyvdim0__resgister_file__DOT__registers__v0] 
            = __Vdlyvval__resgister_file__DOT__registers__v0;
    }
    vlSelf->a0 = vlSelf->resgister_file__DOT__registers
        [0xaU];
}

VL_INLINE_OPT void Vregister_file___024root___combo__TOP__0(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->rd1 = ((0U == (IData)(vlSelf->ad1)) ? 0U
                    : vlSelf->resgister_file__DOT__registers
                   [vlSelf->ad1]);
    vlSelf->rd2 = ((0U == (IData)(vlSelf->ad2)) ? 0U
                    : vlSelf->resgister_file__DOT__registers
                   [vlSelf->ad2]);
}

void Vregister_file___024root___eval(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vregister_file___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vregister_file___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vregister_file___024root___eval_debug_assertions(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->ad1 & 0xe0U))) {
        Verilated::overWidthError("ad1");}
    if (VL_UNLIKELY((vlSelf->ad2 & 0xe0U))) {
        Verilated::overWidthError("ad2");}
    if (VL_UNLIKELY((vlSelf->ad3 & 0xe0U))) {
        Verilated::overWidthError("ad3");}
    if (VL_UNLIKELY((vlSelf->we3 & 0xfeU))) {
        Verilated::overWidthError("we3");}
}
#endif  // VL_DEBUG
