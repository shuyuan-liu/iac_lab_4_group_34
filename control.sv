module control #(
    // bits in counter set to 8 bits
    parameter WIDTH = 32
)(
    // interface signals
    input logic EQ,
    input logic [WIDTH-1:0] instr,
    output logic RegWrite, //clk
    output logic ALUctrl, //reset
    output logic ALUsrc, // enable
    output logic ImmSrc,//increment
    output logic PCsrc //count output
);
// indicates that this is a clocked circuit


    if(instr[6:0]==19) begin
        if(instr[14:12]==0) begin //addi
            assign RegWrite = 1;
        end
        assign ALUsrc = 1; //immediate
        if(instr[31]==0)  //sign extend
            assign ImmSrc = 0;
        else
            assign ImmSrc = 1;

    else if(instr[6:0]==51) begin
        assign ALUsrc = 0; //immediate
        if(instr[31:25]==0 & instr[14:12]==0) //add
            assign ALUctrl = 0;
        else if(instr[31:25]==7'b0100000 & instr[14:12]==0) //sub
            assign ALUctrl = 1;
    end

    else if(instr[6:0]==99)
        if(instr[31:25]==0 & instr[14:12]==3'b001) //bne
            assign RegWrite = 1;

    else if(instr[6:0]==23)
        if(EQ == 0) //PC+Imm
            assign PCsrc = 1;
        else //PC
            assign PCsrc = 0;

    end






endmodule
