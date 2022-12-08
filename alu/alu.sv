module alu #(
    parameter DATA_WIDTH = 32
)(
    input  logic[2:0]            ctrl,
    input  logic[DATA_WIDTH-1:0] op1, op2,
    output logic[DATA_WIDTH-1:0] out,
    output logic                 zero, less_than_unsigned, less_than_signed
);

always_comb begin
    case(ctrl)
        0: out = op1 + op2;
        1: out = op1 - op2;
        2: out = op1 & op2;
        3: out = op1 | op2;
        4: out = op1 ^ op2;
        5: out = op1 << op2;
        6: out = op1 >> op2;
        default: out = 0;
    endcase
end

always_comb begin
    zero = (out == 0);
    unsigned_less_than = (unsigned'(op1) < unsigned'(op2));
    signed_less_than = (signed'(op1) < signed'(op2));
end

endmodule
