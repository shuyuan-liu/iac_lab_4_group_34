module adder (
    input logic [31:0] in0,
    input logic [31:0] in1,
    output logic [31:0] out

);

assign out = in0+in1;

endmodule
