// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__Register__DOT__registers__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__Register__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Register__DOT__registers__v0;
    // Body
    __Vdlyvset__top__DOT__Register__DOT__registers__v0 = 0U;
    if (vlSelf->top__DOT__RegWrite) {
        __Vdlyvval__top__DOT__Register__DOT__registers__v0 
            = vlSelf->top__DOT__ALUout;
        __Vdlyvset__top__DOT__Register__DOT__registers__v0 = 1U;
        __Vdlyvdim0__top__DOT__Register__DOT__registers__v0 
            = (0x1fU & (vlSelf->top__DOT__instr >> 7U));
    }
    vlSelf->top__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : ((IData)(vlSelf->top__DOT__PCsrc)
                                 ? (vlSelf->top__DOT__PC 
                                    + vlSelf->top__DOT__ImmOp)
                                 : ((IData)(4U) + vlSelf->top__DOT__PC)));
    if (__Vdlyvset__top__DOT__Register__DOT__registers__v0) {
        vlSelf->top__DOT__Register__DOT__registers[__Vdlyvdim0__top__DOT__Register__DOT__registers__v0] 
            = __Vdlyvval__top__DOT__Register__DOT__registers__v0;
    }
    vlSelf->a0 = vlSelf->top__DOT__Register__DOT__registers
        [0xaU];
    vlSelf->top__DOT__instr = vlSelf->top__DOT__Instr_Mem__DOT__memory
        [(0xffffU & vlSelf->top__DOT__PC)];
    if ((0x13U == (0x7fU & vlSelf->top__DOT__instr))) {
        if ((0U == (7U & (vlSelf->top__DOT__instr >> 0xcU)))) {
            vlSelf->top__DOT__RegWrite = 1U;
        }
        vlSelf->top__DOT__ALUsrc = 1U;
        vlSelf->top__DOT__ImmSrc = (vlSelf->top__DOT__instr 
                                    >> 0x1fU);
    } else {
        if ((0x33U != (0x7fU & vlSelf->top__DOT__instr))) {
            if ((0x63U == (0x7fU & vlSelf->top__DOT__instr))) {
                if ((IData)((0x1000U == (0xfe007000U 
                                         & vlSelf->top__DOT__instr)))) {
                    vlSelf->top__DOT__RegWrite = 1U;
                }
            }
        }
        if ((0x33U == (0x7fU & vlSelf->top__DOT__instr))) {
            vlSelf->top__DOT__ALUsrc = 0U;
        }
    }
    vlSelf->top__DOT__ALUop1 = ((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                                 >> 0xfU)))
                                 ? 0U : vlSelf->top__DOT__Register__DOT__registers
                                [(0x1fU & (vlSelf->top__DOT__instr 
                                           >> 0xfU))]);
    vlSelf->top__DOT__ImmOp = ((IData)(vlSelf->top__DOT__ImmSrc)
                                ? (vlSelf->top__DOT__instr 
                                   >> 0x14U) : (0xfffff000U 
                                                | (vlSelf->top__DOT__instr 
                                                   >> 0x14U)));
    vlSelf->top__DOT__ALUop2 = ((IData)(vlSelf->top__DOT__ALUsrc)
                                 ? vlSelf->top__DOT__ImmOp
                                 : ((0U == (0x1fU & 
                                            (vlSelf->top__DOT__instr 
                                             >> 0x14U)))
                                     ? 0U : vlSelf->top__DOT__Register__DOT__registers
                                    [(0x1fU & (vlSelf->top__DOT__instr 
                                               >> 0x14U))]));
    if ((0x13U != (0x7fU & vlSelf->top__DOT__instr))) {
        if ((0x33U == (0x7fU & vlSelf->top__DOT__instr))) {
            if ((IData)((0U == (0xfe007000U & vlSelf->top__DOT__instr)))) {
                vlSelf->top__DOT__ALUctrl = 0U;
            } else if ((IData)((0x40000000U == (0xfe007000U 
                                                & vlSelf->top__DOT__instr)))) {
                vlSelf->top__DOT__ALUctrl = 1U;
            }
        }
    }
    vlSelf->top__DOT__ALUout = ((IData)(vlSelf->top__DOT__ALUctrl)
                                 ? (vlSelf->top__DOT__ALUop1 
                                    - vlSelf->top__DOT__ALUop2)
                                 : (vlSelf->top__DOT__ALUop1 
                                    + vlSelf->top__DOT__ALUop2));
    if ((0x13U != (0x7fU & vlSelf->top__DOT__instr))) {
        if ((0x33U != (0x7fU & vlSelf->top__DOT__instr))) {
            if ((0x63U == (0x7fU & vlSelf->top__DOT__instr))) {
                if ((1U & (~ (IData)((0x1000U == (0xfe007000U 
                                                  & vlSelf->top__DOT__instr)))))) {
                    if ((0x17U == (0x7fU & vlSelf->top__DOT__instr))) {
                        vlSelf->top__DOT__PCsrc = (0U 
                                                   != vlSelf->top__DOT__ALUout);
                    }
                }
            }
        }
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
