module decode #(
    paramter ADDR_WIDTH = 5,
             DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0] InstrD,
    input logic [DATA_WIDTH-1:0] ResultW,
    input logic [ADDR_WIDTH-1:0] RdW,
    input logic RegWriteW,
    output logic RegWriteD,
    output logic [1:0] ResultSrcD,
    output logic MemWriteD,
    output logic JumpD,
    output logic BranchD,
    output logic [2:0] ALUControlD,
    output logic ALUSrcD,
    output logic [DATA_WIDTH-1:0] Rd1D,
    output logic [DATA_WIDTH-1:0] Rd2D,
    output logic [ADDR_WIDTH-1:0] RdD,
    output logic [DATA_WIDTH-1:0] ImmExtD
);

 logic [1:0] ImmSrcD;

control_pip Control_Unit(
    .op(InstrD[6:0]),
    .funct3(InstrD[14:12]),
    .funct7_5(InstrD[30]),
    .RegWriteD(RegWriteD),
    .ResultSrcD(ResultSrcD),
    .MemWriteD(MemWriteD),
    .JumpD(JumpD),
    .BranchD(BranchD),
    .ALUControlD(ALUControlD),
    .ALUSrcD(ALUSrcD),
    .ImmSrcD(ImmSrcD)
);

register_file MyRegister(
    .clk(clk),
    .ad1(InstrD[19:15]),
    .ad2(InstrD[24:20]),
    .ad3(RdW),
    .rd1(Rd1D),
    .rd2(Rd2D),
    .wd3(ResultW),
    .we3(RegWriteW)
);

sign_extend Extend(
    .immediate(InstrD[31:7]),
    .ImmSrc(ImmSrcD),
    .ImmExt(ImmExtD)
);

assign RdD = InstrD[11:7];

endmodule
