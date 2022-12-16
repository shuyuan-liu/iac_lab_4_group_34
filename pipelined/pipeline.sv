module pipeline #(
    parameter ADDR_WIDTH = 5,
              DATA_WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [DATA_WIDTH-1:0] a0
);


logic [DATA_WIDTH-1:0] InstrF;//instr in fetch
logic [DATA_WIDTH-1:0] PCF;//in fetch
logic [DATA_WIDTH-1:0] PCPlus4F;//fetch

logic [DATA_WIDTH-1:0] InstrD;//decode
logic RegWriteD;//in decode
logic [1:0] ResultSrcD;//decode
logic MemWriteD;//decode
logic JumpD;//decode
logic BranchD;//decode
logic [2:0] ALUControlD;//decode
logic ALUSrcD;//decode
logic [DATA_WIDTH-1:0] Rd1D;//decode
logic [DATA_WIDTH-1:0] Rd2D;//decode
logic [ADDR_WIDTH-1:0] RdD;//decode
logic [DATA_WIDTH-1:0] ImmExtD;//decode
logic [DATA_WIDTH-1:0] PCD;//decode
logic [DATA_WIDTH-1:0] PCPlus4D;//decode
logic JalSrcD;
logic [1:0] WordWidthD;
logic LoadSignExtD;

logic JumpE;//execute
logic BranchE;//execute
logic [2:0] ALUControlE;//execute
logic ALUSrcE;//execute
logic [DATA_WIDTH-1:0] Rd1E;//execute
logic [DATA_WIDTH-1:0] Rd2E;//execute
logic [DATA_WIDTH-1:0] PCE;//execute
logic [DATA_WIDTH-1:0] ImmExtE;//execute
logic [DATA_WIDTH-1:0] ALUResultE;//execute
logic [DATA_WIDTH-1:0] WriteDataE;//execute
logic RegWriteE;//execute
logic [1:0] ResultSrcE;//execute
logic MemWriteE;//execute
logic [4:0] RdE;//execute
logic [DATA_WIDTH-1:0] PCPlus4E;//execute
logic JalSrcE;
logic [1:0] WordWidthE;
logic LoadSignExtE;
logic PCSrcE;//from execute to fetch
logic [DATA_WIDTH-1:0] PCTargetE;//from execute to fetch

logic [DATA_WIDTH-1:0] ALUResultM;//memory
logic [DATA_WIDTH-1:0] WriteDataM;//memory
logic MemWriteM;//memory
logic [DATA_WIDTH-1:0] ReadDataM;//memory
logic RegWriteM;//memory
logic [1:0] ResultSrcM;//memory
logic [4:0] RdM;//memory
logic [DATA_WIDTH-1:0] PCPlus4M;//memory
logic [1:0] WordWidthM;
logic LoadSignExtM;

logic [1:0] ResultSrcW;//writeback
logic [DATA_WIDTH-1:0] ALUResultW;//wrieback
logic [DATA_WIDTH-1:0] ReadDataW;//writeback
logic [DATA_WIDTH-1:0] PCPlus4W;//writeback
logic [DATA_WIDTH-1:0] ResultW;//from writeback to decode
logic [4:0] RdW;//from writeback to decode
logic RegWriteW;//from writeback to decode



always_ff @(negedge clk) begin//register between fetch and decode
    InstrD <= InstrF;
    PCD <= PCF;
    PCPlus4D <= PCPlus4F;
end

always_ff @(negedge clk) begin//decode->execute
    RegWriteE <= RegWriteD;
    ResultSrcE <= ResultSrcD;
    MemWriteE <= MemWriteD;
    JumpE <= JumpD;
    BranchE <= BranchD;
    JalSrcE <= JalSrcD;
    ALUControlE <= ALUControlD;
    ALUSrcE <= ALUSrcD;
    Rd1E <= Rd1D;
    Rd2E <= Rd2D;
    PCE <= PCD;
    RdE <= RdD;
    ImmExtE <= ImmExtD;
    PCPlus4E <= PCPlus4D;
    WordWidthE <= WordWidthD;
    LoadSignExtE <= LoadSignExtD;
end

always_ff @(negedge clk) begin//execute->memory
    RegWriteM <= RegWriteE;
    ResultSrcM <= ResultSrcE;
    MemWriteM <= MemWriteE;
    ALUResultM <= ALUResultE;
    WriteDataM <= WriteDataE;
    RdM <= RdE;
    PCPlus4M <= PCPlus4E;
    WordWidthM <= WordWidthE;
    LoadSignExtM <= LoadSignExtE;
end

always_ff @(negedge clk) begin//memory->writeback
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
    .clk(clk),
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
    .ImmExtD(ImmExtD),
    .WordWidthD(WordWidthD),
    .LoadSignExtD(LoadSignExtD),
    .JalSrcD(JalSrcD),
    .a0(a0)
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
    .PCTargetE(PCTargetE),
    .JalSrcE(JalSrcE)
);

memory Memory_block(
    .clk(clk),
    .ALUResultM(ALUResultM),
    .WriteDataM(WriteDataM),
    .MemWriteM(MemWriteM),
    .ReadDataM(ReadDataM),
    .WordWidthM(WordWidthM),
    .LoadSignExtM(LoadSignExtM)
);

writeback Writeback_block(
    .ResultSrcW(ResultSrcW),
    .ALUResultW(ALUResultW),
    .ReadDataW(ReadDataW),
    .PCPlus4W(PCPlus4W),
    .ResultW(ResultW)
);

endmodule
