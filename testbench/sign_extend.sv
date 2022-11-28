module sign_extend #(
    parameter WIDTH = 12
)(
    input logic[WIDTH-1:0] immediate,
    input logic ImmSrc,
    output logic [31:0] ImmOp
);

if(ImmSrc==1) 
    assign ImmOp = {{20{1'b1}},immediate};
else
    assign ImmOp = {{20{1'b0}},immediate};



endmodule
