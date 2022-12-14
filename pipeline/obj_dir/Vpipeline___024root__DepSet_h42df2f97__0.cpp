// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"

#include "Vpipeline___024root.h"

VL_INLINE_OPT void Vpipeline___024root___sequent__TOP__0(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers__v0 = 0U;
    if (vlSelf->pipeline__DOT__RegWriteW) {
        vlSelf->__Vdlyvval__pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers__v0 
            = ((0U == (IData)(vlSelf->pipeline__DOT__ResultSrcW))
                ? vlSelf->pipeline__DOT__ALUResultW
                : ((1U == (IData)(vlSelf->pipeline__DOT__ResultSrcW))
                    ? vlSelf->pipeline__DOT__ReadDataW
                    : vlSelf->pipeline__DOT__PCPlus4W));
        vlSelf->__Vdlyvset__pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers__v0 = 1U;
        vlSelf->__Vdlyvdim0__pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers__v0 
            = vlSelf->pipeline__DOT__RdW;
    }
}

VL_INLINE_OPT void Vpipeline___024root___sequent__TOP__1(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->pipeline__DOT__ReadDataW = vlSelf->pipeline__DOT__ReadDataM;
    vlSelf->pipeline__DOT__MemWriteM = vlSelf->pipeline__DOT__MemWriteE;
    vlSelf->pipeline__DOT__JalSrcE = vlSelf->pipeline__DOT__JalSrcD;
    vlSelf->pipeline__DOT__ResultSrcW = vlSelf->pipeline__DOT__ResultSrcM;
    vlSelf->pipeline__DOT__RegWriteW = vlSelf->pipeline__DOT__RegWriteM;
    vlSelf->pipeline__DOT__BranchE = vlSelf->pipeline__DOT__BranchD;
    vlSelf->pipeline__DOT__JumpE = vlSelf->pipeline__DOT__JumpD;
    vlSelf->pipeline__DOT__LoadSignExtM = vlSelf->pipeline__DOT__LoadSignExtE;
    vlSelf->pipeline__DOT__WordWidthM = vlSelf->pipeline__DOT__WordWidthE;
    vlSelf->pipeline__DOT__ALUResultW = vlSelf->pipeline__DOT__ALUResultM;
    vlSelf->pipeline__DOT__ALUControlE = vlSelf->pipeline__DOT__ALUControlD;
    vlSelf->pipeline__DOT__PCE = vlSelf->pipeline__DOT__PCD;
    vlSelf->pipeline__DOT__PCPlus4W = vlSelf->pipeline__DOT__PCPlus4M;
    vlSelf->pipeline__DOT__ALUSrcE = vlSelf->pipeline__DOT__ALUSrcD;
    vlSelf->pipeline__DOT__ImmExtE = vlSelf->pipeline__DOT__ImmExtD;
    vlSelf->pipeline__DOT__RdW = (0x1fU & vlSelf->pipeline__DOT__RdM);
    vlSelf->pipeline__DOT__Rd1E = ((0U == (0x1fU & 
                                           (vlSelf->pipeline__DOT__InstrD 
                                            >> 0xfU)))
                                    ? 0U : vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers
                                   [(0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                              >> 0xfU))]);
    vlSelf->pipeline__DOT__WriteDataM = vlSelf->pipeline__DOT__Rd2E;
    vlSelf->pipeline__DOT__MemWriteE = vlSelf->pipeline__DOT__MemWriteD;
    vlSelf->pipeline__DOT__ResultSrcM = vlSelf->pipeline__DOT__ResultSrcE;
    vlSelf->pipeline__DOT__RegWriteM = vlSelf->pipeline__DOT__RegWriteE;
    vlSelf->pipeline__DOT__LoadSignExtE = vlSelf->pipeline__DOT__LoadSignExtD;
    vlSelf->pipeline__DOT__WordWidthE = vlSelf->pipeline__DOT__WordWidthD;
    vlSelf->pipeline__DOT__ALUResultM = vlSelf->pipeline__DOT__ALUResultE;
    vlSelf->pipeline__DOT__PCD = vlSelf->pipeline__DOT__PCF;
    vlSelf->pipeline__DOT__PCPlus4M = vlSelf->pipeline__DOT__PCPlus4E;
    vlSelf->pipeline__DOT__RdM = vlSelf->pipeline__DOT__RdE;
    vlSelf->pipeline__DOT__Rd2E = ((0U == (0x1fU & 
                                           (vlSelf->pipeline__DOT__InstrD 
                                            >> 0x14U)))
                                    ? 0U : vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers
                                   [(0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                              >> 0x14U))]);
    vlSelf->pipeline__DOT__ResultSrcE = vlSelf->pipeline__DOT__ResultSrcD;
    vlSelf->pipeline__DOT__RegWriteE = vlSelf->pipeline__DOT__RegWriteD;
    vlSelf->pipeline__DOT__PCPlus4E = vlSelf->pipeline__DOT__PCPlus4D;
    vlSelf->pipeline__DOT__RdE = (0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                           >> 7U));
    vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE 
        = ((IData)(vlSelf->pipeline__DOT__ALUSrcE) ? vlSelf->pipeline__DOT__ImmExtE
            : vlSelf->pipeline__DOT__Rd2E);
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
    vlSelf->pipeline__DOT__PCPlus4D = ((IData)(4U) 
                                       + vlSelf->pipeline__DOT__PCF);
    vlSelf->pipeline__DOT__InstrD = ((vlSelf->pipeline__DOT__Fetch_block__DOT__Instr_rom__DOT__memory
                                      [(0xfffU & ((IData)(3U) 
                                                  + vlSelf->pipeline__DOT__PCF))] 
                                      << 0x18U) | (
                                                   (vlSelf->pipeline__DOT__Fetch_block__DOT__Instr_rom__DOT__memory
                                                    [
                                                    (0xfffU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->pipeline__DOT__PCF))] 
                                                    << 0x10U) 
                                                   | ((vlSelf->pipeline__DOT__Fetch_block__DOT__Instr_rom__DOT__memory
                                                       [
                                                       (0xfffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->pipeline__DOT__PCF))] 
                                                       << 8U) 
                                                      | vlSelf->pipeline__DOT__Fetch_block__DOT__Instr_rom__DOT__memory
                                                      [
                                                      (0xfffU 
                                                       & vlSelf->pipeline__DOT__PCF)])));
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
}

