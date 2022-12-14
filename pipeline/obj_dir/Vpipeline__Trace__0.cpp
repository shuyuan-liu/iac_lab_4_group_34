// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


void Vpipeline___024root__trace_chg_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpipeline___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_top_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpipeline___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vpipeline___024root__trace_chg_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->pipeline__DOT__InstrD),32);
        bufp->chgCData(oldp+1,(vlSelf->pipeline__DOT__ResultSrcD),2);
        bufp->chgBit(oldp+2,(vlSelf->pipeline__DOT__MemWriteD));
        bufp->chgBit(oldp+3,(vlSelf->pipeline__DOT__JumpD));
        bufp->chgBit(oldp+4,(vlSelf->pipeline__DOT__BranchD));
        bufp->chgCData(oldp+5,(vlSelf->pipeline__DOT__ALUControlD),3);
        bufp->chgBit(oldp+6,(vlSelf->pipeline__DOT__ALUSrcD));
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                         >> 7U))),5);
        bufp->chgIData(oldp+8,(vlSelf->pipeline__DOT__ImmExtD),32);
        bufp->chgIData(oldp+9,(vlSelf->pipeline__DOT__PCD),32);
        bufp->chgIData(oldp+10,(vlSelf->pipeline__DOT__PCPlus4D),32);
        bufp->chgBit(oldp+11,(vlSelf->pipeline__DOT__JalSrcD));
        bufp->chgCData(oldp+12,(vlSelf->pipeline__DOT__WordWidthD),2);
        bufp->chgBit(oldp+13,(vlSelf->pipeline__DOT__LoadSignExtD));
        bufp->chgBit(oldp+14,(vlSelf->pipeline__DOT__JumpE));
        bufp->chgBit(oldp+15,(vlSelf->pipeline__DOT__BranchE));
        bufp->chgCData(oldp+16,(vlSelf->pipeline__DOT__ALUControlE),3);
        bufp->chgBit(oldp+17,(vlSelf->pipeline__DOT__ALUSrcE));
        bufp->chgIData(oldp+18,(vlSelf->pipeline__DOT__Rd1E),32);
        bufp->chgIData(oldp+19,(vlSelf->pipeline__DOT__Rd2E),32);
        bufp->chgIData(oldp+20,(vlSelf->pipeline__DOT__PCE),32);
        bufp->chgIData(oldp+21,(vlSelf->pipeline__DOT__ImmExtE),32);
        bufp->chgIData(oldp+22,(vlSelf->pipeline__DOT__ALUResultE),32);
        bufp->chgBit(oldp+23,(vlSelf->pipeline__DOT__RegWriteE));
        bufp->chgCData(oldp+24,(vlSelf->pipeline__DOT__ResultSrcE),2);
        bufp->chgBit(oldp+25,(vlSelf->pipeline__DOT__MemWriteE));
        bufp->chgIData(oldp+26,(vlSelf->pipeline__DOT__RdE),32);
        bufp->chgIData(oldp+27,(vlSelf->pipeline__DOT__PCPlus4E),32);
        bufp->chgBit(oldp+28,(vlSelf->pipeline__DOT__JalSrcE));
        bufp->chgCData(oldp+29,(vlSelf->pipeline__DOT__WordWidthE),2);
        bufp->chgBit(oldp+30,(vlSelf->pipeline__DOT__LoadSignExtE));
        bufp->chgBit(oldp+31,(((IData)(vlSelf->pipeline__DOT__JumpE) 
                               | ((IData)(vlSelf->pipeline__DOT__BranchE) 
                                  & (0U == vlSelf->pipeline__DOT__ALUResultE)))));
        bufp->chgIData(oldp+32,(vlSelf->pipeline__DOT__ALUResultM),32);
        bufp->chgIData(oldp+33,(vlSelf->pipeline__DOT__WriteDataM),32);
        bufp->chgBit(oldp+34,(vlSelf->pipeline__DOT__MemWriteM));
        bufp->chgBit(oldp+35,(vlSelf->pipeline__DOT__RegWriteM));
        bufp->chgCData(oldp+36,(vlSelf->pipeline__DOT__ResultSrcM),2);
        bufp->chgIData(oldp+37,(vlSelf->pipeline__DOT__RdM),32);
        bufp->chgIData(oldp+38,(vlSelf->pipeline__DOT__PCPlus4M),32);
        bufp->chgCData(oldp+39,(vlSelf->pipeline__DOT__WordWidthM),2);
        bufp->chgBit(oldp+40,(vlSelf->pipeline__DOT__LoadSignExtM));
        bufp->chgCData(oldp+41,(vlSelf->pipeline__DOT__ResultSrcW),2);
        bufp->chgIData(oldp+42,(vlSelf->pipeline__DOT__ALUResultW),32);
        bufp->chgIData(oldp+43,(vlSelf->pipeline__DOT__ReadDataW),32);
        bufp->chgIData(oldp+44,(vlSelf->pipeline__DOT__PCPlus4W),32);
        bufp->chgIData(oldp+45,(((0U == (IData)(vlSelf->pipeline__DOT__ResultSrcW))
                                  ? vlSelf->pipeline__DOT__ALUResultW
                                  : ((1U == (IData)(vlSelf->pipeline__DOT__ResultSrcW))
                                      ? vlSelf->pipeline__DOT__ReadDataW
                                      : vlSelf->pipeline__DOT__PCPlus4W))),32);
        bufp->chgCData(oldp+46,(vlSelf->pipeline__DOT__RdW),5);
        bufp->chgBit(oldp+47,(vlSelf->pipeline__DOT__RegWriteW));
        bufp->chgBit(oldp+48,(vlSelf->pipeline__DOT__RegWriteD));
        bufp->chgCData(oldp+49,(vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD),2);
        bufp->chgCData(oldp+50,((0x7fU & vlSelf->pipeline__DOT__InstrD)),7);
        bufp->chgCData(oldp+51,((7U & (vlSelf->pipeline__DOT__InstrD 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+52,((vlSelf->pipeline__DOT__InstrD 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+53,((vlSelf->pipeline__DOT__InstrD 
                                 >> 7U)),25);
        bufp->chgCData(oldp+54,((0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+55,((0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+56,((0U == vlSelf->pipeline__DOT__ALUResultE)));
        bufp->chgIData(oldp+57,(vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE),32);
        bufp->chgIData(oldp+58,((vlSelf->pipeline__DOT__PCE 
                                 + vlSelf->pipeline__DOT__ImmExtE)),32);
        bufp->chgBit(oldp+59,((vlSelf->pipeline__DOT__Rd1E 
                               < vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE)));
        bufp->chgBit(oldp+60,(VL_LTS_III(32, vlSelf->pipeline__DOT__Rd1E, vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE)));
        bufp->chgIData(oldp+61,((0x1ffffU & vlSelf->pipeline__DOT__ALUResultM)),17);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+62,(((vlSelf->pipeline__DOT__Fetch_block__DOT__Instr_rom__DOT__memory
                                  [(0xfffU & ((IData)(3U) 
                                              + vlSelf->pipeline__DOT__PCF))] 
                                  << 0x18U) | ((vlSelf->pipeline__DOT__Fetch_block__DOT__Instr_rom__DOT__memory
                                                [(0xfffU 
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
                                                   & vlSelf->pipeline__DOT__PCF)])))),32);
        bufp->chgIData(oldp+63,(vlSelf->pipeline__DOT__PCF),32);
        bufp->chgIData(oldp+64,(((IData)(4U) + vlSelf->pipeline__DOT__PCF)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+65,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers
                                [0xaU]),32);
        bufp->chgIData(oldp+66,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[0]),32);
        bufp->chgIData(oldp+67,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[1]),32);
        bufp->chgIData(oldp+68,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[2]),32);
        bufp->chgIData(oldp+69,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[3]),32);
        bufp->chgIData(oldp+70,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[4]),32);
        bufp->chgIData(oldp+71,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[5]),32);
        bufp->chgIData(oldp+72,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[6]),32);
        bufp->chgIData(oldp+73,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[7]),32);
        bufp->chgIData(oldp+74,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[8]),32);
        bufp->chgIData(oldp+75,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[9]),32);
        bufp->chgIData(oldp+76,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[10]),32);
        bufp->chgIData(oldp+77,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[11]),32);
        bufp->chgIData(oldp+78,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[12]),32);
        bufp->chgIData(oldp+79,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[13]),32);
        bufp->chgIData(oldp+80,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[14]),32);
        bufp->chgIData(oldp+81,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[15]),32);
        bufp->chgIData(oldp+82,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[16]),32);
        bufp->chgIData(oldp+83,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[17]),32);
        bufp->chgIData(oldp+84,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[18]),32);
        bufp->chgIData(oldp+85,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[19]),32);
        bufp->chgIData(oldp+86,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[20]),32);
        bufp->chgIData(oldp+87,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[21]),32);
        bufp->chgIData(oldp+88,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[22]),32);
        bufp->chgIData(oldp+89,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[23]),32);
        bufp->chgIData(oldp+90,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[24]),32);
        bufp->chgIData(oldp+91,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[25]),32);
        bufp->chgIData(oldp+92,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[26]),32);
        bufp->chgIData(oldp+93,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[27]),32);
        bufp->chgIData(oldp+94,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[28]),32);
        bufp->chgIData(oldp+95,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[29]),32);
        bufp->chgIData(oldp+96,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[30]),32);
        bufp->chgIData(oldp+97,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[31]),32);
    }
    bufp->chgBit(oldp+98,(vlSelf->clk));
    bufp->chgBit(oldp+99,(vlSelf->rst));
    bufp->chgIData(oldp+100,(((0U == (0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                               >> 0xfU)))
                               ? 0U : vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers
                              [(0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                         >> 0xfU))])),32);
    bufp->chgIData(oldp+101,(((0U == (0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                               >> 0x14U)))
                               ? 0U : vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers
                              [(0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                         >> 0x14U))])),32);
    bufp->chgIData(oldp+102,(vlSelf->pipeline__DOT__PCTargetE),32);
    bufp->chgIData(oldp+103,(vlSelf->pipeline__DOT__ReadDataM),32);
    bufp->chgIData(oldp+104,((((IData)(vlSelf->pipeline__DOT__JumpE) 
                               | ((IData)(vlSelf->pipeline__DOT__BranchE) 
                                  & (0U == vlSelf->pipeline__DOT__ALUResultE)))
                               ? vlSelf->pipeline__DOT__PCTargetE
                               : ((IData)(4U) + vlSelf->pipeline__DOT__PCF))),32);
}

void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_cleanup\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
