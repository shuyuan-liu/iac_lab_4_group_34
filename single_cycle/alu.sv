module alu #(
    parameter DATA_WIDTH = 32
)(
    input  logic[2:0]            mode,
    input  logic[DATA_WIDTH-1:0] op1, op2,
    output logic[DATA_WIDTH-1:0] out
);

always_comb begin
    case(mode)
        0: out = op1 + op2;
        1: out = op1 - op2;
        2: out = op1 & op2;
        3: out = op1 | op2;
        4: out = op1 ^ op2;
        5: out = op1 << op2;
        6: out = op1 >> op2;
        7: out = op2; // pass-through
    endcase
end

endmodule
