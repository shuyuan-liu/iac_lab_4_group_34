module execute #(
    parameter ADDR_WIDTH = 5,
              DATA_WIDTH = 32
)(
    input logic JumpE,
    input logic BranchE,
    input logic [2:0] ALUControlE,
    input logic ALUSrcE,
    input logic [DATA_WIDTH-1:0] Rd1E,
    input logic [DATA_WIDTH-1:0] Rd2E,
    input logic [DATA_WIDTH-1:0] PCE,
    input logic [DATA_WIDTH-1:0] ImmExtE,
    output logic PCSrcE,
    output logic [DATA_WIDTH-1:0] ALUResultE,
    output logic [DATA_WIDTH-1:0] WriteDataE,
    output logic [DATA_WIDTH-1:0] PCTargetE,
    input logic JalSrcE
);
 logic ZeroE;
 logic [DATA_WIDTH-1:0] SrcBE;
 logic [DATA_WIDTH-1:0] PCAdderResult;

 
 assign PCSrcE = JumpE | (BranchE & ZeroE);


alu ALU(
    .ctrl(ALUControlE),
    .op1(Rd1E),
    .op2(SrcBE),
    .out(ALUResultE),
    .zero(ZeroE)
);

mux_2 ALU_mux_B(
    .sel(ALUSrcE),
    .in0(Rd2E),
    .in1(ImmExtE),
    .out(SrcBE)
);

assign WriteDataE = Rd2E;

adder PCTarget_adder(
    .in0(PCE),
    .in1(ImmExtE),
    .out(PCAdderResult)
);

mux_2 Jal_mux(
    .sel(JalSrcE),
    .in0(PCTargetE),
    .in1(PCAdderResult),
    .out(PCTargetE)
);

endmodule

