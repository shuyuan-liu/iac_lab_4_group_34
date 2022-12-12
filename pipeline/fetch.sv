module fetch#(
    parameter ADDR_WIDTH = 5,
              DATA_WIDTH = 32
)(
    input logic clk,
    input logic PCSrcE,
    input logic [DATA_WIDTH-1:0] PCTargetE,
    output logic [DATA_WIDTH-1:0] InstrF,
    output logic [DATA_WIDTH-1:0] PCF,
    output logic [DATA_WIDTH-1:0] PCPlus4F
)

logic [DATA_WIDTH-1:0] PCF0;
logic [DATA_WIDTH-1:0] PCF;

mux_2 PC_mux(
    .sel(PCSrcE),
    .in0(PCPlus4F),
    .in1(PCTargetE),
    .out(PCF0)
);

always_ff @(posedge clk) begin
    PCF<=PCF0;
end

instr_rom Instr_rom(
    .addr(PCF),
    .dout(InstrF)
);

adder PC_Plus_4_adder(
    .in0(PCF),
    .in1(4),
    .out(PCPlus4F)
);

endmodule
