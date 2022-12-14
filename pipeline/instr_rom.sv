module instr_rom #(
    parameter ADDR_WIDTH = 12,
              BASE_ADDR  = 32'hBFC00000
)(
    input  logic[31:0] addr,
    output logic[31:0] dout
);

logic[7:0] memory[BASE_ADDR+(2**ADDR_WIDTH)-1:BASE_ADDR];

initial begin
    $readmemh("f1.s.hex", memory, BASE_ADDR);
end

assign dout = {memory[addr+3], memory[addr+2], memory[addr+1], memory[addr]};

endmodule
