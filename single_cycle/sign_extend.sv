module sign_extend (
    input logic[31:7] Imm,
    input logic [2:0] ImmFormat,
    output logic [31:0] ImmExt
);

always_comb begin
    case (ImmFormat)
        0: ImmExt = {{21{Imm[31]}}, Imm[30:20]}; // I
        1: ImmExt = {{20{Imm[31]}}, Imm[7], Imm[30:25], Imm[11:8], 1'b0}; // B
        2: ImmExt = {Imm[31:12], 12'b0}; // U
        3: ImmExt = {{12{Imm[31]}}, Imm[19:12], Imm[20], Imm[30:21], 1'b0}; // J
        4: ImmExt = {{21{Imm[31]}}, Imm[30:25], Imm[11:7]}; // S
        default: ImmExt = 32'h5A5A5A5A;
    endcase
end

endmodule
