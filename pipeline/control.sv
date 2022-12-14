module control (
    // interface signals
    input logic [6:0] op,
    input logic [2:0] funct3,
    input logic [6:0] funct7,
    output logic RegWriteD, //clk
    output logic [2:0] ALUControlD, //add,addi = 0; sub = 1; and,andi = 2; or = 3; xori = 4; slli = 5; srli = 6; default = 0; 7 for nothing
    output logic ALUSrcD, // enable
    output logic [1:0] ImmSrcD,//I = 0; B = 1; U = 2; J = 3 (R-type not included, default 0)
    output logic BranchD, //count output
    output logic [1:0] ResultSrcD, // only 1 if load
    output logic MemWriteD,
    output logic JumpD,
    output logic[1:0] WordWidthD,
    output logic LoadSignExtD,
    output logic JalSrcD
);
// indicates that this is a clocked circuit

always_comb begin
    if(op==19) begin
        assign JumpD = 0;
        assign ALUSrcD = 1; //immediate
        assign ImmSrcD = 0; //I-type
        assign RegWriteD = 1; // alu
        assign ResultSrcD = 0;
        assign BranchD = 0;
        assign MemWriteD = 0;
        assign JalSrcD = 0;
        case (funct3)
            0: ALUControlD = 0;// addi
            1: ALUControlD = 5;//slli
            4: ALUControlD = 4;//xori
            5: ALUControlD = 6;//srli
            6: ALUControlD = 3;//ori
            7: ALUControlD = 2;//andi
        endcase
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
        assign WordWidthD = funct3[1:0];
        assign JalSrcD = 0;
    end

    else if(op==51) begin // normal arthmetics
        assign JumpD = 0; 
        assign ALUSrcD = 0; // RD2
        assign ImmSrcD = 0; //R-type
        assign RegWriteD = 1; // alu
        assign ResultSrcD = 0;
        assign BranchD = 0;
        assign MemWriteD = 0;
        assign JalSrcD = 0;
        case (funct3)
             0: ALUControlD = funct7[5] ? 1 : 0;
             1: ALUControlD = 5;
             4: ALUControlD = 4;
             5: ALUControlD = 6;
             6: ALUControlD = 3;
             7: ALUControlD = 2;
        endcase
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
        assign JalSrcD = 0;
    end

    else if(op==99) begin
        assign JumpD = 0;
        assign ALUControlD = 1; // bne, beq need minus
        assign BranchD = 1;
        assign ResultSrcD = 0;
        assign MemWriteD = 0;
        assign ALUSrcD = 0;
        assign ImmSrcD = 1;
        assign RegWriteD = 0;
        assign JalSrcD = 0;
    end


    else if(op==103) begin //jalr
        assign JumpD = 1;
        assign ImmSrcD = 0;
        assign BranchD = 0;
        assign ALUSrcD = 1;
        assign RegWriteD = 1;
        assign MemWriteD = 0;
        assign ResultSrcD = 2;
        assign ALUControlD = 0;
        assign JalSrcD = 1;
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
        assign JalSrcD = 1;
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
        assign WordWidthD = funct3[1:0];
        assign LoadSignExtD = !funct3[2];
        assign JalSrcD = 0;
    end
        

    

end





endmodule
