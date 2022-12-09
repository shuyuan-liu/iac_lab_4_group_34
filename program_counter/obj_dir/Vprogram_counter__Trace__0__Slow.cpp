// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vprogram_counter__Syms.h"


VL_ATTR_COLD void Vprogram_counter___024root__trace_init_sub__TOP__0(Vprogram_counter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBus(c+5,"PC", false,-1, 31,0);
    tracep->declBus(c+6,"PC_plus_4", false,-1, 31,0);
    tracep->pushNamePrefix("program_counter ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBus(c+5,"PC", false,-1, 31,0);
    tracep->declBus(c+6,"PC_plus_4", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vprogram_counter___024root__trace_init_top(Vprogram_counter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root__trace_init_top\n"); );
    // Body
    Vprogram_counter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vprogram_counter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vprogram_counter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vprogram_counter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vprogram_counter___024root__trace_register(Vprogram_counter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vprogram_counter___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vprogram_counter___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vprogram_counter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vprogram_counter___024root__trace_full_sub_0(Vprogram_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vprogram_counter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root__trace_full_top_0\n"); );
    // Init
    Vprogram_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprogram_counter___024root*>(voidSelf);
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vprogram_counter___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vprogram_counter___024root__trace_full_sub_0(Vprogram_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullIData(oldp+3,(vlSelf->ImmOp),32);
    bufp->fullBit(oldp+4,(vlSelf->PCsrc));
    bufp->fullIData(oldp+5,(vlSelf->PC),32);
    bufp->fullIData(oldp+6,(vlSelf->PC_plus_4),32);
}
