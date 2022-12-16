module sign_extend (
    input logic[31:7] immediate,
    input logic [1:0] ImmSrc,
    output logic [31:0] ImmExt
);

always_comb begin
    case (ImmSrc)
        0: ImmExt = {{21{immediate[31]}}, immediate[30:20]};
        1: ImmExt = {{20{immediate[31]}}, immediate[7], immediate[30:25], immediate[11:8], 1'b0};
        2: ImmExt = {immediate[31], immediate[30:12], 12'b0};
        3: ImmExt = {{12{immediate[31]}}, immediate[19:12], immediate[20], immediate[30:21], 1'b0};
    endcase
end



endmodule
