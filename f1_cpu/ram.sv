module ram #(
    parameter ADDR_WIDTH = 12,
              DATA_WIDTH = 8
)(
    input  logic[ADDR_WIDTH-1:0] read_addr,
    input  logic[ADDR_WIDTH-1:0] write_addr,
    input  logic[31:0]           din,
    output logic[31:0]           dout,
    input  logic                 write_en,
    input  logic                 clk
);

bit[DATA_WIDTH-1:0] memory[2**DATA_WIDTH-1:0];

always_comb begin
    dout = {memory[read_addr+3], memory[read_addr+2], memory[read_addr+1], memory[read_addr]};
end

always_ff @(posedge clk) begin
    if (write_en) begin
        memory[write_addr] <= din[7:0];
        memory[write_addr+1] <= din[15:8];
        memory[write_addr+2] <= din[23:16];
        memory[write_addr+3] <= din[31:24];
    end
end

endmodule
