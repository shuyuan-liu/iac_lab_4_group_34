// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    VL_READMEM_N(true, 32, 65536, 0, std::string{"rom.txt"}
                 ,  &(vlSelf->top__DOT__Instr_Mem__DOT__memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUctrl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUout = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->top__DOT__Instr_Mem__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__Register__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
