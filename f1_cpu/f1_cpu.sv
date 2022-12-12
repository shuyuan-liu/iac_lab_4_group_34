module f1_cpu (
    input logic clk,
    input logic rst,
    output logic[31:0] a0
);

logic [31:0] PC;
logic [31:0] Instr;
logic [1:0] PCSrc;
logic ResultSrc;
logic [2:0] ALUMode;
logic ALUSrcA;
logic ALUSrcB;
logic [1:0] ImmFormat;
logic RegWrite;
logic ResultIsZero;
logic MemWrite;
logic DoJump;
logic [31:0] rd1;
logic [31:0] rd2;
logic [31:0] Result;
logic [31:0] ImmExt;
logic [31:0] PCTarget;
logic [31:0] ReturnAddr;
logic [31:0] LoadData;
logic [31:0] ALUResult;

control ControlUnit(
    .opcode(Instr[6:0]),
    .funct3(Instr[14:12]),
    .funct7(Instr[31:25]),
    .ResultIsZero(Result == 0),
    .ResultSrc(ResultSrc),
    .RegWrite(RegWrite),
    .MemWrite(MemWrite),
    .ImmFormat(ImmFormat),
    .ALUMode(ALUMode),
    .ALUsrcA(ALUSrcA),
    .ALUsrcB(ALUSrcB),
    .PCsrc(PCSrc),
    .DoJump(DoJump)
);

register_file RegisterFile(
    .clk(clk),
    .ad1(Instr[19:15]),
    .ad2(Instr[24:20]),
    .ad3(Instr[11:7]),
    .rd1(rd1),
    .rd2(rd2),
    .wd3(ReturnAddr),
    .we3(RegWrite),
    .a0(a0)
);

sign_extend Extend(
    .Imm(Instr[31:7]),
    .ImmFormat(ImmFormat),
    .ImmExt(ImmExt)
);

instr_rom InstrMem(
    .addr(PC),
    .dout(Instr)
);

program_counter ProgramCounter(
    .clk(clk),
    .rst(rst),
    .addr_offset(ImmExt),
    .addr_absolute(Result),
    .pc_src(PCSrc),
    .pc(PC)
);

mux_2 RegWriteSrcMux(
    .sel(DoJump),
    .in0(Result),
    .in1(PC + 4),
    .out(ReturnAddr)
);

alu ALU(
    .mode(ALUMode),
    .op1(ALUSrcA ? PC : rd1),
    .op2(ALUSrcB ? ImmExt : rd2),
    .out(ALUResult)
);

ram DataMem(
    .clk(clk),
    .read_addr(ALUResult),
    .write_addr(ALUResult),
    .din(rd2),
    .dout(LoadData),
    .write_en(MemWrite)
);

assign Result = ResultSrc ? LoadData : ALUResult;

endmodule
