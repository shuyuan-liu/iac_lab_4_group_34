module control_pip (
    input logic [6:0] op,
    input logic [2:0] funct3,
    input logic func7_5,
    input logic Zero,
    output logic RegWriteD, 
    output logic [2:0] ALUControlD, //add,addi = 0; sub = 1; and,andi = 2; or = 3; xori = 4; slli = 5; srli = 6; default = 0; 7 for nothing
    output logic ALUSrcD, 
    output logic [1:0] ImmSrcD,//I = 0; B = 1; U = 2; J = 3 (R-type not included, default 0)
    output logic BranchD,
    output logic [1:0] ResultSrcD, // only 1 if load
    output logic MemWriteD,
    output logic JumpD,
    output logic ALUsrcA // only 1 for auipc, 0 otherwise
);

always_comb begin
    if(op==19) begin
        assign JumpD = 0;
        assign ALUSrcD = 1; //immediate
        assign ImmSrcD = 0; //I-type
        assign RegWriteD = 1; // alu
        assign ResultSrcD = 0;
        assign BranchD = 0;
        assign MemWriteD = 0;
        assign ALUsrcA = 0;
        if (func3==0) begin //addi
            assign ALUControlD = 0;
        end
        else if (func3==1) begin //slli
            assign ALUControlD = 5;
        end
        else if (func3==4) begin //xori
            assign ALUControlD = 4;
        end
        else if (func3==5) begin //srli
            assign ALUControlD = 6;
        end
        else if (func3==7) begin //andi
            assign ALUControlD = 2;
        end
    end 

    else if(op==23) begin //auipc
        assign JumpD = 0;
        assign BranchD = 0;
        assign ALUSrcD = 1;
        assign ImmSrcD = 2;
        assign RegWriteD = 1;
        assign ResultSrcD = 0;
        assign MemWriteD = 0;
        assign ALUControlD = 0; //add upper immediate
        assign ALUsrcA = 1;
    end

    else if(op==35) begin// store
        assign JumpD = 0;
        assign MemWriteD = 1;
        assign ResultSrcD = 0; 
        assign BranchD = 0;
        assign ALUSrcD = 0;
        assign ImmSrcD = 0;
        assign RegWriteD = 0;
        assign ALUControlD = 7;
        assign ALUsrcA = 0;
    end

    else if(op==51) begin
        assign JumpD = 0;
        assign ALUSrcD = 0; // RD2
        assign ImmSrcD = 0; //R-type
        assign RegWriteD = 1; // alu
        assign ResultSrcD = 0;
        assign BranchD = 0;
        assign MemWriteD = 0;
        assign ALUsrcA = 0;
        if (func3==0 && func7_5==0) begin //add
            assign ALUControlD = 0;
        end
        if (func3==0 && func7_5==1) begin //sub
            assign ALUControlD = 1;
        end
        else if (func3==6) begin //or
            assign ALUControlD = 3;
        end
        else if (func3==7) begin //and
            assign ALUControlD = 2;
        end
    end

    else if(op==55) begin // lui
        assign JumpD = 0;
        assign ImmSrcD = 2;
        assign RegWriteD = 1;
        assign ALUSrcD = 1;
        assign BranchD = 0;
        assign ResultSrcD = 0;
        assign MemWriteD = 0;
        assign ALUControlD = 7;
        assign ALUsrcA = 0;
    end

    else if(op==99) begin
        assign JumpD = 0;
        assign ALUControlD = 1; // bne, beq need minus
        if (func3==0) // beq
            BranchD = Zero;
        else if (func3==1) //bne
            BranchD = !Zero;
        assign ResultSrcD = 0;
        assign MemWriteD = 0;
        assign ALUSrcD = 0;
        assign ImmSrcD = 1;
        assign RegWriteD = 0;
        assign ALUsrcA = 0;
    end


    else if(op==103) begin //jalr
        assign JumpD = 1;
        assign ImmSrcD = 0;
        assign BranchD = 0;
        assign ALUSrcD = 1;
        assign RegWriteD = 1;
        assign MemWriteD = 0;
        assign ResultSrcD = 2;
        assign ALUControlD = 7;
        assign ALUsrcA = 0;
    end

    else if(op==111) begin // jal
        assign JumpD = 1;
        assign BranchD = 0;
        assign ResultSrcD = 2;
        assign MemWriteD = 0;
        assign ALUControlD = 7;
        assign ALUSrcD = 0;
        assign ImmSrcD = 3;
        assign RegWriteD = 1;
        assign ALUsrcA = 0;
    end

    else if(op==3) begin //load
        assign JumpD = 0;
        assign BranchD = 0;
        assign ResultSrcD = 1;
        assign MemWriteD = 0;
        assign ALUControlD = 7;
        assign ALUSrcD = 0;
        assign ImmSrcD = 0;
        assign RegWriteD = 1;
        assign ALUsrcA = 0;
    end
        

    

end





endmodule