VL_INLINE_OPT void Vpipeline___024root___sequent__TOP__2(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___sequent__TOP__2\n"); );
    // Init
    IData/*16:0*/ __Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v0;
    IData/*16:0*/ __Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v1;
    CData/*7:0*/ __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v1;
    CData/*0:0*/ __Vdlyvset__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v1;
    IData/*16:0*/ __Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v2;
    CData/*7:0*/ __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v2;
    IData/*16:0*/ __Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v3;
    CData/*7:0*/ __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v3;
    CData/*0:0*/ __Vdlyvset__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v3;
    IData/*16:0*/ __Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v4;
    CData/*7:0*/ __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v4;
    IData/*16:0*/ __Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v5;
    CData/*7:0*/ __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v5;
    IData/*16:0*/ __Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v6;
    CData/*7:0*/ __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v6;
    // Body
    __Vdlyvset__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v0 = 0U;
    __Vdlyvset__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v1 = 0U;
    __Vdlyvset__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v3 = 0U;
    vlSelf->pipeline__DOT__PCF = vlSelf->pipeline__DOT__Fetch_block__DOT__PCF0;
    if (vlSelf->pipeline__DOT__MemWriteM) {
        if ((0U == (IData)(vlSelf->pipeline__DOT__WordWidthM))) {
            __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v0 
                = (0xffU & vlSelf->pipeline__DOT__WriteDataM);
            __Vdlyvset__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v0 = 1U;
            __Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v0 
                = (0x1ffffU & vlSelf->pipeline__DOT__ALUResultM);
        } else if ((1U == (IData)(vlSelf->pipeline__DOT__WordWidthM))) {
            __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v1 
                = (0xffU & vlSelf->pipeline__DOT__WriteDataM);
            __Vdlyvset__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v1 = 1U;
            __Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v1 
                = (0x1ffffU & vlSelf->pipeline__DOT__ALUResultM);
            __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v2 
                = (0xffU & (vlSelf->pipeline__DOT__WriteDataM 
                            >> 8U));
            __Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v2 
                = (0x1ffffU & ((IData)(1U) + vlSelf->pipeline__DOT__ALUResultM));
        } else if ((2U == (IData)(vlSelf->pipeline__DOT__WordWidthM))) {
            __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v3 
                = (0xffU & vlSelf->pipeline__DOT__WriteDataM);
            __Vdlyvset__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v3 = 1U;
            __Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v3 
                = (0x1ffffU & vlSelf->pipeline__DOT__ALUResultM);
            __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v4 
                = (0xffU & (vlSelf->pipeline__DOT__WriteDataM 
                            >> 8U));
            __Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v4 
                = (0x1ffffU & ((IData)(1U) + vlSelf->pipeline__DOT__ALUResultM));
            __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v5 
                = (0xffU & (vlSelf->pipeline__DOT__WriteDataM 
                            >> 0x10U));
            __Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v5 
                = (0x1ffffU & ((IData)(2U) + vlSelf->pipeline__DOT__ALUResultM));
            __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v6 
                = (vlSelf->pipeline__DOT__WriteDataM 
                   >> 0x18U);
            __Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v6 
                = (0x1ffffU & ((IData)(3U) + vlSelf->pipeline__DOT__ALUResultM));
        }
    }
    if (__Vdlyvset__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v0) {
        vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory[__Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v0] 
            = __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v0;
    }
    if (__Vdlyvset__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v1) {
        vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory[__Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v1] 
            = __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v1;
        vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory[__Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v2] 
            = __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v2;
    }
    if (__Vdlyvset__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v3) {
        vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory[__Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v3] 
            = __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v3;
        vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory[__Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v4] 
            = __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v4;
        vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory[__Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v5] 
            = __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v5;
        vlSelf->pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory[__Vdlyvdim0__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v6] 
            = __Vdlyvval__pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory__v6;
    }
}

