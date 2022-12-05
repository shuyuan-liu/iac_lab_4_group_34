module control #(
    // interface signals
    input logic [6:0] op,
    input logic [2:0] funct3,
    input logic func7_5,
    input logic Zero,
    output logic RegWrite, //clk
    output logic [2:0] ALUctrl, //reset
    output logic ALUsrc, // enable
    output logic [1:0] ImmSrc,//increment
    output logic PCsrc, //count output
    output logic ResultSrc,
    output logic MemWrite
);
// indicates that this is a clocked circuit

always_comb begin
    if(op==19) begin
        if(funct3==0) begin //addi
            assign RegWrite = 1;
        end
        assign ALUsrc = 1; //immediate
        if(instr[31]==0)  //sign extend
            assign ImmSrc = 0;
        else
            assign ImmSrc = 1;
    end 

    else if(op]==51) begin
        assign ALUsrc = 0; //immediate
        if(instr[31:25]==0 & instr[14:12]==0) //add
            assign ALUctrl = 0;
        else if(instr[31:25]==7'b0100000 & instr[14:12]==0) //sub
            assign ALUctrl = 1;
    end

    else if(op==99)
        if(instr[31:25]==0 & instr[14:12]==3'b001) //bne
            assign RegWrite = 1;

    else if(op==23)
        if(Zero == 0) //PC+Imm
            assign PCsrc = 1;
        else //PC
            assign PCsrc = 0;

end





endmodule
