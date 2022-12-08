// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___combo__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->less_than_unsigned = (vlSelf->op1 < vlSelf->op2);
    vlSelf->less_than_signed = VL_LTS_III(32, vlSelf->op1, vlSelf->op2);
    if (((((((((0U == (IData)(vlSelf->ctrl)) | (1U 
                                                == (IData)(vlSelf->ctrl))) 
              | (2U == (IData)(vlSelf->ctrl))) | (3U 
                                                  == (IData)(vlSelf->ctrl))) 
            | (4U == (IData)(vlSelf->ctrl))) | (5U 
                                                == (IData)(vlSelf->ctrl))) 
          | (6U == (IData)(vlSelf->ctrl))) | (7U == (IData)(vlSelf->ctrl)))) {
        vlSelf->out = ((0U == (IData)(vlSelf->ctrl))
                        ? (vlSelf->op1 + vlSelf->op2)
                        : ((1U == (IData)(vlSelf->ctrl))
                            ? (vlSelf->op1 - vlSelf->op2)
                            : ((2U == (IData)(vlSelf->ctrl))
                                ? (vlSelf->op1 & vlSelf->op2)
                                : ((3U == (IData)(vlSelf->ctrl))
                                    ? (vlSelf->op1 
                                       | vlSelf->op2)
                                    : ((4U == (IData)(vlSelf->ctrl))
                                        ? (vlSelf->op1 
                                           ^ vlSelf->op2)
                                        : ((5U == (IData)(vlSelf->ctrl))
                                            ? ((0x1fU 
                                                >= vlSelf->op2)
                                                ? (vlSelf->op1 
                                                   << vlSelf->op2)
                                                : 0U)
                                            : ((6U 
                                                == (IData)(vlSelf->ctrl))
                                                ? (
                                                   (0x1fU 
                                                    >= vlSelf->op2)
                                                    ? 
                                                   (vlSelf->op1 
                                                    >> vlSelf->op2)
                                                    : 0U)
                                                : vlSelf->op1)))))));
    }
    vlSelf->zero = (0U == vlSelf->out);
}

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Body
    Valu___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ctrl & 0xf8U))) {
        Verilated::overWidthError("ctrl");}
}
#endif  // VL_DEBUG