VL_INLINE_OPT void Vpipeline___024root___combo__TOP__0(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->pipeline__DOT__PCTargetE = ((IData)(vlSelf->pipeline__DOT__JalSrcE)
                                         ? (vlSelf->pipeline__DOT__PCE 
                                            + vlSelf->pipeline__DOT__ImmExtE)
                                         : vlSelf->pipeline__DOT__PCTargetE);
    vlSelf->pipeline__DOT__Fetch_block__DOT__PCF0 = 
        (((IData)(vlSelf->pipeline__DOT__JumpE) | ((IData)(vlSelf->pipeline__DOT__BranchE) 
                                                   & (0U 
                                                      == vlSelf->pipeline__DOT__ALUResultE)))
          ? vlSelf->pipeline__DOT__PCTargetE : ((IData)(4U) 
                                                + vlSelf->pipeline__DOT__PCF));
}

VL_INLINE_OPT void Vpipeline___024root___sequent__TOP__3(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___sequent__TOP__3\n"); );
    // Body
    if (vlSelf->__Vdlyvset__pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers__v0) {
        vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[vlSelf->__Vdlyvdim0__pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers__v0] 
            = vlSelf->__Vdlyvval__pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers__v0;
    }
}

VL_INLINE_OPT void Vpipeline___024root___multiclk__TOP__0(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___multiclk__TOP__0\n"); );
    // Body
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
}

void Vpipeline___024root___eval(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->pipeline__DOT__Decode_block__DOT__clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__pipeline__DOT__Decode_block__DOT__clk)))) {
        Vpipeline___024root___sequent__TOP__0(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vpipeline___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vpipeline___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vpipeline___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->pipeline__DOT__Decode_block__DOT__clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__pipeline__DOT__Decode_block__DOT__clk)))) {
        Vpipeline___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vpipeline___024root___multiclk__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__pipeline__DOT__Decode_block__DOT__clk 
        = vlSelf->pipeline__DOT__Decode_block__DOT__clk;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vpipeline___024root___change_request_1(Vpipeline___024root* vlSelf);

VL_INLINE_OPT QData Vpipeline___024root___change_request(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___change_request\n"); );
    // Body
    return (Vpipeline___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vpipeline___024root___change_request_1(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->pipeline__DOT__PCTargetE ^ vlSelf->__Vchglast__TOP__pipeline__DOT__PCTargetE));
    VL_DEBUG_IF( if(__req && ((vlSelf->pipeline__DOT__PCTargetE ^ vlSelf->__Vchglast__TOP__pipeline__DOT__PCTargetE))) VL_DBG_MSGF("        CHANGE: pipeline.sv:51: pipeline.PCTargetE\n"); );
    // Final
    vlSelf->__Vchglast__TOP__pipeline__DOT__PCTargetE 
        = vlSelf->pipeline__DOT__PCTargetE;
    return __req;
}

#ifdef VL_DEBUG
void Vpipeline___024root___eval_debug_assertions(Vpipeline___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
