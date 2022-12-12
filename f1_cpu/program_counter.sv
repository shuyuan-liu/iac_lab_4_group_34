module program_counter
(
    input logic clk,
    input logic rst,
    input logic [31:0] addr_offset,
    input logic [31:0] addr_absolute,
    input logic [1:0] pc_src,
    output logic [31:0] pc
);

always_ff @(posedge clk) begin
    if (rst)
        pc <= 0;
    else
        case (pc_src)
            0: pc <= pc + 4;
            1: pc <= pc + addr_offset;
            2: pc <= addr_absolute;
            default: pc <= pc + 4;
        endcase
end


endmodule
