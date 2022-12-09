module control #(
    // interface signals
    input logic [6:0] op,
    input logic [2:0] funct3,
    input logic func7_5,
    input logic Zero,
    output logic RegWrite, //clk
    output logic [2:0] ALUctrl, //add,addi = 0; sub = 1; and,andi = 2; or = 3; xori = 4; slli = 5; srli = 6; default = 0; 7 for nothing
    output logic ALUsrc, // enable
    output logic [1:0] ImmSrc,//I = 0; B = 1; U = 2; J = 3 (R-type not included, default 0)
    output logic PCsrc, //count output
    output logic ResultSrc, // only 1 if load
    output logic MemWrite,
    output logic ALUsrcA, // only 1 for auipc, 0 otherwise
    output logic JALctrl // 1 if jalr or jal, 0 otherwise
);
// indicates that this is a clocked circuit

always_comb begin
    if(op==19) begin
        assign JALctrl = 0;
        assign ALUsrc = 1; //immediate
        assign ImmSrc = 0; //I-type
        assign RegWrite = 1; // alu
        assign ResultSrc = 0;
        assign PCsrc = 0;
        assign MemWrite = 0;
        assign ALUsrcA = 0;
        if (func3==0) begin //addi
            assign ALUctrl = 0;
        end
        else if (func3==1) begin //slli
            assign ALUctrl = 5;
        end
        else if (func3==4) begin //xori
            assign ALUctrl = 4;
        end
        else if (func3==5) begin //srli
            assign ALUctrl = 6;
        end
        else if (func3==7) begin //andi
            assign ALUctrl = 2;
        end
    end 

    else if(op==23) begin //auipc
        assign JALctrl = 0;
        assign PCsrc = 0;
        assign ALUsrc = 1;
        assign ImmSrc = 2;
        assign RegWrite = 1;
        assign ResultSrc = 0;
        assign MemWrite = 0;
        assign ALUctrl = 0; //add upper immediate
        assign ALUsrcA = 1;
    end

    else if(op==35) begin// store
        assign JALctrl = 0;
        assign MemWrite = 1;
        assign ResultSrc = 0; 
        assign PCsrc = 0;
        assign ALUsrc = 0;
        assign ImmSrc = 0;
        assign RegWrite = 0;
        assign ALUctrl = 7;
        assign ALUsrcA = 0;
    end

    else if(op==51) begin
        assign JALctrl = 0;
        assign ALUsrc = 0; // RD2
        assign ImmSrc = 0; //R-type
        assign RegWrite = 1; // alu
        assign ResultSrc = 0;
        assign PCsrc = 0;
        assign MemWrite = 0;
        assign ALUsrcA = 0;
        if (func3==0 && func7_5==0) begin //add
            assign ALUctrl = 0;
        end
        if (func3==0 && func7_5==1) begin //sub
            assign ALUctrl = 1;
        end
        else if (func3==6) begin //or
            assign ALUctrl = 3;
        end
        else if (func3==7) begin //and
            assign ALUctrl = 2;
        end
    end

    else if(op==55) begin // lui
        assign JALctrl = 0;
        assign ImmSrc = 2;
        assign RegWrite = 1;
        assign ALUsrc = 1;
        assign PCsrc = 0;
        assign ResultSrc = 0;
        assign MemWrite = 0;
        assign ALUctrl = 7;
        assign ALUsrcA = 0;
    end

    else if(op==99) begin
        assign JALctrl = 0;
        assign ALUctrl = 1; // bne, beq need minus
        if (func3==0) // beq
            PCsrc = Zero;
        else if (func3==1) //bne
            PCsrc = !Zero;
        assign ResultSrc = 0;
        assign MemWrite = 0;
        assign ALUsrc = 0;
        assign ImmSrc = 1;
        assign RegWrite = 0;
        assign ALUsrcA = 0;
    end


    else if(op==103) begin //jalr
        assign JALctrl = 1;
        assign ImmSrc = 0;
        assign PCsrc = 1;
        assign ALUsrc = 1;
        assign RegWrite = 1;
        assign MemWrite = 0;
        assign ResultSrc = 0;
        assign ALUctrl = 7;
        assign ALUsrcA = 1;
    end

    else if(op==111) begin // jal
        assign JALctrl = 1;
        assign PCsrc = 1;
        assign ResultSrc = 0;
        assign MemWrite = 0;
        assign ALUctrl = 7;
        assign ALUsrc = 0;
        assign ImmSrc = 3;
        assign RegWrite = 1;
        assign ALUsrcA = 1;
    end

    else if(op==3) begin //load
        assign JALctrl = 0;
        assign PCsrc = 0;
        assign ResultSrc = 1;
        assign MemWrite = 0;
        assign ALUctrl = 7;
        assign ALUsrc = 0;
        assign ImmSrc = 0;
        assign RegWrite = 1;
        assign ALUsrcA = 0;
    end
        

    

end





endmodule
