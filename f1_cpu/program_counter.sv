module program_counter
(
    input logic clk,
    input logic rst,
    input logic [31:0] addr_offset,
    input logic [31:0] addr_absolute,
    input logic [1:0] PCsrc,
    output logic [31:0] PC
);

always_ff @(posedge clk) begin
    if(rst)
        PC <= 0;
    else
        case (PCsrc)
            0: PC <= PC + 4;
            1: PC <= PC + addr_offset;
            2: PC <= addr_absolute;
            default: PC <= PC + 4;
        endcase
end


endmodule
