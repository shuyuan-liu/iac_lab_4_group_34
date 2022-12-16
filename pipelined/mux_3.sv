module mux_3 #(
    parameter VALUE_WIDTH = 32
)(
    input  logic[1:0]             sel,
    input  logic[VALUE_WIDTH-1:0] in0,
    input  logic[VALUE_WIDTH-1:0] in1,
    input  logic[VALUE_WIDTH-1:0] in2,
    output logic[VALUE_WIDTH-1:0] out
);

always_comb begin
    case (sel)
        0: out = in0;
        1: out = in1;
        2: out = in2;
        default: out = 0;
    endcase
end

endmodule
