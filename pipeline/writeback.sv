module writeback#(
    parameter ADDR_WIDTH = 5,
              DATA_WIDTH = 32
)(
    input logic [1:0] ResultSrcW,
    input logic [DATA_WIDTH-1:0] ALUResultW,
    input logic [DATA_WIDTH-1:0] ReadDataW,
    input logic [DATA_WIDTH-1:0] PCPlus4W,
    output logic [DATA_WIDTH-1:0] ResultW
);

mux_3 Writeback_mux(
    .sel(ResultSrcW),
    .in0(ALUResultW),
    .in1(ReadDataW),
    .in2(PCPlus4W),
    .out(ResultW)
);

endmodule
