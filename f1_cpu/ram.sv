module ram #(
    parameter ADDR_WIDTH = 17,
              DATA_WIDTH = 8
)(
    input  logic                 clk,
    input  logic                 write_en,
    input  logic[1:0]            width, // 0 = byte, 1 = halfword, 2 = word
    input  logic                 read_sign_ext,
    input  logic[ADDR_WIDTH-1:0] read_addr,
    input  logic[ADDR_WIDTH-1:0] write_addr,
    input  logic[31:0]           din,
    output logic[31:0]           dout
);

bit[DATA_WIDTH-1:0] memory[2**ADDR_WIDTH-1:0];

always_comb begin
    case (width)
        0: if (read_sign_ext) dout = {{24{memory[read_addr][7]}}, memory[read_addr]};
           else               dout = {24'b0, memory[read_addr]};
        1: if (read_sign_ext) dout = {{16{memory[read_addr+1][7]}}, memory[read_addr+1], memory[read_addr]};
           else               dout = {16'b0, memory[read_addr+1], memory[read_addr]};
        2: dout = {memory[read_addr+3], memory[read_addr+2], memory[read_addr+1], memory[read_addr]};
        default: dout = 0;
    endcase
end

always_ff @(posedge clk) begin
    if (write_en) begin
        case (width)
            0: begin
                memory[write_addr] <= din[7:0];
            end
            1: begin
                memory[write_addr] <= din[7:0];
                memory[write_addr+1] <= din[15:8];
            end
            2: begin
                memory[write_addr] <= din[7:0];
                memory[write_addr+1] <= din[15:8];
                memory[write_addr+2] <= din[23:16];
                memory[write_addr+3] <= din[31:24];
            end
            default: ;
        endcase
    end
end

endmodule
