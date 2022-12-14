// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpipeline.h for the primary calling header

#ifndef VERILATED_VPIPELINE___024ROOT_H_
#define VERILATED_VPIPELINE___024ROOT_H_  // guard

#include "verilated.h"

class Vpipeline__Syms;

class Vpipeline___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ pipeline__DOT__Decode_block__DOT__clk;
        VL_IN8(rst,0,0);
        CData/*0:0*/ pipeline__DOT__REgWriteD;
        CData/*1:0*/ pipeline__DOT__ResultSrcD;
        CData/*0:0*/ pipeline__DOT__MemWriteD;
        CData/*0:0*/ pipeline__DOT__JumpD;
        CData/*0:0*/ pipeline__DOT__BranchD;
        CData/*2:0*/ pipeline__DOT__ALUControlD;
        CData/*0:0*/ pipeline__DOT__ALUSrcD;
        CData/*0:0*/ pipeline__DOT__JalSrcD;
        CData/*1:0*/ pipeline__DOT__WordWidthD;
        CData/*0:0*/ pipeline__DOT__LoadSignExtD;
        CData/*0:0*/ pipeline__DOT__JumpE;
        CData/*0:0*/ pipeline__DOT__BranchE;
        CData/*2:0*/ pipeline__DOT__ALUControlE;
        CData/*0:0*/ pipeline__DOT__ALUSrcE;
        CData/*0:0*/ pipeline__DOT__RegWriteE;
        CData/*1:0*/ pipeline__DOT__ResultSrcE;
        CData/*0:0*/ pipeline__DOT__MemWriteE;
        CData/*0:0*/ pipeline__DOT__JalSrcE;
        CData/*1:0*/ pipeline__DOT__WordWidthE;
        CData/*0:0*/ pipeline__DOT__LoadSignExtE;
        CData/*0:0*/ pipeline__DOT__MemWriteM;
        CData/*0:0*/ pipeline__DOT__RegWriteM;
        CData/*1:0*/ pipeline__DOT__ResultSrcM;
        CData/*1:0*/ pipeline__DOT__WordWidthM;
        CData/*0:0*/ pipeline__DOT__LoadSignExtM;
        CData/*1:0*/ pipeline__DOT__ResultSrcW;
        CData/*4:0*/ pipeline__DOT__RdW;
        CData/*0:0*/ pipeline__DOT__RegWriteW;
        CData/*0:0*/ pipeline__DOT__RegWriteD;
        CData/*1:0*/ pipeline__DOT__Decode_block__DOT__ImmSrcD;
        CData/*4:0*/ __Vdlyvdim0__pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers__v0;
        CData/*0:0*/ __Vdlyvset__pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers__v0;
        CData/*0:0*/ __Vclklast__TOP__pipeline__DOT__Decode_block__DOT__clk;
        CData/*0:0*/ __Vclklast__TOP__clk;
        IData/*31:0*/ pipeline__DOT__PCF;
        IData/*31:0*/ pipeline__DOT__InstrD;
        IData/*31:0*/ pipeline__DOT__ImmExtD;
        IData/*31:0*/ pipeline__DOT__PCD;
        IData/*31:0*/ pipeline__DOT__PCPlus4D;
        IData/*31:0*/ pipeline__DOT__Rd1E;
        IData/*31:0*/ pipeline__DOT__Rd2E;
        IData/*31:0*/ pipeline__DOT__PCE;
        IData/*31:0*/ pipeline__DOT__ImmExtE;
        IData/*31:0*/ pipeline__DOT__ALUResultE;
        IData/*31:0*/ pipeline__DOT__RdE;
        IData/*31:0*/ pipeline__DOT__PCPlus4E;
        IData/*31:0*/ pipeline__DOT__PCTargetE;
        IData/*31:0*/ pipeline__DOT__ALUResultM;
        IData/*31:0*/ pipeline__DOT__WriteDataM;
        IData/*31:0*/ pipeline__DOT__ReadDataM;
        IData/*31:0*/ pipeline__DOT__RdM;
        IData/*31:0*/ pipeline__DOT__PCPlus4M;
        IData/*31:0*/ pipeline__DOT__ALUResultW;
        IData/*31:0*/ pipeline__DOT__ReadDataW;
        IData/*31:0*/ pipeline__DOT__PCPlus4W;
        IData/*31:0*/ pipeline__DOT__Fetch_block__DOT__PCF0;
        IData/*31:0*/ pipeline__DOT__Execute_block__DOT__SrcBE;
        IData/*31:0*/ __Vdlyvval__pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers__v0;
        IData/*31:0*/ __Vchglast__TOP__pipeline__DOT__PCTargetE;
        VlUnpacked<CData/*7:0*/, 4096> pipeline__DOT__Fetch_block__DOT__Instr_rom__DOT__memory;
        VlUnpacked<IData/*31:0*/, 32> pipeline__DOT__Decode_block__DOT__MyRegister__DOT__registers;
    };
    struct {
        VlUnpacked<CData/*7:0*/, 131072> pipeline__DOT__Memory_block__DOT__Data_Memory__DOT__memory;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vpipeline__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpipeline___024root(Vpipeline__Syms* symsp, const char* name);
    ~Vpipeline___024root();
    VL_UNCOPYABLE(Vpipeline___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
