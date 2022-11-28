module register_file #(
    parameter ADDR_WIDTH = 5,
              DATA_WIDTH = 32
)(
    input  logic                 clk,
    input  logic[ADDR_WIDTH-1:0] ad1,
    input  logic[ADDR_WIDTH-1:0] ad2,
    input  logic[ADDR_WIDTH-1:0] ad3,
    output logic[DATA_WIDTH-1:0] rd1,
    output logic[DATA_WIDTH-1:0] rd2,
    input  logic[DATA_WIDTH-1:0] wd3,
    input  logic                 we3,
    output logic[DATA_WIDTH-1:0] a0
);
    
logic[DATA_WIDTH-1:0] registers[2**ADDR_WIDTH-1:0];

always_comb begin
    rd1 = (ad1 == 0) ? 0 : registers[ad1]; // x0 is the constant zero register
    rd2 = (ad2 == 0) ? 0 : registers[ad2];
    a0 = registers[10];                    // a0 is register x10
end

always_ff @(posedge clk) begin
    if(we3) registers[ad3] <= wd3;
end

endmodule
