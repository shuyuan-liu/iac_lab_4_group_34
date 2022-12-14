// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+99,"clk", false,-1);
    tracep->declBit(c+100,"rst", false,-1);
    tracep->pushNamePrefix("pipeline ");
    tracep->declBus(c+106,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+99,"clk", false,-1);
    tracep->declBit(c+100,"rst", false,-1);
    tracep->declBus(c+63,"InstrF", false,-1, 31,0);
    tracep->declBus(c+64,"PCF", false,-1, 31,0);
    tracep->declBus(c+65,"PCPlus4F", false,-1, 31,0);
    tracep->declBus(c+1,"InstrD", false,-1, 31,0);
    tracep->declBit(c+108,"REgWriteD", false,-1);
    tracep->declBus(c+2,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+3,"MemWriteD", false,-1);
    tracep->declBit(c+4,"JumpD", false,-1);
    tracep->declBit(c+5,"BranchD", false,-1);
    tracep->declBus(c+6,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+7,"ALUSrcD", false,-1);
    tracep->declBus(c+101,"Rd1D", false,-1, 31,0);
    tracep->declBus(c+102,"Rd2D", false,-1, 31,0);
    tracep->declBus(c+8,"RdD", false,-1, 4,0);
    tracep->declBus(c+9,"ImmExtD", false,-1, 31,0);
    tracep->declBus(c+10,"PCD", false,-1, 31,0);
    tracep->declBus(c+11,"PCPlus4D", false,-1, 31,0);
    tracep->declBit(c+12,"JalSrcD", false,-1);
    tracep->declBus(c+13,"WordWidthD", false,-1, 1,0);
    tracep->declBit(c+14,"LoadSignExtD", false,-1);
    tracep->declBit(c+15,"JumpE", false,-1);
    tracep->declBit(c+16,"BranchE", false,-1);
    tracep->declBus(c+17,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+18,"ALUSrcE", false,-1);
    tracep->declBus(c+19,"Rd1E", false,-1, 31,0);
    tracep->declBus(c+20,"Rd2E", false,-1, 31,0);
    tracep->declBus(c+21,"PCE", false,-1, 31,0);
    tracep->declBus(c+22,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+23,"ALUResultE", false,-1, 31,0);
    tracep->declBus(c+20,"WriteDataE", false,-1, 31,0);
    tracep->declBit(c+24,"RegWriteE", false,-1);
    tracep->declBus(c+25,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+26,"MemWriteE", false,-1);
    tracep->declBus(c+27,"RdE", false,-1, 31,0);
    tracep->declBus(c+28,"PCPlus4E", false,-1, 31,0);
    tracep->declBit(c+29,"JalSrcE", false,-1);
    tracep->declBus(c+30,"WordWidthE", false,-1, 1,0);
    tracep->declBit(c+31,"LoadSignExtE", false,-1);
    tracep->declBit(c+32,"PCSrcE", false,-1);
    tracep->declBus(c+103,"PCTargetE", false,-1, 31,0);
    tracep->declBus(c+33,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+34,"WriteDataM", false,-1, 31,0);
    tracep->declBit(c+35,"MemWriteM", false,-1);
    tracep->declBus(c+104,"ReadDataM", false,-1, 31,0);
    tracep->declBit(c+36,"RegWriteM", false,-1);
    tracep->declBus(c+37,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+38,"RdM", false,-1, 31,0);
    tracep->declBus(c+39,"PCPlus4M", false,-1, 31,0);
    tracep->declBus(c+40,"WordWidthM", false,-1, 1,0);
    tracep->declBit(c+41,"LoadSignExtM", false,-1);
    tracep->declBus(c+42,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+43,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+44,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+45,"PCPlus4W", false,-1, 31,0);
    tracep->declBus(c+46,"ResultW", false,-1, 31,0);
    tracep->declBus(c+47,"RdW", false,-1, 4,0);
    tracep->declBit(c+48,"RegWriteW", false,-1);
    tracep->declBit(c+49,"RegWriteD", false,-1);
    tracep->pushNamePrefix("Decode_block ");
    tracep->declBus(c+106,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"InstrD", false,-1, 31,0);
    tracep->declBus(c+46,"ResultW", false,-1, 31,0);
    tracep->declBus(c+47,"RdW", false,-1, 4,0);
    tracep->declBit(c+48,"RegWriteW", false,-1);
    tracep->declBit(c+49,"RegWriteD", false,-1);
    tracep->declBus(c+2,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+3,"MemWriteD", false,-1);
    tracep->declBit(c+4,"JumpD", false,-1);
    tracep->declBit(c+5,"BranchD", false,-1);
    tracep->declBus(c+6,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+7,"ALUSrcD", false,-1);
    tracep->declBus(c+101,"Rd1D", false,-1, 31,0);
    tracep->declBus(c+102,"Rd2D", false,-1, 31,0);
    tracep->declBus(c+8,"RdD", false,-1, 4,0);
    tracep->declBus(c+9,"ImmExtD", false,-1, 31,0);
    tracep->declBus(c+13,"WordWidthD", false,-1, 1,0);
    tracep->declBit(c+14,"LoadSignExtD", false,-1);
    tracep->declBit(c+12,"JalSrcD", false,-1);
    tracep->declBus(c+50,"ImmSrcD", false,-1, 1,0);
    tracep->declBit(c+109,"clk", false,-1);
    tracep->pushNamePrefix("Control_Unit ");
    tracep->declBus(c+51,"op", false,-1, 6,0);
    tracep->declBus(c+52,"funct3", false,-1, 2,0);
    tracep->declBus(c+53,"funct7", false,-1, 6,0);
    tracep->declBit(c+49,"RegWriteD", false,-1);
    tracep->declBus(c+6,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+7,"ALUSrcD", false,-1);
    tracep->declBus(c+50,"ImmSrcD", false,-1, 1,0);
    tracep->declBit(c+5,"BranchD", false,-1);
    tracep->declBus(c+2,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+3,"MemWriteD", false,-1);
    tracep->declBit(c+4,"JumpD", false,-1);
    tracep->declBus(c+13,"WordWidthD", false,-1, 1,0);
    tracep->declBit(c+14,"LoadSignExtD", false,-1);
    tracep->declBit(c+12,"JalSrcD", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Extend ");
    tracep->declBus(c+54,"immediate", false,-1, 31,7);
    tracep->declBus(c+50,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+9,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MyRegister ");
    tracep->declBus(c+106,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+109,"clk", false,-1);
    tracep->declBus(c+55,"ad1", false,-1, 4,0);
    tracep->declBus(c+56,"ad2", false,-1, 4,0);
    tracep->declBus(c+47,"ad3", false,-1, 4,0);
    tracep->declBus(c+101,"rd1", false,-1, 31,0);
    tracep->declBus(c+102,"rd2", false,-1, 31,0);
    tracep->declBus(c+46,"wd3", false,-1, 31,0);
    tracep->declBit(c+48,"we3", false,-1);
    tracep->declBus(c+66,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+67+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Execute_block ");
    tracep->declBus(c+106,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+15,"JumpE", false,-1);
    tracep->declBit(c+16,"BranchE", false,-1);
    tracep->declBus(c+17,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+18,"ALUSrcE", false,-1);
    tracep->declBus(c+19,"Rd1E", false,-1, 31,0);
    tracep->declBus(c+20,"Rd2E", false,-1, 31,0);
    tracep->declBus(c+21,"PCE", false,-1, 31,0);
    tracep->declBus(c+22,"ImmExtE", false,-1, 31,0);
    tracep->declBit(c+32,"PCSrcE", false,-1);
    tracep->declBus(c+23,"ALUResultE", false,-1, 31,0);
    tracep->declBus(c+20,"WriteDataE", false,-1, 31,0);
    tracep->declBus(c+103,"PCTargetE", false,-1, 31,0);
    tracep->declBit(c+29,"JalSrcE", false,-1);
    tracep->declBit(c+57,"ZeroE", false,-1);
    tracep->declBus(c+58,"SrcBE", false,-1, 31,0);
    tracep->declBus(c+59,"PCAdderResult", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+107,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+17,"ctrl", false,-1, 2,0);
    tracep->declBus(c+19,"op1", false,-1, 31,0);
    tracep->declBus(c+58,"op2", false,-1, 31,0);
    tracep->declBus(c+23,"out", false,-1, 31,0);
    tracep->declBit(c+57,"zero", false,-1);
    tracep->declBit(c+60,"less_than_unsigned", false,-1);
    tracep->declBit(c+61,"less_than_signed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_mux_B ");
    tracep->declBus(c+107,"VALUE_WIDTH", false,-1, 31,0);
    tracep->declBit(c+18,"sel", false,-1);
    tracep->declBus(c+20,"in0", false,-1, 31,0);
    tracep->declBus(c+22,"in1", false,-1, 31,0);
    tracep->declBus(c+58,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Jal_mux ");
    tracep->declBus(c+107,"VALUE_WIDTH", false,-1, 31,0);
    tracep->declBit(c+29,"sel", false,-1);
    tracep->declBus(c+103,"in0", false,-1, 31,0);
    tracep->declBus(c+59,"in1", false,-1, 31,0);
    tracep->declBus(c+103,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCTarget_adder ");
    tracep->declBus(c+21,"in0", false,-1, 31,0);
    tracep->declBus(c+22,"in1", false,-1, 31,0);
    tracep->declBus(c+59,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Fetch_block ");
    tracep->declBus(c+106,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+99,"clk", false,-1);
    tracep->declBit(c+32,"PCSrcE", false,-1);
    tracep->declBus(c+103,"PCTargetE", false,-1, 31,0);
    tracep->declBus(c+63,"InstrF", false,-1, 31,0);
    tracep->declBus(c+64,"PCF", false,-1, 31,0);
    tracep->declBus(c+65,"PCPlus4F", false,-1, 31,0);
    tracep->declBus(c+105,"PCF0", false,-1, 31,0);
    tracep->pushNamePrefix("Instr_rom ");
    tracep->declBus(c+110,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+111,"BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+64,"addr", false,-1, 31,0);
    tracep->declBus(c+63,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_Plus_4_adder ");
    tracep->declBus(c+64,"in0", false,-1, 31,0);
    tracep->declBus(c+112,"in1", false,-1, 31,0);
    tracep->declBus(c+65,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_mux ");
    tracep->declBus(c+107,"VALUE_WIDTH", false,-1, 31,0);
    tracep->declBit(c+32,"sel", false,-1);
    tracep->declBus(c+65,"in0", false,-1, 31,0);
    tracep->declBus(c+103,"in1", false,-1, 31,0);
    tracep->declBus(c+105,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Memory_block ");
    tracep->declBus(c+106,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+99,"clk", false,-1);
    tracep->declBus(c+33,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+34,"WriteDataM", false,-1, 31,0);
    tracep->declBit(c+35,"MemWriteM", false,-1);
    tracep->declBus(c+104,"ReadDataM", false,-1, 31,0);
    tracep->declBus(c+40,"WordWidthM", false,-1, 1,0);
    tracep->declBit(c+41,"LoadSignExtM", false,-1);
    tracep->pushNamePrefix("Data_Memory ");
    tracep->declBus(c+113,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+99,"clk", false,-1);
    tracep->declBit(c+35,"write_en", false,-1);
    tracep->declBus(c+40,"width", false,-1, 1,0);
    tracep->declBit(c+41,"read_sign_ext", false,-1);
    tracep->declBus(c+62,"read_addr", false,-1, 16,0);
    tracep->declBus(c+62,"write_addr", false,-1, 16,0);
    tracep->declBus(c+34,"din", false,-1, 31,0);
    tracep->declBus(c+104,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Writeback_block ");
    tracep->declBus(c+106,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+42,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+43,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+44,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+45,"PCPlus4W", false,-1, 31,0);
    tracep->declBus(c+46,"ResultW", false,-1, 31,0);
    tracep->pushNamePrefix("Writeback_mux ");
    tracep->declBus(c+107,"VALUE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+42,"sel", false,-1, 1,0);
    tracep->declBus(c+43,"in0", false,-1, 31,0);
    tracep->declBus(c+44,"in1", false,-1, 31,0);
    tracep->declBus(c+45,"in2", false,-1, 31,0);
    tracep->declBus(c+46,"out", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_top(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_top\n"); );
    // Body
    Vpipeline___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpipeline___024root__trace_register(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vpipeline___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vpipeline___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vpipeline___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpipeline___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_top_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpipeline___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->pipeline__DOT__InstrD),32);
    bufp->fullCData(oldp+2,(vlSelf->pipeline__DOT__ResultSrcD),2);
    bufp->fullBit(oldp+3,(vlSelf->pipeline__DOT__MemWriteD));
    bufp->fullBit(oldp+4,(vlSelf->pipeline__DOT__JumpD));
    bufp->fullBit(oldp+5,(vlSelf->pipeline__DOT__BranchD));
    bufp->fullCData(oldp+6,(vlSelf->pipeline__DOT__ALUControlD),3);
    bufp->fullBit(oldp+7,(vlSelf->pipeline__DOT__ALUSrcD));
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                      >> 7U))),5);
    bufp->fullIData(oldp+9,(vlSelf->pipeline__DOT__ImmExtD),32);
    bufp->fullIData(oldp+10,(vlSelf->pipeline__DOT__PCD),32);
    bufp->fullIData(oldp+11,(vlSelf->pipeline__DOT__PCPlus4D),32);
    bufp->fullBit(oldp+12,(vlSelf->pipeline__DOT__JalSrcD));
    bufp->fullCData(oldp+13,(vlSelf->pipeline__DOT__WordWidthD),2);
    bufp->fullBit(oldp+14,(vlSelf->pipeline__DOT__LoadSignExtD));
    bufp->fullBit(oldp+15,(vlSelf->pipeline__DOT__JumpE));
    bufp->fullBit(oldp+16,(vlSelf->pipeline__DOT__BranchE));
    bufp->fullCData(oldp+17,(vlSelf->pipeline__DOT__ALUControlE),3);
    bufp->fullBit(oldp+18,(vlSelf->pipeline__DOT__ALUSrcE));
    bufp->fullIData(oldp+19,(vlSelf->pipeline__DOT__Rd1E),32);
    bufp->fullIData(oldp+20,(vlSelf->pipeline__DOT__Rd2E),32);
    bufp->fullIData(oldp+21,(vlSelf->pipeline__DOT__PCE),32);
    bufp->fullIData(oldp+22,(vlSelf->pipeline__DOT__ImmExtE),32);
    bufp->fullIData(oldp+23,(vlSelf->pipeline__DOT__ALUResultE),32);
    bufp->fullBit(oldp+24,(vlSelf->pipeline__DOT__RegWriteE));
    bufp->fullCData(oldp+25,(vlSelf->pipeline__DOT__ResultSrcE),2);
    bufp->fullBit(oldp+26,(vlSelf->pipeline__DOT__MemWriteE));
    bufp->fullIData(oldp+27,(vlSelf->pipeline__DOT__RdE),32);
    bufp->fullIData(oldp+28,(vlSelf->pipeline__DOT__PCPlus4E),32);
    bufp->fullBit(oldp+29,(vlSelf->pipeline__DOT__JalSrcE));
    bufp->fullCData(oldp+30,(vlSelf->pipeline__DOT__WordWidthE),2);
    bufp->fullBit(oldp+31,(vlSelf->pipeline__DOT__LoadSignExtE));
    bufp->fullBit(oldp+32,(((IData)(vlSelf->pipeline__DOT__JumpE) 
                            | ((IData)(vlSelf->pipeline__DOT__BranchE) 
                               & (0U == vlSelf->pipeline__DOT__ALUResultE)))));
    bufp->fullIData(oldp+33,(vlSelf->pipeline__DOT__ALUResultM),32);
    bufp->fullIData(oldp+34,(vlSelf->pipeline__DOT__WriteDataM),32);
    bufp->fullBit(oldp+35,(vlSelf->pipeline__DOT__MemWriteM));
    bufp->fullBit(oldp+36,(vlSelf->pipeline__DOT__RegWriteM));
    bufp->fullCData(oldp+37,(vlSelf->pipeline__DOT__ResultSrcM),2);
    bufp->fullIData(oldp+38,(vlSelf->pipeline__DOT__RdM),32);
    bufp->fullIData(oldp+39,(vlSelf->pipeline__DOT__PCPlus4M),32);
    bufp->fullCData(oldp+40,(vlSelf->pipeline__DOT__WordWidthM),2);
    bufp->fullBit(oldp+41,(vlSelf->pipeline__DOT__LoadSignExtM));
    bufp->fullCData(oldp+42,(vlSelf->pipeline__DOT__ResultSrcW),2);
    bufp->fullIData(oldp+43,(vlSelf->pipeline__DOT__ALUResultW),32);
    bufp->fullIData(oldp+44,(vlSelf->pipeline__DOT__ReadDataW),32);
    bufp->fullIData(oldp+45,(vlSelf->pipeline__DOT__PCPlus4W),32);
    bufp->fullIData(oldp+46,(((0U == (IData)(vlSelf->pipeline__DOT__ResultSrcW))
                               ? vlSelf->pipeline__DOT__ALUResultW
                               : ((1U == (IData)(vlSelf->pipeline__DOT__ResultSrcW))
                                   ? vlSelf->pipeline__DOT__ReadDataW
                                   : vlSelf->pipeline__DOT__PCPlus4W))),32);
    bufp->fullCData(oldp+47,(vlSelf->pipeline__DOT__RdW),5);
    bufp->fullBit(oldp+48,(vlSelf->pipeline__DOT__RegWriteW));
    bufp->fullBit(oldp+49,(vlSelf->pipeline__DOT__RegWriteD));
    bufp->fullCData(oldp+50,(vlSelf->pipeline__DOT__Decode_block__DOT__ImmSrcD),2);
    bufp->fullCData(oldp+51,((0x7fU & vlSelf->pipeline__DOT__InstrD)),7);
    bufp->fullCData(oldp+52,((7U & (vlSelf->pipeline__DOT__InstrD 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+53,((vlSelf->pipeline__DOT__InstrD 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+54,((vlSelf->pipeline__DOT__InstrD 
                              >> 7U)),25);
    bufp->fullCData(oldp+55,((0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+56,((0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+57,((0U == vlSelf->pipeline__DOT__ALUResultE)));
    bufp->fullIData(oldp+58,(vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE),32);
    bufp->fullIData(oldp+59,((vlSelf->pipeline__DOT__PCE 
                              + vlSelf->pipeline__DOT__ImmExtE)),32);
    bufp->fullBit(oldp+60,((vlSelf->pipeline__DOT__Rd1E 
                            < vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE)));
    bufp->fullBit(oldp+61,(VL_LTS_III(32, vlSelf->pipeline__DOT__Rd1E, vlSelf->pipeline__DOT__Execute_block__DOT__SrcBE)));
    bufp->fullIData(oldp+62,((0x1ffffU & vlSelf->pipeline__DOT__ALUResultM)),17);
    bufp->fullIData(oldp+63,(((vlSelf->pipeline__DOT__Fetch_block__DOT__Instr_rom__DOT__memory
                               [(0xfffU & ((IData)(3U) 
                                           + vlSelf->pipeline__DOT__PCF))] 
                               << 0x18U) | ((vlSelf->pipeline__DOT__Fetch_block__DOT__Instr_rom__DOT__memory
                                             [(0xfffU 
                                               & ((IData)(2U) 
                                                  + vlSelf->pipeline__DOT__PCF))] 
                                             << 0x10U) 
                                            | ((vlSelf->pipeline__DOT__Fetch_block__DOT__Instr_rom__DOT__memory
                                                [(0xfffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->pipeline__DOT__PCF))] 
                                                << 8U) 
                                               | vlSelf->pipeline__DOT__Fetch_block__DOT__Instr_rom__DOT__memory
                                               [(0xfffU 
                                                 & vlSelf->pipeline__DOT__PCF)])))),32);
    bufp->fullIData(oldp+64,(vlSelf->pipeline__DOT__PCF),32);
    bufp->fullIData(oldp+65,(((IData)(4U) + vlSelf->pipeline__DOT__PCF)),32);
    bufp->fullIData(oldp+66,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers
                             [0xaU]),32);
    bufp->fullIData(oldp+67,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[0]),32);
    bufp->fullIData(oldp+68,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[1]),32);
    bufp->fullIData(oldp+69,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[2]),32);
    bufp->fullIData(oldp+70,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[3]),32);
    bufp->fullIData(oldp+71,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[4]),32);
    bufp->fullIData(oldp+72,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[5]),32);
    bufp->fullIData(oldp+73,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[6]),32);
    bufp->fullIData(oldp+74,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[7]),32);
    bufp->fullIData(oldp+75,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[8]),32);
    bufp->fullIData(oldp+76,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[9]),32);
    bufp->fullIData(oldp+77,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[10]),32);
    bufp->fullIData(oldp+78,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[11]),32);
    bufp->fullIData(oldp+79,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[12]),32);
    bufp->fullIData(oldp+80,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[13]),32);
    bufp->fullIData(oldp+81,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[14]),32);
    bufp->fullIData(oldp+82,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[15]),32);
    bufp->fullIData(oldp+83,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[16]),32);
    bufp->fullIData(oldp+84,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[17]),32);
    bufp->fullIData(oldp+85,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[18]),32);
    bufp->fullIData(oldp+86,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[19]),32);
    bufp->fullIData(oldp+87,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[20]),32);
    bufp->fullIData(oldp+88,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[21]),32);
    bufp->fullIData(oldp+89,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[22]),32);
    bufp->fullIData(oldp+90,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[23]),32);
    bufp->fullIData(oldp+91,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[24]),32);
    bufp->fullIData(oldp+92,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[25]),32);
    bufp->fullIData(oldp+93,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[26]),32);
    bufp->fullIData(oldp+94,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[27]),32);
    bufp->fullIData(oldp+95,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[28]),32);
    bufp->fullIData(oldp+96,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[29]),32);
    bufp->fullIData(oldp+97,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[30]),32);
    bufp->fullIData(oldp+98,(vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers[31]),32);
    bufp->fullBit(oldp+99,(vlSelf->clk));
    bufp->fullBit(oldp+100,(vlSelf->rst));
    bufp->fullIData(oldp+101,(((0U == (0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                                >> 0xfU)))
                                ? 0U : vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers
                               [(0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                          >> 0xfU))])),32);
    bufp->fullIData(oldp+102,(((0U == (0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                                >> 0x14U)))
                                ? 0U : vlSelf->pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers
                               [(0x1fU & (vlSelf->pipeline__DOT__InstrD 
                                          >> 0x14U))])),32);
    bufp->fullIData(oldp+103,(vlSelf->pipeline__DOT__PCTargetE),32);
    bufp->fullIData(oldp+104,(vlSelf->pipeline__DOT__ReadDataM),32);
    bufp->fullIData(oldp+105,((((IData)(vlSelf->pipeline__DOT__JumpE) 
                                | ((IData)(vlSelf->pipeline__DOT__BranchE) 
                                   & (0U == vlSelf->pipeline__DOT__ALUResultE)))
                                ? vlSelf->pipeline__DOT__PCTargetE
                                : ((IData)(4U) + vlSelf->pipeline__DOT__PCF))),32);
    bufp->fullIData(oldp+106,(5U),32);
    bufp->fullIData(oldp+107,(0x20U),32);
    bufp->fullBit(oldp+108,(vlSelf->pipeline__DOT__REgWriteD));
    bufp->fullBit(oldp+109,(vlSelf->pipeline__DOT__Decode_block__DOT__clk));
    bufp->fullIData(oldp+110,(0xcU),32);
    bufp->fullIData(oldp+111,(0U),32);
    bufp->fullIData(oldp+112,(4U),32);
    bufp->fullIData(oldp+113,(0x11U),32);
    bufp->fullIData(oldp+114,(8U),32);
}
