module instr_rom #(
    parameter ADDR_WIDTH = 16,
              DATA_WIDTH = 32
)(
    input  logic[ADDR_WIDTH-1:0] addr,
    output logic[DATA_WIDTH-1:0] dout
);

logic[DATA_WIDTH-1:0] memory[2**ADDR_WIDTH-1:0];

initial begin
    $readmemh("rom.txt", memory);
end

assign dout = memory[addr];
    
endmodule
