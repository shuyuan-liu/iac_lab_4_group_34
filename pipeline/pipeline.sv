module pipeline #(
    parameter ADDR_WIDTH = 5,
              DATA_WIDTH = 32
)(
    input logic clk
);

logic PCSrcE;
logic [DATA_WIDTH-1:0] PCTargetE;
logic [DATA_WIDTH-1:0] InstrF;
logic [DATA_WIDTH-1:0] PCF;
logic [DATA_WIDTH-1:0] PCPlus4F;
logic [DATA_WIDTH-1:0] InstrD;
logic [DATA_WIDTH-1:0] ResultW;
logic [ADDR_WIDTH-1:0] RdW;
logic RegWriteW;
logic REgWriteD;
logic [1:0] ResultSrcD;
logic MemWriteD;
logic JumpD;
logic BranchD;
logic [2:0] ALUControlD;
logic ALUSrcD;
logic [DATA_WIDTH-1:0] Rd1D;
logic [DATA_WIDTH-1:0] Rd2D;
logic [ADDR_WIDTH-1:0] RdD;
logic [DATA_WIDTH-1:0] ImmExtD;
logic [DATA_WIDTH-1:0] PCD;
logic [DATA_WIDTH-1:0] PCPlus4D;
logic JumpE;
logic BranchE;
logic [2:0] ALUControlE;
logic ALUSrcE;
logic [DATA_WIDTH-1:0] Rd1E;
logic [DATA_WIDTH-1:0] Rd2E;
logic [DATA_WIDTH-1:0] PCE;
logic [DATA_WIDTH-1:0] ImmExtE;
logic [DATA_WIDTH-1:0] ALUResultE;
logic [DATA_WIDTH-1:0] WriteDataE;
logic RegWriteE;
logic [1:0] ResultSrcE;
logic MemWriteE;
logic [DATA_WIDTH-1:0] RdE;
logic [DATA_WIDTH-1:0] PCPlus4E;
logic [DATA_WIDTH-1:0] ALUResultM;
logic [DATA_WIDTH-1:0] WriteDataM;
logic MemWriteM;
logic [DATA_WIDTH-1:0] ReadDataM;
logic RegWriteM;
logic [1:0] ResultSrcM;
logic [DATA_WIDTH-1:0] RdM;
logic [DATA_WIDTH-1:0] PCPlus4M;
logic [1:0] ResultSrcW;
logic [DATA_WIDTH-1:0] ALUResultW;
logic [DATA_WIDTH-1:0] ReadDataW;
logic [DATA_WIDTH-1:0] PCPlus4W;



always_ff @(negedge clk) begin
    InstrD <= InstrF;
    PCD <= PCF;
    PCPlus4D <= PCPlus4F;
    RegWriteE <= RegWriteD;
    ResultSrcE <= ResultSrcD;
    MemWriteE <= MemWriteD;
    JumpE <= JumpD;
    BranchE <= BranchD;
    ALUControlE <= ALUControlD;
    ALUSrcE <= ALUSrcD;
    Rd1E <= Rd1D;
    Rd2E <= Rd2D;
    PCE <= PCD;
    RdE <= RdD;
    ImmExtE <= ImmExtD;
    PCPlus4E <= PCPlus4D;
    RegWriteM <= RegWriteE;
    ResultSrcM <= ResultSrcE;
    MemWriteM <= MemWriteE;
    ALUResultM <= ALUResultE;
    WriteDataM <= WriteDataE;
    RdM <= RdE;
    PCPlus4m <= PCPlus4E;
    RegWriteW <= RegWriteM;
    ResultSrcW <= ResultSrcM;
    ALUResultW <= ALUResultM;
    ReadDataW <= ReadDataM;
    PCPlus4W <= PCPlus4M;
    RdW <= RdM;
end

fetch Fetch_block(
    .clk(clk),
    .PCSrcE(PCSrcE),
    .PCTargetE(PCTargetE),
    .InstrF(InstrF),
    .PCF(PCF),
    .PCPlus4F(PCPlus4F)
);

decode Decode_block(
    .InstrD(InstrD),
    .ResultW(ResultW),
    .RdW(RdW),
    .RegWriteW(RegWriteW),
    .RegWriteD(RegWriteD),
    .ResultSrcD(ResultSrcD),
    .MemWriteD(MemWriteD),
    .JumpD(JumpD),
    .BranchD(BranchD),
    .ALUControlD(ALUControlD),
    .ALUSrcD(ALUSrcD),
    .Rd1D(Rd1D),
    .Rd2D(Rd2D),
    .RdD(RdD),
    .ImmExtD(ImmExtD)
);

execute Execute_block(
    .JumpE(JumpE),
    .BranchE(BranchE),
    .ALUControlE(ALUControlE),
    .ALUSrcE(ALUSrcE),
    .Rd1E(Rd1E),
    .Rd2E(Rd2E),
    .PCE(PCE),
    .ImmExtE(ImmExtE),
    .PCSrcE(PCSrcE),
    .ALUResultE(ALUResultE),
    .WriteDataE(WriteDataE),
    .PCTargetE(PCTargetE)
);

memory Memory_block(
    .clk(clk),
    .ALUResultM(ALUResultM),
    .WriteDataM(WriteDataM),
    .MemWriteM(MemWriteM),
    .ReadDataM(ReadDataM)
);

writeback Writeback_block(
    .ResultSrcW(ResultSrcW),
    .ALUResultW(ALUResultW),
    .ReadDataW(ReadDataW),
    .PCPlus4W(PCPlus4W),
    .ResultW(ResultW)
);

endmodule
