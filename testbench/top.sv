module top #(
    parameter DATA_WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic[DATA_WIDTH-1:0] a0
);
logic [DATA_WIDTH-1:0] ImmOp;
logic [DATA_WIDTH-1:0] PC;
logic PCsrc;
logic [DATA_WIDTH-1:0] instr;
logic EQ;
logic RegWrite;
logic ALUctrl;
logic ALUsrc;
logic ImmSrc;
logic [DATA_WIDTH-1:0] ALUop1;
logic [DATA_WIDTH-1:0] regOp2;
logic [DATA_WIDTH-1:0] ALUop2;
logic [DATA_WIDTH-1:0] ALUout;

program_counter myCounter(
    .clk(clk),
    .rst(rst),
    .ImmOp(ImmOp),
    .PCsrc(PCsrc),
    .PC(PC)
);

rom Instr_Mem(
    .addr(PC),
    .dout(instr)
);

control Control_Unit(
    .EQ(EQ),
    .instr(instr),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .PCsrc(PCsrc)
);

register_file Register(
    .clk(clk),
    .ad1(instr[19:15]),
    .ad2(instr[24:20]),
    .ad3(instr[11:7]),
    .rd1(ALUop1),
    .rd2(regOp2),
    .wd3(ALUout),
    .we3(RegWrite),
    .a0(a0)
);

mux_2 myMux(
    .sel(ALUsrc),
    .in0(regOp2),
    .in1(ImmOp),
    .out(ALUop2)
);

alu myALU(
    .ctrl(ALUctrl),
    .op1(ALUop1),
    .op2(ALUop2),
    .out(ALUout),
    .zero(EQ)
);

sign_extend mySign_extend(
    .immediate(instr[31:20]),
    .ImmSrc(ImmSrc),
    .ImmOp(ImmOp)
);

endmodule


