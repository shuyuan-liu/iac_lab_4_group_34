module memory#(
    parameter ADDR_WIDTH = 5,
              DATA_WIDTH = 32
)(
    input logic clk,
    input logic [DATA_WIDTH-1:0] ALUResultM,
    input logic [DATA_WIDTH-1:0] WriteDataM,
    input logic MemWriteM,
    output logic [DATA_WIDTH-1:0] ReadDataM,
    input logic [1:0] WordWidthM,
    input logic LoadSignExtM
    
);

ram Data_Memory(
    .read_addr(ALUResultM),
    .write_addr(ALUResultM),
    .width(WordWidthM),
    .read_sign_ext(LoadSignExtM),
    .din(WriteDataM),
    .dout(ReadDataM),
    .write_en(MemWriteM),
    .clk(clk)
);



endmodule