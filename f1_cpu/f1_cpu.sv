module f1_cpu (
    input logic clk,
    input logic rst,
    output logic[31:0] a0
);

logic [31:0] PC;
logic [31:0] instr;
logic PCSrc;
logic ResultSrc;
logic [2:0] ALUctrl;
logic ALUSrcB;
logic [1:0] ImmSrc;
logic RegWrite;
logic Zero;
logic MemWrite;
logic ALUSrcA;
logic JALctrl;
logic [31:0] rd1;
logic [31:0] rd2;
logic [31:0] Result;
logic [31:0] ImmExt;
logic [31:0] PCTarget;
logic [31:0] JALResult;
logic [31:0] SrcA;
logic [31:0] SrcB;
logic [31:0] ReadData;
logic [31:0] ALUResult;

control Control_Unit(
    .op(instr[6:0]),
    .func3(instr[14:12]),
    .func7_5(instr[30]),
    .Zero(Zero),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUsrcB(ALUSrcB),
    .ImmSrc(ImmSrc),
    .PCsrc(PCSrc),
    .ResultSrc(ResultSrc),
    .MemWrite(MemWrite),
    .ALUsrcA(ALUSrcA),
    .JALctrl(JALctrl)
);

register_file MyRegister(
    .clk(clk),
    .ad1(instr[19:15]),
    .ad2(instr[24:20]),
    .ad3(instr[11:7]),
    .rd1(rd1),
    .rd2(rd2),
    .wd3(JALResult),
    .we3(RegWrite),
    .a0(a0)
);

sign_extend Extend(
    .immediate(instr[31:7]),
    .ImmSrc(ImmSrc),
    .ImmExt(ImmExt)
);

instr_rom Instr_Mem(
    .addr(PC),
    .dout(instr)
);

program_counter Program_Counter(
    .clk(clk),
    .rst(rst),
    .ImmOp(ImmExt),
    .PCsrc(PCSrc),
    .PC(PC)
);

mux_2 JAL_mux(
    .sel(JALctrl),
    .in0(Result),
    .in1(PC+4),
    .out(JALResult)
);

mux_2 ALU_mux_A(
    .sel(ALUSrcA),
    .in0(rd1),
    .in1(PC),
    .out(SrcA)
);

mux_2 ALU_mux_B(
    .sel(ALUSrcB),
    .in0(rd2),
    .in1(ImmExt),
    .out(SrcB)
);

alu MyALU(
    .ctrl(ALUctrl),
    .op1(SrcA),
    .op2(SrcB),
    .out(ALUResult),
    .zero(Zero)
);

ram Data_Mem(
    .read_addr(ALUResult),
    .write_addr(ALUResult),
    .din(rd2),
    .dout(ReadData),
    .write_en(MemWrite),
    .clk(clk)
);

mux_2 Result_Mux(
    .sel(ResultSrc),
    .in0(ALUResult),
    .in1(ReadData),
    .out(Result)
);

endmodule
