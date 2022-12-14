// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"

#include "Vpipeline___024root.h"

VL_ATTR_COLD void Vpipeline___024root___settle__TOP__0(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->pipeline__DOT__PCTargetE = ((IData)(vlSelf->pipeline__DOT__JalSrcE)
                                         ? (vlSelf->pipeline__DOT__PCE 
                                            + vlSelf->pipeline__DOT__ImmExtE)
                                         : vlSelf->pipeline__DOT__PCTargetE);
    vlSelf->pipeline__DOT__ReadDataM = ((0U == (IData)(vlSelf->pipeline__DOT__WordWidthM))
                                         ? ((IData)(vlSelf->pipeline__DOT__LoadSignExtM)
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory
                                                                [
                                                                (0x1ffffU 
                                                                 & vlSelf->pipeline__DOT__ALUResultM)] 
                                                                >> 7U)))) 
                                                 << 8U) 
                                                | vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory
                                                [(0x1ffffU 
                                                  & vlSelf->pipeline__DOT__ALUResultM)])
                                             : vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory
                                            [(0x1ffffU 
                                              & vlSelf->pipeline__DOT__ALUResultM)])
                                         : ((1U == (IData)(vlSelf->pipeline__DOT__WordWidthM))
                                             ? ((IData)(vlSelf->pipeline__DOT__LoadSignExtM)
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory
                                                                 [
                                                                 (0x1ffffU 
                                                                  & ((IData)(1U) 
                                                                     + vlSelf->pipeline__DOT__ALUResultM))] 
                                                                 >> 7U)))) 
                                                  << 0x10U) 
                                                 | ((vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(1U) 
                                                         + vlSelf->pipeline__DOT__ALUResultM))] 
                                                     << 8U) 
                                                    | vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory
                                                    [
                                                    (0x1ffffU 
                                                     & vlSelf->pipeline__DOT__ALUResultM)]))
                                                 : 
                                                ((vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->pipeline__DOT__ALUResultM))] 
                                                  << 8U) 
                                                 | vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory
                                                 [(0x1ffffU 
                                                   & vlSelf->pipeline__DOT__ALUResultM)]))
                                             : ((2U 
                                                 == (IData)(vlSelf->pipeline__DOT__WordWidthM))
                                                 ? 
                                                ((vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->pipeline__DOT__ALUResultM))] 
                                                  << 0x18U) 
                                                 | ((vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelf->pipeline__DOT__ALUResultM))] 
                                                     << 0x10U) 
                                                    | ((vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory
                                                        [
                                                        (0x1ffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelf->pipeline__DOT__ALUResultM))] 
                                                        << 8U) 
                                                       | vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory
                                                       [
                                                       (0x1ffffU 
                                                        & vlSelf->pipeline__DOT__ALUResultM)])))
                                                 : 0U)));
    vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE 
        = ((IData)(vlSelf->pipeline__DOT__ALUSrcE) ? vlSelf->pipeline__DOT__ImmExtE
            : vlSelf->pipeline__DOT__Rd2E);
    if ((0x13U == (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
        vlSelf->pipeline__DOT__JumpD = 0U;
        vlSelf->pipeline__DOT__ALUSrcD = 1U;
        vlSelf->pipeline__DOT__RegWriteD = 1U;
        vlSelf->pipeline__DOT__ResultSrcD = 0U;
        vlSelf->pipeline__DOT__BranchD = 0U;
        vlSelf->pipeline__DOT__MemWriteD = 0U;
        vlSelf->pipeline__DOT__JalSrcD = 0U;
        if ((0U == (7U & (vlSelf->pipeline__DOT__InstrD 
                          >> 0xcU)))) {
            vlSelf->pipeline__DOT__ALUControlD = 0U;
        } else if ((1U == (7U & (vlSelf->pipeline__DOT__InstrD 
                                 >> 0xcU)))) {
            vlSelf->pipeline__DOT__ALUControlD = 5U;
        } else if ((4U == (7U & (vlSelf->pipeline__DOT__InstrD 
                                 >> 0xcU)))) {
            vlSelf->pipeline__DOT__ALUControlD = 4U;
        } else if ((5U == (7U & (vlSelf->pipeline__DOT__InstrD 
                                 >> 0xcU)))) {
            vlSelf->pipeline__DOT__ALUControlD = 6U;
        } else if ((6U == (7U & (vlSelf->pipeline__DOT__InstrD 
                                 >> 0xcU)))) {
            vlSelf->pipeline__DOT__ALUControlD = 3U;
        } else if ((7U == (7U & (vlSelf->pipeline__DOT__InstrD 
                                 >> 0xcU)))) {
            vlSelf->pipeline__DOT__ALUControlD = 2U;
        }
        vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD = 0U;
    } else if ((0x23U == (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
        vlSelf->pipeline__DOT__JumpD = 0U;
        vlSelf->pipeline__DOT__ALUSrcD = 0U;
        vlSelf->pipeline__DOT__RegWriteD = 0U;
        vlSelf->pipeline__DOT__ResultSrcD = 0U;
        vlSelf->pipeline__DOT__BranchD = 0U;
        vlSelf->pipeline__DOT__MemWriteD = 1U;
        vlSelf->pipeline__DOT__JalSrcD = 0U;
        vlSelf->pipeline__DOT__ALUControlD = 7U;
        vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD = 0U;
    } else if ((0x33U == (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
        vlSelf->pipeline__DOT__JumpD = 0U;
        vlSelf->pipeline__DOT__ALUSrcD = 0U;
        vlSelf->pipeline__DOT__RegWriteD = 1U;
        vlSelf->pipeline__DOT__ResultSrcD = 0U;
        vlSelf->pipeline__DOT__BranchD = 0U;
        vlSelf->pipeline__DOT__MemWriteD = 0U;
        vlSelf->pipeline__DOT__JalSrcD = 0U;
        if ((0U == (7U & (vlSelf->pipeline__DOT__InstrD 
                          >> 0xcU)))) {
            vlSelf->pipeline__DOT__ALUControlD = ((0x40000000U 
                                                   & vlSelf->pipeline__DOT__InstrD)
                                                   ? 1U
                                                   : 0U);
        } else if ((1U == (7U & (vlSelf->pipeline__DOT__InstrD 
                                 >> 0xcU)))) {
            vlSelf->pipeline__DOT__ALUControlD = 5U;
        } else if ((4U == (7U & (vlSelf->pipeline__DOT__InstrD 
                                 >> 0xcU)))) {
            vlSelf->pipeline__DOT__ALUControlD = 4U;
        } else if ((5U == (7U & (vlSelf->pipeline__DOT__InstrD 
                                 >> 0xcU)))) {
            vlSelf->pipeline__DOT__ALUControlD = 6U;
        } else if ((6U == (7U & (vlSelf->pipeline__DOT__InstrD 
                                 >> 0xcU)))) {
            vlSelf->pipeline__DOT__ALUControlD = 3U;
        } else if ((7U == (7U & (vlSelf->pipeline__DOT__InstrD 
                                 >> 0xcU)))) {
            vlSelf->pipeline__DOT__ALUControlD = 2U;
        }
        vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD = 0U;
    } else if ((0x37U == (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
        vlSelf->pipeline__DOT__JumpD = 0U;
        vlSelf->pipeline__DOT__ALUSrcD = 1U;
        vlSelf->pipeline__DOT__RegWriteD = 1U;
        vlSelf->pipeline__DOT__ResultSrcD = 0U;
        vlSelf->pipeline__DOT__BranchD = 0U;
        vlSelf->pipeline__DOT__MemWriteD = 0U;
        vlSelf->pipeline__DOT__JalSrcD = 0U;
        vlSelf->pipeline__DOT__ALUControlD = 7U;
        vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD = 2U;
    } else if ((0x63U == (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
        vlSelf->pipeline__DOT__JumpD = 0U;
        vlSelf->pipeline__DOT__ALUSrcD = 0U;
        vlSelf->pipeline__DOT__RegWriteD = 0U;
        vlSelf->pipeline__DOT__ResultSrcD = 0U;
        vlSelf->pipeline__DOT__BranchD = 1U;
        vlSelf->pipeline__DOT__MemWriteD = 0U;
        vlSelf->pipeline__DOT__JalSrcD = 0U;
        vlSelf->pipeline__DOT__ALUControlD = 1U;
        vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD = 1U;
    } else if ((0x67U == (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
        vlSelf->pipeline__DOT__JumpD = 1U;
        vlSelf->pipeline__DOT__ALUSrcD = 1U;
        vlSelf->pipeline__DOT__RegWriteD = 1U;
        vlSelf->pipeline__DOT__ResultSrcD = 2U;
        vlSelf->pipeline__DOT__BranchD = 0U;
        vlSelf->pipeline__DOT__MemWriteD = 0U;
        vlSelf->pipeline__DOT__JalSrcD = 1U;
        vlSelf->pipeline__DOT__ALUControlD = 0U;
        vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD = 0U;
    } else if ((0x6fU == (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
        vlSelf->pipeline__DOT__JumpD = 1U;
        vlSelf->pipeline__DOT__ALUSrcD = 0U;
        vlSelf->pipeline__DOT__RegWriteD = 1U;
        vlSelf->pipeline__DOT__ResultSrcD = 2U;
        vlSelf->pipeline__DOT__BranchD = 0U;
        vlSelf->pipeline__DOT__MemWriteD = 0U;
        vlSelf->pipeline__DOT__JalSrcD = 1U;
        vlSelf->pipeline__DOT__ALUControlD = 7U;
        vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD = 3U;
    } else if ((3U == (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
        vlSelf->pipeline__DOT__JumpD = 0U;
        vlSelf->pipeline__DOT__ALUSrcD = 0U;
        vlSelf->pipeline__DOT__RegWriteD = 1U;
        vlSelf->pipeline__DOT__ResultSrcD = 1U;
        vlSelf->pipeline__DOT__BranchD = 0U;
        vlSelf->pipeline__DOT__MemWriteD = 0U;
        vlSelf->pipeline__DOT__JalSrcD = 0U;
        vlSelf->pipeline__DOT__ALUControlD = 7U;
        vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD = 0U;
    }
    if ((0x13U != (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
        if ((0x23U == (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
            vlSelf->pipeline__DOT__WordWidthD = (3U 
                                                 & (vlSelf->pipeline__DOT__InstrD 
                                                    >> 0xcU));
        } else if ((0x33U != (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
            if ((0x37U != (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
                if ((0x63U != (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
                    if ((0x67U != (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
                        if ((0x6fU != (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
                            if ((3U == (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
                                vlSelf->pipeline__DOT__WordWidthD 
                                    = (3U & (vlSelf->pipeline__DOT__InstrD 
                                             >> 0xcU));
                            }
                        }
                    }
                }
            }
        }
        if ((0x23U != (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
            if ((0x33U != (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
                if ((0x37U != (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
                    if ((0x63U != (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
                        if ((0x67U != (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
                            if ((0x6fU != (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
                                if ((3U == (0x7fU & vlSelf->pipeline__DOT__InstrD))) {
                                    vlSelf->pipeline__DOT__LoadSignExtD 
                                        = (1U & (~ 
                                                 (vlSelf->pipeline__DOT__InstrD 
                                                  >> 0xeU)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((0U == (IData)(vlSelf->pipeline__DOT__ALUControlE)) 
               | (1U == (IData)(vlSelf->pipeline__DOT__ALUControlE))) 
              | (2U == (IData)(vlSelf->pipeline__DOT__ALUControlE))) 
             | (3U == (IData)(vlSelf->pipeline__DOT__ALUControlE))) 
            | (4U == (IData)(vlSelf->pipeline__DOT__ALUControlE))) 
           | (5U == (IData)(vlSelf->pipeline__DOT__ALUControlE))) 
          | (6U == (IData)(vlSelf->pipeline__DOT__ALUControlE))) 
         | (7U == (IData)(vlSelf->pipeline__DOT__ALUControlE)))) {
        vlSelf->pipeline__DOT__ALUResultE = ((0U == (IData)(vlSelf->pipeline__DOT__ALUControlE))
                                              ? (vlSelf->pipeline__DOT__Rd1E 
                                                 + vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE)
                                              : ((1U 
                                                  == (IData)(vlSelf->pipeline__DOT__ALUControlE))
                                                  ? 
                                                 (vlSelf->pipeline__DOT__Rd1E 
                                                  - vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->pipeline__DOT__ALUControlE))
                                                   ? 
                                                  (vlSelf->pipeline__DOT__Rd1E 
                                                   & vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->pipeline__DOT__ALUControlE))
                                                    ? 
                                                   (vlSelf->pipeline__DOT__Rd1E 
                                                    | vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->pipeline__DOT__ALUControlE))
                                                     ? 
                                                    (vlSelf->pipeline__DOT__Rd1E 
                                                     ^ vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->pipeline__DOT__ALUControlE))
                                                      ? 
                                                     ((0x1fU 
                                                       >= vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE)
                                                       ? 
                                                      (vlSelf->pipeline__DOT__Rd1E 
                                                       << vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE)
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->pipeline__DOT__ALUControlE))
                                                       ? 
                                                      ((0x1fU 
                                                        >= vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE)
                                                        ? 
                                                       (vlSelf->pipeline__DOT__Rd1E 
                                                        >> vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE)
                                                        : 0U)
                                                       : vlSelf->pipeline__DOT__Rd1E)))))));
    }
    if ((0U == (IData)(vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD))) {
        vlSelf->pipeline__DOT__ImmExtD = (((- (IData)(
                                                      (vlSelf->pipeline__DOT__InstrD 
                                                       >> 0x1fU))) 
                                           << 0xbU) 
                                          | (0x7ffU 
                                             & (vlSelf->pipeline__DOT__InstrD 
                                                >> 0x14U)));
    } else if ((1U == (IData)(vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD))) {
        vlSelf->pipeline__DOT__ImmExtD = (((- (IData)(
                                                      (vlSelf->pipeline__DOT__InstrD 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | ((0x800U 
                                              & (vlSelf->pipeline__DOT__InstrD 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->pipeline__DOT__InstrD 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->pipeline__DOT__InstrD 
                                                      >> 7U)))));
    } else if ((2U == (IData)(vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD))) {
        vlSelf->pipeline__DOT__ImmExtD = (0xfffff000U 
                                          & vlSelf->pipeline__DOT__InstrD);
    } else if ((3U == (IData)(vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD))) {
        vlSelf->pipeline__DOT__ImmExtD = (((- (IData)(
                                                      (vlSelf->pipeline__DOT__InstrD 
                                                       >> 0x1fU))) 
                                           << 0x14U) 
                                          | ((0xff000U 
                                              & vlSelf->pipeline__DOT__InstrD) 
                                             | ((0x800U 
                                                 & (vlSelf->pipeline__DOT__InstrD 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->pipeline__DOT__InstrD 
                                                      >> 0x14U)))));
    }
    vlSelf->pipeline__DOT__Fetch_block__DOT__PCF0 = 
        (((IData)(vlSelf->pipeline__DOT__JumpE) | ((IData)(vlSelf->pipeline__DOT__BranchE) 
                                                   & (0U 
                                                      == vlSelf->pipeline__DOT__ALUResultE)))
          ? vlSelf->pipeline__DOT__PCTargetE : ((IData)(4U) 
                                                + vlSelf->pipeline__DOT__PCF));
}

VL_ATTR_COLD void Vpipeline___024root___initial__TOP__0(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6f8c55de__0;
    // Body
    __Vtemp_h6f8c55de__0[0U] = 0x2e686578U;
    __Vtemp_h6f8c55de__0[1U] = 0x73742e73U;
    __Vtemp_h6f8c55de__0[2U] = 0x7465U;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h6f8c55de__0)
                 ,  &(vlSelf->pipeline__DOT__Fetch_block__DOT__Instr_rom__DOT__memory)
                 , 0U, ~0ULL);
}

VL_ATTR_COLD void Vpipeline___024root___eval_initial(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__pipeline__DOT__Decode_block__DOT__clk 
        = vlSelf->pipeline__DOT__Decode_block__DOT__clk;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vpipeline___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vpipeline___024root___eval_settle(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_settle\n"); );
    // Body
    Vpipeline___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vpipeline___024root___final(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___final\n"); );
}

VL_ATTR_COLD void Vpipeline___024root___ctor_var_reset(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__PCF = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__InstrD = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__REgWriteD = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ResultSrcD = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__MemWriteD = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__JumpD = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__BranchD = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ALUControlD = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__ALUSrcD = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ImmExtD = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__PCD = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__PCPlus4D = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__JalSrcD = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__WordWidthD = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__LoadSignExtD = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ALUControlE = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__ALUSrcE = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__Rd1E = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__Rd2E = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__PCE = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ImmExtE = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ALUResultE = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__RegWriteE = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ResultSrcE = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__MemWriteE = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__RdE = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__PCPlus4E = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__JalSrcE = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__WordWidthE = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__LoadSignExtE = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__PCTargetE = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__WriteDataM = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__MemWriteM = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ReadDataM = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__RegWriteM = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ResultSrcM = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__RdM = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__PCPlus4M = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__WordWidthM = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__LoadSignExtM = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ResultSrcW = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__ALUResultW = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ReadDataW = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__PCPlus4W = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__RdW = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__RegWriteW = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__RegWriteD = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__Fetch_block__DOT__PCF0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->pipeline__DOT__Fetch_block__DOT__Instr_rom__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__Decode_block__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory[__Vi0] = 0;
    }
    vlSelf->__Vdlyvdim0__pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers__v0 = 0;
    vlSelf->__Vdlyvval__pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers__v0 = 0;
    vlSelf->__Vchglast__TOP__pipeline__DOT__PCTargetE = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
