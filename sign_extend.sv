module sign_extend #(
    parameter WIDTH = 12
)(
    input logic[WIDTH-1:0] immediate,
    input logic ImmSrc,
    output logic [31:0] ImmOp
);

if(ImmSrc==1) begin
    assign ImmOp = {{20{b[1]}},immediate};
else
    assign ImmOp = {{20{b[0]}},immediate};
end

instrmem immediate (
    .immediate(immediate)
);

program_counter Op(
    .addr(immediate),
    .dout(ImmOp)
);
    
alu sign_extend(
    .addr(immediate),
    .dout(ImmOp)
);

endmodule
