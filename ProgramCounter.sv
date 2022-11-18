module ProgramCounter 
(
    input logic clk,
    input logic rst,
    input logic [31:0] ImmOp,
    input logic PCsrc,
    output logic [31:0] PC
);

always_ff @(posedge clk)begin
    if(rst) 
        PC <= 0;
    else 
        if(PCsrc)
            PC <= PC + ImmOp;
        else
            PC <= PC + 4;
end

endmodule
