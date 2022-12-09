// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_cpu__Syms.h"


VL_ATTR_COLD void Vf1_cpu___024root__trace_init_sub__TOP__0(Vf1_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+71,"clk", false,-1);
    tracep->declBit(c+72,"rst", false,-1);
    tracep->declBit(c+73,"a0", false,-1);
    tracep->pushNamePrefix("f1_cpu ");
    tracep->declBus(c+74,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+75,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+71,"clk", false,-1);
    tracep->declBit(c+72,"rst", false,-1);
    tracep->declBit(c+73,"a0", false,-1);
    tracep->declBus(c+1,"PC", false,-1, 15,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBit(c+76,"PCSrc", false,-1);
    tracep->declBit(c+3,"ResultSrc", false,-1);
    tracep->declBus(c+4,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+5,"ALUSrcB", false,-1);
    tracep->declBus(c+6,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+7,"RegWrite", false,-1);
    tracep->declBit(c+8,"Zero", false,-1);
    tracep->declBit(c+9,"MemWrite", false,-1);
    tracep->declBit(c+10,"ALUSrcA", false,-1);
    tracep->declBit(c+11,"JALctrl", false,-1);
    tracep->declBus(c+12,"rd1", false,-1, 31,0);
    tracep->declBus(c+13,"rd2", false,-1, 31,0);
    tracep->declBus(c+14,"Result", false,-1, 31,0);
    tracep->declBus(c+15,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+16,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+17,"JALResult", false,-1, 31,0);
    tracep->declBus(c+18,"SrcA", false,-1, 31,0);
    tracep->declBus(c+19,"SrcB", false,-1, 31,0);
    tracep->declBus(c+20,"ReadData", false,-1, 31,0);
    tracep->declBit(c+21,"PCsrc", false,-1);
    tracep->declBit(c+22,"ALUResult", false,-1);
    tracep->pushNamePrefix("ALU_mux_A ");
    tracep->declBus(c+75,"VALUE_WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"sel", false,-1);
    tracep->declBus(c+12,"in0", false,-1, 31,0);
    tracep->declBus(c+23,"in1", false,-1, 31,0);
    tracep->declBus(c+18,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_mux_B ");
    tracep->declBus(c+75,"VALUE_WIDTH", false,-1, 31,0);
    tracep->declBit(c+5,"sel", false,-1);
    tracep->declBus(c+13,"in0", false,-1, 31,0);
    tracep->declBus(c+15,"in1", false,-1, 31,0);
    tracep->declBus(c+19,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Control_Unit ");
    tracep->declBus(c+24,"op", false,-1, 6,0);
    tracep->declBus(c+25,"func3", false,-1, 2,0);
    tracep->declBit(c+26,"func7_5", false,-1);
    tracep->declBit(c+8,"Zero", false,-1);
    tracep->declBit(c+7,"RegWrite", false,-1);
    tracep->declBus(c+4,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+5,"ALUsrcB", false,-1);
    tracep->declBus(c+6,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+21,"PCsrc", false,-1);
    tracep->declBit(c+3,"ResultSrc", false,-1);
    tracep->declBit(c+9,"MemWrite", false,-1);
    tracep->declBit(c+10,"ALUsrcA", false,-1);
    tracep->declBit(c+11,"JALctrl", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Data_Mem ");
    tracep->declBus(c+77,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+78,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+27,"read_addr", false,-1, 11,0);
    tracep->declBus(c+27,"write_addr", false,-1, 11,0);
    tracep->declBus(c+13,"din", false,-1, 31,0);
    tracep->declBus(c+20,"dout", false,-1, 31,0);
    tracep->declBit(c+9,"write_en", false,-1);
    tracep->declBit(c+71,"clk", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Extend ");
    tracep->declBus(c+28,"immediate", false,-1, 31,7);
    tracep->declBus(c+6,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+15,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Instr_Mem ");
    tracep->declBus(c+74,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+75,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"addr", false,-1, 15,0);
    tracep->declBus(c+2,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("JAL_mux ");
    tracep->declBus(c+75,"VALUE_WIDTH", false,-1, 31,0);
    tracep->declBit(c+11,"sel", false,-1);
    tracep->declBus(c+14,"in0", false,-1, 31,0);
    tracep->declBus(c+29,"in1", false,-1, 31,0);
    tracep->declBus(c+17,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MyALU ");
    tracep->declBus(c+75,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4,"ctrl", false,-1, 2,0);
    tracep->declBus(c+18,"op1", false,-1, 31,0);
    tracep->declBus(c+19,"op2", false,-1, 31,0);
    tracep->declBus(c+30,"out", false,-1, 31,0);
    tracep->declBit(c+8,"zero", false,-1);
    tracep->declBit(c+31,"less_than_unsigned", false,-1);
    tracep->declBit(c+32,"less_than_signed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MyRegister ");
    tracep->declBus(c+79,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+75,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+71,"clk", false,-1);
    tracep->declBus(c+33,"ad1", false,-1, 4,0);
    tracep->declBus(c+34,"ad2", false,-1, 4,0);
    tracep->declBus(c+35,"ad3", false,-1, 4,0);
    tracep->declBus(c+12,"rd1", false,-1, 31,0);
    tracep->declBus(c+13,"rd2", false,-1, 31,0);
    tracep->declBus(c+17,"wd3", false,-1, 31,0);
    tracep->declBit(c+7,"we3", false,-1);
    tracep->declBus(c+36,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+37+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCTargetAdder ");
    tracep->declBus(c+23,"i1", false,-1, 31,0);
    tracep->declBus(c+15,"i2", false,-1, 31,0);
    tracep->declBus(c+16,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Program_Counter ");
    tracep->declBit(c+71,"clk", false,-1);
    tracep->declBit(c+72,"rst", false,-1);
    tracep->declBus(c+16,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+21,"PCsrc", false,-1);
    tracep->declBus(c+69,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Result_Mux ");
    tracep->declBus(c+75,"VALUE_WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"sel", false,-1);
    tracep->declBus(c+70,"in0", false,-1, 31,0);
    tracep->declBus(c+20,"in1", false,-1, 31,0);
    tracep->declBus(c+14,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1_cpu___024root__trace_init_top(Vf1_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root__trace_init_top\n"); );
    // Body
    Vf1_cpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_cpu___024root__trace_register(Vf1_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_cpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_cpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_cpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_cpu___024root__trace_full_sub_0(Vf1_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root__trace_full_top_0\n"); );
    // Init
    Vf1_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_cpu___024root*>(voidSelf);
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_cpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_cpu___024root__trace_full_sub_0(Vf1_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_cpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,((0xffffU & vlSelf->f1_cpu__DOT____Vcellout__Program_Counter__PC)),16);
    bufp->fullIData(oldp+2,(vlSelf->f1_cpu__DOT__instr),32);
    bufp->fullBit(oldp+3,(vlSelf->f1_cpu__DOT__ResultSrc));
    bufp->fullCData(oldp+4,(vlSelf->f1_cpu__DOT__ALUctrl),3);
    bufp->fullBit(oldp+5,(vlSelf->f1_cpu__DOT__ALUSrcB));
    bufp->fullCData(oldp+6,(vlSelf->f1_cpu__DOT__ImmSrc),2);
    bufp->fullBit(oldp+7,(vlSelf->f1_cpu__DOT__RegWrite));
    bufp->fullBit(oldp+8,((0U == vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)));
    bufp->fullBit(oldp+9,(vlSelf->f1_cpu__DOT__MemWrite));
    bufp->fullBit(oldp+10,(vlSelf->f1_cpu__DOT__ALUSrcA));
    bufp->fullBit(oldp+11,(vlSelf->f1_cpu__DOT__JALctrl));
    bufp->fullIData(oldp+12,(((0U == (0x1fU & (vlSelf->f1_cpu__DOT__instr 
                                               >> 0xfU)))
                               ? 0U : vlSelf->f1_cpu__DOT__MyRegister__DOT__registers
                              [(0x1fU & (vlSelf->f1_cpu__DOT__instr 
                                         >> 0xfU))])),32);
    bufp->fullIData(oldp+13,(vlSelf->f1_cpu__DOT__rd2),32);
    bufp->fullIData(oldp+14,(((IData)(vlSelf->f1_cpu__DOT__ResultSrc)
                               ? ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                   [(0xffU & ((IData)(3U) 
                                              + (1U 
                                                 & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)))] 
                                   << 0x18U) | ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                                 [(0xffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (1U 
                                                       & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)))] 
                                                 << 0x10U) 
                                                | ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
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
                               : (1U & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out))),32);
    bufp->fullIData(oldp+15,(vlSelf->f1_cpu__DOT__ImmExt),32);
    bufp->fullIData(oldp+16,(((0xffffU & vlSelf->f1_cpu__DOT____Vcellout__Program_Counter__PC) 
                              + vlSelf->f1_cpu__DOT__ImmExt)),32);
    bufp->fullIData(oldp+17,(((IData)(vlSelf->f1_cpu__DOT__JALctrl)
                               ? ((IData)(4U) + (0xffffU 
                                                 & vlSelf->f1_cpu__DOT____Vcellout__Program_Counter__PC))
                               : ((IData)(vlSelf->f1_cpu__DOT__ResultSrc)
                                   ? ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                       [(0xffU & ((IData)(3U) 
                                                  + 
                                                  (1U 
                                                   & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)))] 
                                       << 0x18U) | 
                                      ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                        [(0xffU & ((IData)(2U) 
                                                   + 
                                                   (1U 
                                                    & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)))] 
                                        << 0x10U) | 
                                       ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                         [(0xffU & 
                                           ((IData)(1U) 
                                            + (1U & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)))] 
                                         << 8U) | vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                        [(1U & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)])))
                                   : (1U & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)))),32);
    bufp->fullIData(oldp+18,(vlSelf->f1_cpu__DOT__SrcA),32);
    bufp->fullIData(oldp+19,(vlSelf->f1_cpu__DOT__SrcB),32);
    bufp->fullIData(oldp+20,(((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                               [(0xffU & ((IData)(3U) 
                                          + (1U & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)))] 
                               << 0x18U) | ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                             [(0xffU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (1U 
                                                   & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)))] 
                                             << 0x10U) 
                                            | ((vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (1U 
                                                      & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)))] 
                                                << 8U) 
                                               | vlSelf->f1_cpu__DOT__Data_Mem__DOT__memory
                                               [(1U 
                                                 & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)])))),32);
    bufp->fullBit(oldp+21,(vlSelf->f1_cpu__DOT__PCsrc));
    bufp->fullBit(oldp+22,((1U & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)));
    bufp->fullIData(oldp+23,((0xffffU & vlSelf->f1_cpu__DOT____Vcellout__Program_Counter__PC)),32);
    bufp->fullCData(oldp+24,((0x7fU & vlSelf->f1_cpu__DOT__instr)),7);
    bufp->fullCData(oldp+25,((7U & (vlSelf->f1_cpu__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+26,((1U & (vlSelf->f1_cpu__DOT__instr 
                                  >> 0x1eU))));
    bufp->fullSData(oldp+27,((1U & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)),12);
    bufp->fullIData(oldp+28,((vlSelf->f1_cpu__DOT__instr 
                              >> 7U)),25);
    bufp->fullIData(oldp+29,(((IData)(4U) + (0xffffU 
                                             & vlSelf->f1_cpu__DOT____Vcellout__Program_Counter__PC))),32);
    bufp->fullIData(oldp+30,(vlSelf->f1_cpu__DOT____Vcellout__MyALU__out),32);
    bufp->fullBit(oldp+31,((vlSelf->f1_cpu__DOT__SrcA 
                            < vlSelf->f1_cpu__DOT__SrcB)));
    bufp->fullBit(oldp+32,(VL_LTS_III(32, vlSelf->f1_cpu__DOT__SrcA, vlSelf->f1_cpu__DOT__SrcB)));
    bufp->fullCData(oldp+33,((0x1fU & (vlSelf->f1_cpu__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+34,((0x1fU & (vlSelf->f1_cpu__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+35,((0x1fU & (vlSelf->f1_cpu__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+36,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers
                             [0xaU]),32);
    bufp->fullIData(oldp+37,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[0]),32);
    bufp->fullIData(oldp+38,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[1]),32);
    bufp->fullIData(oldp+39,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[2]),32);
    bufp->fullIData(oldp+40,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[3]),32);
    bufp->fullIData(oldp+41,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[4]),32);
    bufp->fullIData(oldp+42,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[5]),32);
    bufp->fullIData(oldp+43,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[6]),32);
    bufp->fullIData(oldp+44,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[7]),32);
    bufp->fullIData(oldp+45,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[8]),32);
    bufp->fullIData(oldp+46,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[9]),32);
    bufp->fullIData(oldp+47,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[10]),32);
    bufp->fullIData(oldp+48,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[11]),32);
    bufp->fullIData(oldp+49,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[12]),32);
    bufp->fullIData(oldp+50,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[13]),32);
    bufp->fullIData(oldp+51,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[14]),32);
    bufp->fullIData(oldp+52,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[15]),32);
    bufp->fullIData(oldp+53,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[16]),32);
    bufp->fullIData(oldp+54,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[17]),32);
    bufp->fullIData(oldp+55,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[18]),32);
    bufp->fullIData(oldp+56,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[19]),32);
    bufp->fullIData(oldp+57,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[20]),32);
    bufp->fullIData(oldp+58,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[21]),32);
    bufp->fullIData(oldp+59,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[22]),32);
    bufp->fullIData(oldp+60,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[23]),32);
    bufp->fullIData(oldp+61,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[24]),32);
    bufp->fullIData(oldp+62,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[25]),32);
    bufp->fullIData(oldp+63,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[26]),32);
    bufp->fullIData(oldp+64,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[27]),32);
    bufp->fullIData(oldp+65,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[28]),32);
    bufp->fullIData(oldp+66,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[29]),32);
    bufp->fullIData(oldp+67,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[30]),32);
    bufp->fullIData(oldp+68,(vlSelf->f1_cpu__DOT__MyRegister__DOT__registers[31]),32);
    bufp->fullIData(oldp+69,(vlSelf->f1_cpu__DOT____Vcellout__Program_Counter__PC),32);
    bufp->fullIData(oldp+70,((1U & vlSelf->f1_cpu__DOT____Vcellout__MyALU__out)),32);
    bufp->fullBit(oldp+71,(vlSelf->clk));
    bufp->fullBit(oldp+72,(vlSelf->rst));
    bufp->fullBit(oldp+73,(vlSelf->a0));
    bufp->fullIData(oldp+74,(0x10U),32);
    bufp->fullIData(oldp+75,(0x20U),32);
    bufp->fullBit(oldp+76,(vlSelf->f1_cpu__DOT__PCSrc));
    bufp->fullIData(oldp+77,(0xcU),32);
    bufp->fullIData(oldp+78,(8U),32);
    bufp->fullIData(oldp+79,(5U),32);
}
