// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_cpu.h for the primary calling header

#include "verilated.h"

#include "Vf1_cpu___024root.h"

VL_ATTR_COLD void Vf1_cpu___024root___initial__TOP__0(Vf1_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root___initial__TOP__0\n"); );
    // Body
    VL_READMEM_N(true, 8, 4096, 0, std::string{"f1.s.hex"}
                 ,  &(vlSelf->f1_cpu__DOT__Instr_Mem__DOT__memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vf1_cpu___024root___settle__TOP__0(Vf1_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = (1U & vlSelf->f1_cpu__DOT__MyRegister__DOT__registers
                  [0xaU]);
    vlSelf->f1_cpu__DOT__instr = ((vlSelf->f1_cpu__DOT__Instr_Mem__DOT__memory
                                   [(0xfffU & ((IData)(3U) 
                                               + vlSelf->f1_cpu__DOT__PC))] 
                                   << 0x18U) | ((vlSelf->f1_cpu__DOT__Instr_Mem__DOT__memory
                                                 [(0xfffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->f1_cpu__DOT__PC))] 
                                                 << 0x10U) 
                                                | ((vlSelf->f1_cpu__DOT__Instr_Mem__DOT__memory
                                                    [
                                                    (0xfffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->f1_cpu__DOT__PC))] 
                                                    << 8U) 
                                                   | vlSelf->f1_cpu__DOT__Instr_Mem__DOT__memory
                                                   [
                                                   (0xfffU 
                                                    & vlSelf->f1_cpu__DOT__PC)])));
    vlSelf->f1_cpu__DOT__rd2 = ((0U == (0x1fU & (vlSelf->f1_cpu__DOT__instr 
                                                 >> 0x14U)))
                                 ? 0U : vlSelf->f1_cpu__DOT__MyRegister__DOT__registers
                                [(0x1fU & (vlSelf->f1_cpu__DOT__instr 
                                           >> 0x14U))]);
    if ((0x13U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__JALctrl = 0U;
        vlSelf->f1_cpu__DOT__RegWrite = 1U;
        vlSelf->f1_cpu__DOT__ResultSrc = 0U;
        vlSelf->f1_cpu__DOT__MemWrite = 0U;
        if ((0U == (7U & (vlSelf->f1_cpu__DOT__instr 
                          >> 0xcU)))) {
            vlSelf->f1_cpu__DOT__ALUctrl = 0U;
        } else if ((1U == (7U & (vlSelf->f1_cpu__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->f1_cpu__DOT__ALUctrl = 5U;
        } else if ((4U == (7U & (vlSelf->f1_cpu__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->f1_cpu__DOT__ALUctrl = 4U;
        } else if ((5U == (7U & (vlSelf->f1_cpu__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->f1_cpu__DOT__ALUctrl = 6U;
        } else if ((7U == (7U & (vlSelf->f1_cpu__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->f1_cpu__DOT__ALUctrl = 2U;
        }
        vlSelf->f1_cpu__DOT__ALUSrcB = 1U;
        vlSelf->f1_cpu__DOT__ALUSrcA = 0U;
    } else if ((0x17U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__JALctrl = 0U;
        vlSelf->f1_cpu__DOT__RegWrite = 1U;
        vlSelf->f1_cpu__DOT__ResultSrc = 0U;
        vlSelf->f1_cpu__DOT__MemWrite = 0U;
        vlSelf->f1_cpu__DOT__ALUctrl = 0U;
        vlSelf->f1_cpu__DOT__ALUSrcB = 1U;
        vlSelf->f1_cpu__DOT__ALUSrcA = 1U;
    } else if ((0x23U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__JALctrl = 0U;
        vlSelf->f1_cpu__DOT__RegWrite = 0U;
        vlSelf->f1_cpu__DOT__ResultSrc = 0U;
        vlSelf->f1_cpu__DOT__MemWrite = 1U;
        vlSelf->f1_cpu__DOT__ALUctrl = 7U;
        vlSelf->f1_cpu__DOT__ALUSrcB = 0U;
        vlSelf->f1_cpu__DOT__ALUSrcA = 0U;
    } else if ((0x33U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__JALctrl = 0U;
        vlSelf->f1_cpu__DOT__RegWrite = 1U;
        vlSelf->f1_cpu__DOT__ResultSrc = 0U;
        vlSelf->f1_cpu__DOT__MemWrite = 0U;
        if ((IData)((0U == (0x40007000U & vlSelf->f1_cpu__DOT__instr)))) {
            vlSelf->f1_cpu__DOT__ALUctrl = 0U;
        }
        if ((IData)((0x40000000U == (0x40007000U & vlSelf->f1_cpu__DOT__instr)))) {
            vlSelf->f1_cpu__DOT__ALUctrl = 1U;
        } else if ((6U == (7U & (vlSelf->f1_cpu__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->f1_cpu__DOT__ALUctrl = 3U;
        } else if ((7U == (7U & (vlSelf->f1_cpu__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->f1_cpu__DOT__ALUctrl = 2U;
        }
        vlSelf->f1_cpu__DOT__ALUSrcB = 0U;
        vlSelf->f1_cpu__DOT__ALUSrcA = 0U;
    } else if ((0x37U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__JALctrl = 0U;
        vlSelf->f1_cpu__DOT__RegWrite = 1U;
        vlSelf->f1_cpu__DOT__ResultSrc = 0U;
        vlSelf->f1_cpu__DOT__MemWrite = 0U;
        vlSelf->f1_cpu__DOT__ALUctrl = 7U;
        vlSelf->f1_cpu__DOT__ALUSrcB = 1U;
        vlSelf->f1_cpu__DOT__ALUSrcA = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__JALctrl = 0U;
        vlSelf->f1_cpu__DOT__RegWrite = 0U;
        vlSelf->f1_cpu__DOT__ResultSrc = 0U;
        vlSelf->f1_cpu__DOT__MemWrite = 0U;
        vlSelf->f1_cpu__DOT__ALUctrl = 1U;
        vlSelf->f1_cpu__DOT__ALUSrcB = 0U;
        vlSelf->f1_cpu__DOT__ALUSrcA = 0U;
    } else if ((0x67U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__JALctrl = 1U;
        vlSelf->f1_cpu__DOT__RegWrite = 1U;
        vlSelf->f1_cpu__DOT__ResultSrc = 0U;
        vlSelf->f1_cpu__DOT__MemWrite = 0U;
        vlSelf->f1_cpu__DOT__ALUctrl = 7U;
        vlSelf->f1_cpu__DOT__ALUSrcB = 1U;
        vlSelf->f1_cpu__DOT__ALUSrcA = 1U;
    } else if ((0x6fU == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__JALctrl = 1U;
        vlSelf->f1_cpu__DOT__RegWrite = 1U;
        vlSelf->f1_cpu__DOT__ResultSrc = 0U;
        vlSelf->f1_cpu__DOT__MemWrite = 0U;
        vlSelf->f1_cpu__DOT__ALUctrl = 7U;
        vlSelf->f1_cpu__DOT__ALUSrcB = 0U;
        vlSelf->f1_cpu__DOT__ALUSrcA = 1U;
    } else if ((3U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__JALctrl = 0U;
        vlSelf->f1_cpu__DOT__RegWrite = 1U;
        vlSelf->f1_cpu__DOT__ResultSrc = 1U;
        vlSelf->f1_cpu__DOT__MemWrite = 0U;
        vlSelf->f1_cpu__DOT__ALUctrl = 7U;
        vlSelf->f1_cpu__DOT__ALUSrcB = 0U;
        vlSelf->f1_cpu__DOT__ALUSrcA = 0U;
    }
    vlSelf->f1_cpu__DOT__SrcA = ((IData)(vlSelf->f1_cpu__DOT__ALUSrcA)
                                  ? vlSelf->f1_cpu__DOT__PC
                                  : ((0U == (0x1fU 
                                             & (vlSelf->f1_cpu__DOT__instr 
                                                >> 0xfU)))
                                      ? 0U : vlSelf->f1_cpu__DOT__MyRegister__DOT__registers
                                     [(0x1fU & (vlSelf->f1_cpu__DOT__instr 
                                                >> 0xfU))]));
    if ((0x13U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__ImmSrc = 0U;
    } else if ((0x17U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__ImmSrc = 2U;
    } else if ((0x23U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__ImmSrc = 0U;
    } else if ((0x33U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__ImmSrc = 0U;
    } else if ((0x37U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__ImmSrc = 2U;
    } else if ((0x63U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__ImmSrc = 1U;
    } else if ((0x67U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__ImmSrc = 0U;
    } else if ((0x6fU == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__ImmSrc = 3U;
    } else if ((3U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__ImmSrc = 0U;
    }
    if ((0U == (IData)(vlSelf->f1_cpu__DOT__ImmSrc))) {
        vlSelf->f1_cpu__DOT__ImmExt = (((- (IData)(
                                                   (vlSelf->f1_cpu__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xbU) | 
                                       (0x7ffU & (vlSelf->f1_cpu__DOT__instr 
                                                  >> 0x14U)));
    } else if ((1U == (IData)(vlSelf->f1_cpu__DOT__ImmSrc))) {
        vlSelf->f1_cpu__DOT__ImmExt = 0U;
    } else if ((2U == (IData)(vlSelf->f1_cpu__DOT__ImmSrc))) {
        vlSelf->f1_cpu__DOT__ImmExt = (0xfffff000U 
                                       & vlSelf->f1_cpu__DOT__instr);
    } else if ((3U == (IData)(vlSelf->f1_cpu__DOT__ImmSrc))) {
        vlSelf->f1_cpu__DOT__ImmExt = (((- (IData)(
                                                   (vlSelf->f1_cpu__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->f1_cpu__DOT__instr) 
                                        | ((0x800U 
                                            & (vlSelf->f1_cpu__DOT__instr 
                                               >> 9U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->f1_cpu__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->f1_cpu__DOT__instr 
                                                    >> 0x14U))))));
    }
    vlSelf->f1_cpu__DOT__PCTarget = (vlSelf->f1_cpu__DOT__PC 
                                     + vlSelf->f1_cpu__DOT__ImmExt);
    vlSelf->f1_cpu__DOT__SrcB = ((IData)(vlSelf->f1_cpu__DOT__ALUSrcB)
                                  ? vlSelf->f1_cpu__DOT__ImmExt
                                  : vlSelf->f1_cpu__DOT__rd2);
    if (((((((((0U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl)) 
               | (1U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))) 
              | (2U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))) 
             | (3U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))) 
            | (4U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))) 
           | (5U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))) 
          | (6U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))) 
         | (7U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl)))) {
        vlSelf->f1_cpu__DOT__ALUResult = ((0U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))
                                           ? (vlSelf->f1_cpu__DOT__SrcA 
                                              + vlSelf->f1_cpu__DOT__SrcB)
                                           : ((1U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))
                                               ? (vlSelf->f1_cpu__DOT__SrcA 
                                                  - vlSelf->f1_cpu__DOT__SrcB)
                                               : ((2U 
                                                   == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))
                                                   ? 
                                                  (vlSelf->f1_cpu__DOT__SrcA 
                                                   & vlSelf->f1_cpu__DOT__SrcB)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))
                                                    ? 
                                                   (vlSelf->f1_cpu__DOT__SrcA 
                                                    | vlSelf->f1_cpu__DOT__SrcB)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))
                                                     ? 
                                                    (vlSelf->f1_cpu__DOT__SrcA 
                                                     ^ vlSelf->f1_cpu__DOT__SrcB)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))
                                                      ? 
                                                     ((0x1fU 
                                                       >= vlSelf->f1_cpu__DOT__SrcB)
                                                       ? 
                                                      (vlSelf->f1_cpu__DOT__SrcA 
                                                       << vlSelf->f1_cpu__DOT__SrcB)
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))
                                                       ? 
                                                      ((0x1fU 
                                                        >= vlSelf->f1_cpu__DOT__SrcB)
                                                        ? 
                                                       (vlSelf->f1_cpu__DOT__SrcA 
                                                        >> vlSelf->f1_cpu__DOT__SrcB)
                                                        : 0U)
                                                       : vlSelf->f1_cpu__DOT__SrcA)))))));
    }
    if ((0x13U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCSrc = 0U;
    } else if ((0x17U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCSrc = 0U;
    } else if ((0x23U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCSrc = 0U;
    } else if ((0x33U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCSrc = 0U;
    } else if ((0x37U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCSrc = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        if ((0U == (7U & (vlSelf->f1_cpu__DOT__instr 
                          >> 0xcU)))) {
            vlSelf->f1_cpu__DOT__PCSrc = (0U == vlSelf->f1_cpu__DOT__ALUResult);
        } else if ((1U == (7U & (vlSelf->f1_cpu__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->f1_cpu__DOT__PCSrc = (0U != vlSelf->f1_cpu__DOT__ALUResult);
        }
    } else if ((0x67U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCSrc = 1U;
    } else if ((0x6fU == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCSrc = 1U;
    } else if ((3U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCSrc = 0U;
    }
}

VL_ATTR_COLD void Vf1_cpu___024root___eval_initial(Vf1_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root___eval_initial\n"); );
    // Body
    Vf1_cpu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vf1_cpu___024root___eval_settle(Vf1_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root___eval_settle\n"); );
    // Body
    Vf1_cpu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1_cpu___024root___final(Vf1_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root___final\n"); );
}

VL_ATTR_COLD void Vf1_cpu___024root___ctor_var_reset(Vf1_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(1);
    vlSelf->f1_cpu__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->f1_cpu__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->f1_cpu__DOT__PCSrc = VL_RAND_RESET_I(1);
    vlSelf->f1_cpu__DOT__ResultSrc = VL_RAND_RESET_I(1);
    vlSelf->f1_cpu__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->f1_cpu__DOT__ALUSrcB = VL_RAND_RESET_I(1);
    vlSelf->f1_cpu__DOT__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->f1_cpu__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->f1_cpu__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->f1_cpu__DOT__ALUSrcA = VL_RAND_RESET_I(1);
    vlSelf->f1_cpu__DOT__JALctrl = VL_RAND_RESET_I(1);
    vlSelf->f1_cpu__DOT__rd2 = VL_RAND_RESET_I(32);
    vlSelf->f1_cpu__DOT__ImmExt = VL_RAND_RESET_I(32);
    vlSelf->f1_cpu__DOT__PCTarget = VL_RAND_RESET_I(32);
    vlSelf->f1_cpu__DOT__SrcA = VL_RAND_RESET_I(32);
    vlSelf->f1_cpu__DOT__SrcB = VL_RAND_RESET_I(32);
    vlSelf->f1_cpu__DOT__ALUResult = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->f1_cpu__DOT__Instr_Mem__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
