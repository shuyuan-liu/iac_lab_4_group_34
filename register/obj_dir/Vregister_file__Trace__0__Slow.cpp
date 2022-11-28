// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregister_file__Syms.h"


VL_ATTR_COLD void Vregister_file___024root__trace_init_sub__TOP__0(Vregister_file___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBus(c+34,"ad1", false,-1, 4,0);
    tracep->declBus(c+35,"ad2", false,-1, 4,0);
    tracep->declBus(c+36,"ad3", false,-1, 4,0);
    tracep->declBus(c+37,"rd1", false,-1, 31,0);
    tracep->declBus(c+38,"rd2", false,-1, 31,0);
    tracep->declBus(c+39,"wd3", false,-1, 31,0);
    tracep->declBit(c+40,"we3", false,-1);
    tracep->declBus(c+41,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("resgister_file ");
    tracep->declBus(c+42,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+43,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBus(c+34,"ad1", false,-1, 4,0);
    tracep->declBus(c+35,"ad2", false,-1, 4,0);
    tracep->declBus(c+36,"ad3", false,-1, 4,0);
    tracep->declBus(c+37,"rd1", false,-1, 31,0);
    tracep->declBus(c+38,"rd2", false,-1, 31,0);
    tracep->declBus(c+39,"wd3", false,-1, 31,0);
    tracep->declBit(c+40,"we3", false,-1);
    tracep->declBus(c+41,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vregister_file___024root__trace_init_top(Vregister_file___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_init_top\n"); );
    // Body
    Vregister_file___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vregister_file___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregister_file___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregister_file___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vregister_file___024root__trace_register(Vregister_file___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vregister_file___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vregister_file___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vregister_file___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vregister_file___024root__trace_full_sub_0(Vregister_file___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vregister_file___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_full_top_0\n"); );
    // Init
    Vregister_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister_file___024root*>(voidSelf);
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vregister_file___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vregister_file___024root__trace_full_sub_0(Vregister_file___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->resgister_file__DOT__registers[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->resgister_file__DOT__registers[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->resgister_file__DOT__registers[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->resgister_file__DOT__registers[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->resgister_file__DOT__registers[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->resgister_file__DOT__registers[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->resgister_file__DOT__registers[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->resgister_file__DOT__registers[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->resgister_file__DOT__registers[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->resgister_file__DOT__registers[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->resgister_file__DOT__registers[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->resgister_file__DOT__registers[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->resgister_file__DOT__registers[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->resgister_file__DOT__registers[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->resgister_file__DOT__registers[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->resgister_file__DOT__registers[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->resgister_file__DOT__registers[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->resgister_file__DOT__registers[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->resgister_file__DOT__registers[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->resgister_file__DOT__registers[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->resgister_file__DOT__registers[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->resgister_file__DOT__registers[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->resgister_file__DOT__registers[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->resgister_file__DOT__registers[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->resgister_file__DOT__registers[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->resgister_file__DOT__registers[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->resgister_file__DOT__registers[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->resgister_file__DOT__registers[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->resgister_file__DOT__registers[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->resgister_file__DOT__registers[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->resgister_file__DOT__registers[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->resgister_file__DOT__registers[31]),32);
    bufp->fullBit(oldp+33,(vlSelf->clk));
    bufp->fullCData(oldp+34,(vlSelf->ad1),5);
    bufp->fullCData(oldp+35,(vlSelf->ad2),5);
    bufp->fullCData(oldp+36,(vlSelf->ad3),5);
    bufp->fullIData(oldp+37,(vlSelf->rd1),32);
    bufp->fullIData(oldp+38,(vlSelf->rd2),32);
    bufp->fullIData(oldp+39,(vlSelf->wd3),32);
    bufp->fullBit(oldp+40,(vlSelf->we3));
    bufp->fullIData(oldp+41,(vlSelf->a0),32);
    bufp->fullIData(oldp+42,(5U),32);
    bufp->fullIData(oldp+43,(0x20U),32);
}
