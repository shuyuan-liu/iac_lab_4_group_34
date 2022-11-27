module instrrom #(
    parameter ADDR_WIDTH = 16,
              DATA_WIDTH = 32
)(
    input  logic[ADDR_WIDTH-1:0] A,
    output logic[DATA_WIDTH-1:0] instr,
    output logic[4:0] rs2,
    output logic[4:0] rs1,
    output logic[4:0] rd
);

program_counter program_counter (
    .PC(A)
);

rom instrrom(
    .addr(A),
    .dout(instr)
);

assign rs2 = instr[24:20];
assign rs1 = instr[19:15];
assign rd = instr[11:7];


endmodule 
