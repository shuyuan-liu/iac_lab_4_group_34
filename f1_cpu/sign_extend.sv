module sign_extend (
    input logic[31:7] Imm,
    input logic [1:0] ImmFormat,
    output logic [31:0] ImmExt
);

always_comb begin
    case (ImmFormat)
        0: ImmExt = {{21{Imm[31]}}, Imm[30:20]};
        1: ImmExt = {{20{Imm[31]}}, Imm[7], Imm[30:25], Imm[11:8], 1'b0};
        2: ImmExt = {Imm[31], Imm[30:12], 12'b0};
        3: ImmExt = {{12{Imm[31]}}, Imm[19:12], Imm[20], Imm[30:21], 1'b0};
    endcase
end



endmodule
