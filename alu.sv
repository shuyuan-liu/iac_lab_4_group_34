module alu #(
    parameter DATA_WIDTH = 32
)(
    input  logic                 ctrl, // 0 for add, 1 for subtract
    input  logic[DATA_WIDTH-1:0] op1,
    input  logic[DATA_WIDTH-1:0] op2,
    output logic[DATA_WIDTH-1:0] out,
    output logic                 zero // true when the out == 0
);

assign out = ctrl ? (op1 - op2) : (op1 + op2);
assign zero = (out == 0);

endmodule
