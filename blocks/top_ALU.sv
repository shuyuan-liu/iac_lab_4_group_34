module top_ALU #(
    parameter DATA_WIDTH = 32,
              ADDR_WIDTH = 5
)(
    input logic clk,
    input logic[ADDR_WIDTH-1:0] ad1,
    input logic[ADDR_WIDTH-1:0] ad2,
    input logic[ADDR_WIDTH-1:0] ad3,
    input logic[DATA_WIDTH-1:0] wd3,
    input logic we3,
    input logic ALUsrc,
    input logic ALUctrl,
    input logic[DATA_WIDTH-1:0] ImmOp,
    output logic[DATA_WIDTH-1:0] ALUout,
    output logic[DATA_WIDTH-1:0] a0,
    output logic EQ
);

logic [DATA_WIDTH-1:0] rd1;
logic [DATA_WIDTH-1:0] rd2;
logic [DATA_WIdth-1:0] ALUop2;

register_file myRegister (
    .clk(clk),
    .ad1(ad1),
    .ad2(ad2),
    .ad3(ad3),
    .wd3(wd3),
    .rd1(rd1),
    .rd2(rd2),
    .we3(we3),
    .a0(a0)
);

mux_2 myMux (
    .sel(ALUsrc),
    .in0(rd2),
    .in1(ImmOp),
    .out(ALUop2)
);

alu myALU (
    .ctrl(ALUctrl),
    .op1(rd1),
    .op2(ALUop2),
    .out(ALUout),
    .zero(EQ)
);

endmodule
