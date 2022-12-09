module instr_rom #(
    parameter ADDR_WIDTH = 12
)(
    input  logic[ADDR_WIDTH-1:0] addr,
    output logic[31:0] dout
);

logic[7:0] memory[2**ADDR_WIDTH-1:0];

initial begin
    $readmemh("f1.s.hex", memory);
end

assign dout = {memory[addr+3], memory[addr+2], memory[addr+1], memory[addr]};

endmodule
