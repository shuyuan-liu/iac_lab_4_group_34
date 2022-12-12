module control (
    // interface signals
    input logic [6:0] op,
    input logic [2:0] func3,
    input logic func7_5,
    input logic Zero,
    output logic RegWrite,
    output logic [2:0] ALUctrl, //add,addi = 0; sub = 1; and,andi = 2; or = 3; xori = 4; slli = 5; srli = 6; default = 0; 7 for nothing
    output logic ALUsrcB,
    output logic [1:0] ImmSrc,//I = 0; B = 1; U = 2; J = 3 (R-type not included, default 0)
    output logic [1:0] PCsrc, // count output
    output logic ResultSrc, // only 1 if load
    output logic MemWrite,
    output logic ALUsrcA, // only 1 for auipc, 0 otherwise
    output logic JALctrl // 1 if jalr or jal, 0 otherwise
);

always_comb begin
    if(op==19) begin
        JALctrl = 0;
        ALUsrcB = 1; //immediate
        ImmSrc = 0; //I-type
        RegWrite = 1; // alu
        ResultSrc = 0;
        PCsrc = 0;
        MemWrite = 0;
        ALUsrcA = 0;
        if (func3==0) begin //addi
            ALUctrl = 0;
        end
        else if (func3==1) begin //slli
            ALUctrl = 5;
        end
        else if (func3==4) begin //xori
            ALUctrl = 4;
        end
        else if (func3==5) begin //srli
            ALUctrl = 6;
        end
        else if (func3==7) begin //andi
            ALUctrl = 2;
        end
    end

    else if(op==23) begin //auipc
        JALctrl = 0;
        PCsrc = 0;
        ALUsrcB = 1;
        ImmSrc = 2;
        RegWrite = 1;
        ResultSrc = 0;
        MemWrite = 0;
        ALUctrl = 0; //add upper immediate
        ALUsrcA = 1;
    end

    else if(op==35) begin// store
        JALctrl = 0;
        MemWrite = 1;
        ResultSrc = 0;
        PCsrc = 0;
        ALUsrcB = 0;
        ImmSrc = 0;
        RegWrite = 0;
        ALUctrl = 7;
        ALUsrcA = 0;
    end

    else if(op==51) begin
        JALctrl = 0;
        ALUsrcB = 0; // RD2
        ImmSrc = 0; //R-type
        RegWrite = 1; // alu
        ResultSrc = 0;
        PCsrc = 0;
        MemWrite = 0;
        ALUsrcA = 0;
        if (func3==0 && func7_5==0) begin //add
            ALUctrl = 0;
        end
        if (func3==0 && func7_5==1) begin //sub
            ALUctrl = 1;
        end
        else if (func3==6) begin //or
            ALUctrl = 3;
        end
        else if (func3==7) begin //and
            ALUctrl = 2;
        end
    end

    else if(op==55) begin // lui
        JALctrl = 0;
        ImmSrc = 2;
        RegWrite = 1;
        ALUsrcB = 1;
        PCsrc = 0;
        ResultSrc = 0;
        MemWrite = 0;
        ALUctrl = 7;
        ALUsrcA = 0;
    end

    else if(op==99) begin
        JALctrl = 0;
        ALUctrl = 1; // bne, beq need minus
        if (func3==0) // beq
            PCsrc = Zero;
        else if (func3==1) //bne
            PCsrc = !Zero;
        ResultSrc = 0;
        MemWrite = 0;
        ALUsrcB = 0;
        ImmSrc = 1;
        RegWrite = 0;
        ALUsrcA = 0;
    end

    else if(op=='h67) begin // jalr
        JALctrl = 1;
        ImmSrc = 0;
        PCsrc = 2;
        ALUsrcB = 1;
        RegWrite = 1;
        MemWrite = 0;
        ResultSrc = 0;
        ALUctrl = 7;
        ALUsrcA = 1;
    end

    else if(op=='h6F) begin // jal
        JALctrl = 1;
        PCsrc = 1;
        ResultSrc = 0;
        MemWrite = 0;
        ALUctrl = 7;
        ALUsrcB = 0;
        ImmSrc = 3;
        RegWrite = 1;
        ALUsrcA = 1;
    end

    else if(op==3) begin //load
        JALctrl = 0;
        PCsrc = 0;
        ResultSrc = 1;
        MemWrite = 0;
        ALUctrl = 7;
        ALUsrcB = 0;
        ImmSrc = 0;
        RegWrite = 1;
        ALUsrcA = 0;
    end
end





endmodule
