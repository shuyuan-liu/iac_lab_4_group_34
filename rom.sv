module rom #(
    parameter ADDR_WIDTH = 12,
              DATA_WIDTH = 8
)(
    input  logic[ADDR_WIDTH-1:0] addr,
    output logic[DATA_WIDTH-1:0] dout
);

logic[DATA_WIDTH-1:0] memory[2**ADDR_WIDTH-1:0];

initial begin
    $readmemh("rom.txt", memory);
end

assign dout = {memory[addr+3], memory[addr+2], memory[addr+1], memory[addr]};

endmodule
