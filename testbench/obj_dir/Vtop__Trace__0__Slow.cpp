// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+53,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+54,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+53,"a0", false,-1, 31,0);
    tracep->declBus(c+1,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->declBit(c+3,"PCsrc", false,-1);
    tracep->declBus(c+4,"instr", false,-1, 31,0);
    tracep->declBit(c+5,"EQ", false,-1);
    tracep->declBit(c+6,"RegWrite", false,-1);
    tracep->declBit(c+7,"ALUctrl", false,-1);
    tracep->declBit(c+8,"ALUsrc", false,-1);
    tracep->declBit(c+9,"ImmSrc", false,-1);
    tracep->declBus(c+10,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+11,"regOp2", false,-1, 31,0);
    tracep->declBus(c+12,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+13,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("Control_Unit ");
    tracep->declBus(c+54,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+5,"EQ", false,-1);
    tracep->declBus(c+4,"instr", false,-1, 31,0);
    tracep->declBit(c+6,"RegWrite", false,-1);
    tracep->declBit(c+7,"ALUctrl", false,-1);
    tracep->declBit(c+8,"ALUsrc", false,-1);
    tracep->declBit(c+9,"ImmSrc", false,-1);
    tracep->declBit(c+3,"PCsrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Instr_Mem ");
    tracep->declBus(c+55,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+54,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+14,"addr", false,-1, 15,0);
    tracep->declBus(c+4,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Register ");
    tracep->declBus(c+56,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+54,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBus(c+15,"ad1", false,-1, 4,0);
    tracep->declBus(c+16,"ad2", false,-1, 4,0);
    tracep->declBus(c+17,"ad3", false,-1, 4,0);
    tracep->declBus(c+10,"rd1", false,-1, 31,0);
    tracep->declBus(c+11,"rd2", false,-1, 31,0);
    tracep->declBus(c+13,"wd3", false,-1, 31,0);
    tracep->declBit(c+6,"we3", false,-1);
    tracep->declBus(c+53,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+18+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myALU ");
    tracep->declBus(c+54,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+7,"ctrl", false,-1);
    tracep->declBus(c+10,"op1", false,-1, 31,0);
    tracep->declBus(c+12,"op2", false,-1, 31,0);
    tracep->declBus(c+13,"out", false,-1, 31,0);
    tracep->declBit(c+5,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myCounter ");
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+1,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+3,"PCsrc", false,-1);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myMux ");
    tracep->declBus(c+54,"VALUE_WIDTH", false,-1, 31,0);
    tracep->declBit(c+8,"sel", false,-1);
    tracep->declBus(c+11,"in0", false,-1, 31,0);
    tracep->declBus(c+1,"in1", false,-1, 31,0);
    tracep->declBus(c+12,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mySign_extend ");
    tracep->declBus(c+57,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"immediate", false,-1, 11,0);
    tracep->declBit(c+9,"ImmSrc", false,-1);
    tracep->declBus(c+1,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__PC),32);
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__PCsrc));
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__instr),32);
    bufp->fullBit(oldp+5,((0U == vlSelf->top__DOT__ALUout)));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__RegWrite));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__ALUctrl));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__ALUsrc));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__ImmSrc));
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__ALUop1),32);
    bufp->fullIData(oldp+11,(((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                               >> 0x14U)))
                               ? 0U : vlSelf->top__DOT__Register__DOT__registers
                              [(0x1fU & (vlSelf->top__DOT__instr 
                                         >> 0x14U))])),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__ALUop2),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__ALUout),32);
    bufp->fullSData(oldp+14,((0xffffU & vlSelf->top__DOT__PC)),16);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+17,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__Register__DOT__registers[0]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__Register__DOT__registers[1]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__Register__DOT__registers[2]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__Register__DOT__registers[3]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__Register__DOT__registers[4]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__Register__DOT__registers[5]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__Register__DOT__registers[6]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__Register__DOT__registers[7]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__Register__DOT__registers[8]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__Register__DOT__registers[9]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__Register__DOT__registers[10]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__Register__DOT__registers[11]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__Register__DOT__registers[12]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__Register__DOT__registers[13]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__Register__DOT__registers[14]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__Register__DOT__registers[15]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__Register__DOT__registers[16]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__Register__DOT__registers[17]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__Register__DOT__registers[18]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__Register__DOT__registers[19]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__Register__DOT__registers[20]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__Register__DOT__registers[21]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__Register__DOT__registers[22]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__Register__DOT__registers[23]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__Register__DOT__registers[24]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__Register__DOT__registers[25]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__Register__DOT__registers[26]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__Register__DOT__registers[27]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__Register__DOT__registers[28]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__Register__DOT__registers[29]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__Register__DOT__registers[30]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__Register__DOT__registers[31]),32);
    bufp->fullSData(oldp+50,((vlSelf->top__DOT__instr 
                              >> 0x14U)),12);
    bufp->fullBit(oldp+51,(vlSelf->clk));
    bufp->fullBit(oldp+52,(vlSelf->rst));
    bufp->fullIData(oldp+53,(vlSelf->a0),32);
    bufp->fullIData(oldp+54,(0x20U),32);
    bufp->fullIData(oldp+55,(0x10U),32);
    bufp->fullIData(oldp+56,(5U),32);
    bufp->fullIData(oldp+57,(0xcU),32);
}
