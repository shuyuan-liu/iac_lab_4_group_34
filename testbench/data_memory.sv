module data_memory(
    input logic[31:0] A,
    input logic[31:0] WD, // write data
    input logic WE, // write enable
    input logic clk,
    output logic[31:0] RD
);

logic [31:0] ram_array [2**32-1:0];

always_ff @(posedge clk) 
    if(WE)
        ram_array[A] <= WD;
    else
        RD <= ram_array[A];

endmodule
