// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_cpu.h for the primary calling header

#include "verilated.h"

#include "Vf1_cpu___024root.h"

VL_INLINE_OPT void Vf1_cpu___024root___sequent__TOP__0(Vf1_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__f1_cpu__DOT__MyRegister__DOT__registers__v0;
    IData/*31:0*/ __Vdlyvval__f1_cpu__DOT__MyRegister__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvset__f1_cpu__DOT__MyRegister__DOT__registers__v0;
    CData/*7:0*/ __Vdlyvdim0__f1_cpu__DOT__Data_Mem__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvval__f1_cpu__DOT__Data_Mem__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__f1_cpu__DOT__Data_Mem__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvdim0__f1_cpu__DOT__Data_Mem__DOT__memory__v1;
    CData/*7:0*/ __Vdlyvval__f1_cpu__DOT__Data_Mem__DOT__memory__v1;
    CData/*7:0*/ __Vdlyvdim0__f1_cpu__DOT__Data_Mem__DOT__memory__v2;
    CData/*7:0*/ __Vdlyvval__f1_cpu__DOT__Data_Mem__DOT__memory__v2;
    CData/*7:0*/ __Vdlyvdim0__f1_cpu__DOT__Data_Mem__DOT__memory__v3;
    CData/*7:0*/ __Vdlyvval__f1_cpu__DOT__Data_Mem__DOT__memory__v3;
    // Body
    __Vdlyvset__f1_cpu__DOT__Data_Mem__DOT__memory__v0 = 0U;
    __Vdlyvset__f1_cpu__DOT__MyRegister__DOT__registers__v0 = 0U;
    if (vlSelf->f1_cpu__DOT__MemWrite) {
        __Vdlyvval__f1_cpu__DOT__Data_Mem__DOT__memory__v0 
            = (0xffU & vlSelf->f1_cpu__DOT__rd2);
        __Vdlyvset__f1_cpu__DOT__Data_Mem__DOT__memory__v0 = 1U;
        __Vdlyvdim0__f1_cpu__DOT__Data_Mem__DOT__memory__v0 
            = (1U & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out);
        __Vdlyvval__f1_cpu__DOT__Data_Mem__DOT__memory__v1 
            = (0xffU & (vlSelf->f1_cpu__DOT__rd2 >> 8U));
        __Vdlyvdim0__f1_cpu__DOT__Data_Mem__DOT__memory__v1 
            = (0xffU & ((IData)(1U) + (1U & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)));
        __Vdlyvval__f1_cpu__DOT__Data_Mem__DOT__memory__v2 
            = (0xffU & (vlSelf->f1_cpu__DOT__rd2 >> 0x10U));
        __Vdlyvdim0__f1_cpu__DOT__Data_Mem__DOT__memory__v2 
            = (0xffU & ((IData)(2U) + (1U & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)));
        __Vdlyvval__f1_cpu__DOT__Data_Mem__DOT__memory__v3 
            = (vlSelf->f1_cpu__DOT__rd2 >> 0x18U);
        __Vdlyvdim0__f1_cpu__DOT__Data_Mem__DOT__memory__v3 
            = (0xffU & ((IData)(3U) + (1U & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)));
    }
    if (vlSelf->f1_cpu__DOT__RegWrite) {
        __Vdlyvval__f1_cpu__DOT__MyRegister__DOT__registers__v0 
            = ((IData)(vlSelf->f1_cpu__DOT__JALctrl)
                ? ((IData)(4U) + (0xffffU & vlSelf->f1_cpu__DOT____Vcellout__Program_Counter__PC))
                : ((IData)(vlSelf->f1_cpu__DOT__ResultSrc)
                    ? ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                        [(0xffU & ((IData)(3U) + (1U 
                                                  & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)))] 
                        << 0x18U) | ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                      [(0xffU & ((IData)(2U) 
                                                 + 
                                                 (1U 
                                                  & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)))] 
                                      << 0x10U) | (
                                                   (vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                                    [
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (1U 
                                                         & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)))] 
                                                    << 8U) 
                                                   | vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                                   [
                                                   (1U 
                                                    & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)])))
                    : (1U & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)));
        __Vdlyvset__f1_cpu__DOT__MyRegister__DOT__registers__v0 = 1U;
        __Vdlyvdim0__f1_cpu__DOT__MyRegister__DOT__registers__v0 
            = (0x1fU & (vlSelf->f1_cpu__DOT__instr 
                        >> 7U));
    }
    vlSelf->f1_cpu__DOT____Vcellout__Program_Counter__PC 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->f1_cpu__DOT__PCsrc)
                                         ? (vlSelf->f1_cpu__DOT____Vcellout__Program_Counter__PC 
                                            + vlSelf->f1_cpu__DOT__PCTarget)
                                         : ((IData)(4U) 
                                            + vlSelf->f1_cpu__DOT____Vcellout__Program_Counter__PC)));
    if (__Vdlyvset__f1_cpu__DOT__Data_Mem__DOT__memory__v0) {
        vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory[__Vdlyvdim0__f1_cpu__DOT__Data_Mem__DOT__memory__v0] 
            = __Vdlyvval__f1_cpu__DOT__Data_Mem__DOT__memory__v0;
        vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory[__Vdlyvdim0__f1_cpu__DOT__Data_Mem__DOT__memory__v1] 
            = __Vdlyvval__f1_cpu__DOT__Data_Mem__DOT__memory__v1;
        vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory[__Vdlyvdim0__f1_cpu__DOT__Data_Mem__DOT__memory__v2] 
            = __Vdlyvval__f1_cpu__DOT__Data_Mem__DOT__memory__v2;
        vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory[__Vdlyvdim0__f1_cpu__DOT__Data_Mem__DOT__memory__v3] 
            = __Vdlyvval__f1_cpu__DOT__Data_Mem__DOT__memory__v3;
    }
    if (__Vdlyvset__f1_cpu__DOT__MyRegister__DOT__registers__v0) {
        vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[__Vdlyvdim0__f1_cpu__DOT__MyRegister__DOT__registers__v0] 
            = __Vdlyvval__f1_cpu__DOT__MyRegister__DOT__registers__v0;
    }
    vlSelf->a0 = (1U & vlSelf->f1_cpu__DOT__MyRegister__DOT__registers
                  [0xaU]);
    vlSelf->f1_cpu__DOT__instr = vlSelf->f1_cpu__DOT__Instr_Mem__DOT__memory
        [(0xffffU & vlSelf->f1_cpu__DOT____Vcellout__Program_Counter__PC)];
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
                                  ? (0xffffU & vlSelf->f1_cpu__DOT____Vcellout__Program_Counter__PC)
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
    vlSelf->f1_cpu__DOT__PCTarget = ((0xffffU & vlSelf->f1_cpu__DOT____Vcellout__Program_Counter__PC) 
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
        vlSelf->f1_cpu__DOT____Vcellout__MyALU__out 
            = ((0U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))
                ? (vlSelf->f1_cpu__DOT__SrcA + vlSelf->f1_cpu__DOT__SrcB)
                : ((1U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))
                    ? (vlSelf->f1_cpu__DOT__SrcA - vlSelf->f1_cpu__DOT__SrcB)
                    : ((2U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))
                        ? (vlSelf->f1_cpu__DOT__SrcA 
                           & vlSelf->f1_cpu__DOT__SrcB)
                        : ((3U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))
                            ? (vlSelf->f1_cpu__DOT__SrcA 
                               | vlSelf->f1_cpu__DOT__SrcB)
                            : ((4U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))
                                ? (vlSelf->f1_cpu__DOT__SrcA 
                                   ^ vlSelf->f1_cpu__DOT__SrcB)
                                : ((5U == (IData)(vlSelf->f1_cpu__DOT__ALUctrl))
                                    ? ((0x1fU >= vlSelf->f1_cpu__DOT__SrcB)
                                        ? (vlSelf->f1_cpu__DOT__SrcA 
                                           << vlSelf->f1_cpu__DOT__SrcB)
                                        : 0U) : ((6U 
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
        vlSelf->f1_cpu__DOT__PCsrc = 0U;
    } else if ((0x17U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCsrc = 0U;
    } else if ((0x23U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCsrc = 0U;
    } else if ((0x33U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCsrc = 0U;
    } else if ((0x37U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCsrc = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        if ((0U == (7U & (vlSelf->f1_cpu__DOT__instr 
                          >> 0xcU)))) {
            vlSelf->f1_cpu__DOT__PCsrc = (0U == vlSelf->f1_cpu__DOT____Vcellout__MyALU__out);
        } else if ((1U == (7U & (vlSelf->f1_cpu__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->f1_cpu__DOT__PCsrc = (0U != vlSelf->f1_cpu__DOT____Vcellout__MyALU__out);
        }
    } else if ((0x67U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCsrc = 1U;
    } else if ((0x6fU == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCsrc = 1U;
    } else if ((3U == (0x7fU & vlSelf->f1_cpu__DOT__instr))) {
        vlSelf->f1_cpu__DOT__PCsrc = 0U;
    }
}

void Vf1_cpu___024root___eval(Vf1_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1_cpu___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vf1_cpu___024root___eval_debug_assertions(Vf1_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
