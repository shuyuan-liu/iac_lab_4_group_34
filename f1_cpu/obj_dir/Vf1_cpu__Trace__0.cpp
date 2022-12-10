// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_cpu__Syms.h"


void Vf1_cpu___024root__trace_chg_sub_0(Vf1_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vf1_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root__trace_chg_top_0\n"); );
    // Init
    Vf1_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_cpu___024root*>(voidSelf);
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vf1_cpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vf1_cpu___024root__trace_chg_sub_0(Vf1_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->f1_cpu__DOT__PC),32);
        bufp->chgIData(oldp+1,(vlSelf->f1_cpu__DOT__instr),32);
        bufp->chgBit(oldp+2,(vlSelf->f1_cpu__DOT__PCSrc));
        bufp->chgBit(oldp+3,(vlSelf->f1_cpu__DOT__ResultSrc));
        bufp->chgCData(oldp+4,(vlSelf->f1_cpu__DOT__ALUctrl),3);
        bufp->chgBit(oldp+5,(vlSelf->f1_cpu__DOT__ALUSrcB));
        bufp->chgCData(oldp+6,(vlSelf->f1_cpu__DOT__ImmSrc),2);
        bufp->chgBit(oldp+7,(vlSelf->f1_cpu__DOT__RegWrite));
        bufp->chgBit(oldp+8,((0U == vlSelf->f1_cpu__DOT__ALUResult)));
        bufp->chgBit(oldp+9,(vlSelf->f1_cpu__DOT__MemWrite));
        bufp->chgBit(oldp+10,(vlSelf->f1_cpu__DOT__ALUSrcA));
        bufp->chgBit(oldp+11,(vlSelf->f1_cpu__DOT__JALctrl));
        bufp->chgIData(oldp+12,(((0U == (0x1fU & (vlSelf->f1_cpu__DOT__instr 
                                                  >> 0xfU)))
                                  ? 0U : vlSelf->f1_cpu__DOT__MyRegister__DOT__registers
                                 [(0x1fU & (vlSelf->f1_cpu__DOT__instr 
                                            >> 0xfU))])),32);
        bufp->chgIData(oldp+13,(vlSelf->f1_cpu__DOT__rd2),32);
        bufp->chgIData(oldp+14,(((IData)(vlSelf->f1_cpu__DOT__ResultSrc)
                                  ? ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                      [(0xffU & ((IData)(3U) 
                                                 + 
                                                 (0xfffU 
                                                  & vlSelf->f1_cpu__DOT__ALUResult)))] 
                                      << 0x18U) | (
                                                   (vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                                    [
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xfffU 
                                                         & vlSelf->f1_cpu__DOT__ALUResult)))] 
                                                    << 0x10U) 
                                                   | ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                                       [
                                                       (0xffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (0xfffU 
                                                            & vlSelf->f1_cpu__DOT__ALUResult)))] 
                                                       << 8U) 
                                                      | vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                                      [
                                                      (0xffU 
                                                       & vlSelf->f1_cpu__DOT__ALUResult)])))
                                  : vlSelf->f1_cpu__DOT__ALUResult)),32);
        bufp->chgIData(oldp+15,(vlSelf->f1_cpu__DOT__ImmExt),32);
        bufp->chgIData(oldp+16,((vlSelf->f1_cpu__DOT__PC 
                                 + vlSelf->f1_cpu__DOT__ImmExt)),32);
        bufp->chgIData(oldp+17,(((IData)(vlSelf->f1_cpu__DOT__JALctrl)
                                  ? ((IData)(4U) + vlSelf->f1_cpu__DOT__PC)
                                  : ((IData)(vlSelf->f1_cpu__DOT__ResultSrc)
                                      ? ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                          [(0xffU & 
                                            ((IData)(3U) 
                                             + (0xfffU 
                                                & vlSelf->f1_cpu__DOT__ALUResult)))] 
                                          << 0x18U) 
                                         | ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                             [(0xffU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0xfffU 
                                                   & vlSelf->f1_cpu__DOT__ALUResult)))] 
                                             << 0x10U) 
                                            | ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0xfffU 
                                                      & vlSelf->f1_cpu__DOT__ALUResult)))] 
                                                << 8U) 
                                               | vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                               [(0xffU 
                                                 & vlSelf->f1_cpu__DOT__ALUResult)])))
                                      : vlSelf->f1_cpu__DOT__ALUResult))),32);
        bufp->chgIData(oldp+18,(vlSelf->f1_cpu__DOT__SrcA),32);
        bufp->chgIData(oldp+19,(vlSelf->f1_cpu__DOT__SrcB),32);
        bufp->chgIData(oldp+20,(((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                  [(0xffU & ((IData)(3U) 
                                             + (0xfffU 
                                                & vlSelf->f1_cpu__DOT__ALUResult)))] 
                                  << 0x18U) | ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xfffU 
                                                      & vlSelf->f1_cpu__DOT__ALUResult)))] 
                                                << 0x10U) 
                                               | ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                                   [
                                                   (0xffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0xfffU 
                                                        & vlSelf->f1_cpu__DOT__ALUResult)))] 
                                                   << 8U) 
                                                  | vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                                  [
                                                  (0xffU 
                                                   & vlSelf->f1_cpu__DOT__ALUResult)])))),32);
        bufp->chgIData(oldp+21,(vlSelf->f1_cpu__DOT__ALUResult),32);
        bufp->chgCData(oldp+22,((0x7fU & vlSelf->f1_cpu__DOT__instr)),7);
        bufp->chgCData(oldp+23,((7U & (vlSelf->f1_cpu__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+24,((1U & (vlSelf->f1_cpu__DOT__instr 
                                     >> 0x1eU))));
        bufp->chgSData(oldp+25,((0xfffU & vlSelf->f1_cpu__DOT__ALUResult)),12);
        bufp->chgIData(oldp+26,((vlSelf->f1_cpu__DOT__instr 
                                 >> 7U)),25);
        bufp->chgSData(oldp+27,((0xfffU & vlSelf->f1_cpu__DOT__PC)),12);
        bufp->chgIData(oldp+28,(((IData)(4U) + vlSelf->f1_cpu__DOT__PC)),32);
        bufp->chgBit(oldp+29,((vlSelf->f1_cpu__DOT__SrcA 
                               < vlSelf->f1_cpu__DOT__SrcB)));
        bufp->chgBit(oldp+30,(VL_LTS_III(32, vlSelf->f1_cpu__DOT__SrcA, vlSelf->f1_cpu__DOT__SrcB)));
        bufp->chgCData(oldp+31,((0x1fU & (vlSelf->f1_cpu__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+32,((0x1fU & (vlSelf->f1_cpu__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+33,((0x1fU & (vlSelf->f1_cpu__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+34,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers
                                [0xaU]),32);
        bufp->chgIData(oldp+35,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[0]),32);
        bufp->chgIData(oldp+36,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[1]),32);
        bufp->chgIData(oldp+37,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[2]),32);
        bufp->chgIData(oldp+38,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[3]),32);
        bufp->chgIData(oldp+39,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[4]),32);
        bufp->chgIData(oldp+40,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[5]),32);
        bufp->chgIData(oldp+41,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[6]),32);
        bufp->chgIData(oldp+42,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[7]),32);
        bufp->chgIData(oldp+43,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[8]),32);
        bufp->chgIData(oldp+44,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[9]),32);
        bufp->chgIData(oldp+45,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[10]),32);
        bufp->chgIData(oldp+46,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[11]),32);
        bufp->chgIData(oldp+47,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[12]),32);
        bufp->chgIData(oldp+48,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[13]),32);
        bufp->chgIData(oldp+49,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[14]),32);
        bufp->chgIData(oldp+50,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[15]),32);
        bufp->chgIData(oldp+51,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[16]),32);
        bufp->chgIData(oldp+52,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[17]),32);
        bufp->chgIData(oldp+53,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[18]),32);
        bufp->chgIData(oldp+54,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[19]),32);
        bufp->chgIData(oldp+55,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[20]),32);
        bufp->chgIData(oldp+56,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[21]),32);
        bufp->chgIData(oldp+57,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[22]),32);
        bufp->chgIData(oldp+58,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[23]),32);
        bufp->chgIData(oldp+59,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[24]),32);
        bufp->chgIData(oldp+60,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[25]),32);
        bufp->chgIData(oldp+61,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[26]),32);
        bufp->chgIData(oldp+62,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[27]),32);
        bufp->chgIData(oldp+63,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[28]),32);
        bufp->chgIData(oldp+64,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[29]),32);
        bufp->chgIData(oldp+65,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[30]),32);
        bufp->chgIData(oldp+66,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[31]),32);
    }
    bufp->chgBit(oldp+67,(vlSelf->clk));
    bufp->chgBit(oldp+68,(vlSelf->rst));
    bufp->chgBit(oldp+69,(vlSelf->a0));
}

void Vf1_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root__trace_cleanup\n"); );
    // Init
    Vf1_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_cpu___024root*>(voidSelf);
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
