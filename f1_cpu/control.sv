module control (
    input logic[6:0] opcode,
    input logic[2:0] funct3,
    input logic[6:0] funct7,
    output logic RegWrite,
    output logic MemWrite,
    output logic[2:0] ALUMode, // add,addi = 0; sub = 1; and,andi = 2; or = 3; xori = 4; slli = 5; srli = 6; default = 0; 7 for nothing
    output logic ALUsrcB,
    output logic[2:0] ImmFormat,// I = 0; B = 1; U = 2; J = 3; S = 4 (R-type not included, default 0)
    output logic[1:0] PCsrc,
    output logic ResultSrc, // only 1 if load
    output logic ALUsrcA, // only 1 for auipc, 0 otherwise
    input logic ResultIsZero,
    output logic DoJump, // 1 if jalr or jal, 0 otherwise
    output logic[1:0] WordWidth,
    output logic LoadSignExt // 1 for signed, 0 for unsigned
);

always_comb begin
     // arithmetic instructions with immediate
    if (opcode == 'h13) begin
        DoJump = 0;
        ALUsrcA = 0;
        ALUsrcB = 1; // immediate
        ImmFormat = 0; // I-type
        RegWrite = 1;
        ResultSrc = 0;
        PCsrc = 0;
        MemWrite = 0;
        case (funct3)
            0: ALUMode = 0; // addi
            1: ALUMode = 5; // slli
            4: ALUMode = 4; // xori
            5: ALUMode = 6; // srli
            6: ALUMode = 3; // ori
            7: ALUMode = 2; // andi
        endcase
    end

    // auipc
    else if (opcode == 'h17) begin
        DoJump = 0;
        PCsrc = 0;
        ALUsrcA = 1;
        ALUsrcB = 1;
        ImmFormat = 2;
        RegWrite = 1;
        ResultSrc = 0;
        MemWrite = 0;
        ALUMode = 0; // add upper immediate
    end

    // store
    else if (opcode == 'h23) begin
        DoJump = 0;
        MemWrite = 1;
        ResultSrc = 0;
        PCsrc = 0;
        ALUsrcA = 0;
        ALUsrcB = 1;
        ImmFormat = 4;
        RegWrite = 0;
        ALUMode = 0;
        WordWidth = funct3[1:0];
    end

    // register arithmetic instructions
    else if (opcode == 'h33) begin
        DoJump = 0;
        ALUsrcA = 0;
        ALUsrcB = 0; // RD2
        ImmFormat = 0; // R-type
        RegWrite = 1; // alu
        ResultSrc = 0;
        PCsrc = 0;
        MemWrite = 0;
        case (funct3)
            0: ALUMode = funct7[5] ? 1 : 0; // - / +
            1: ALUMode = 5;                 // <<
            4: ALUMode = 4;                 // XOR
            5: ALUMode = 6;                 // >>
            6: ALUMode = 3;                 // OR
            7: ALUMode = 2;                 // AND
        endcase
    end

    // lui
    else if (opcode == 'h37) begin
        DoJump = 0;
        ImmFormat = 2;
        RegWrite = 1;
        ALUsrcA = 0;
        ALUsrcB = 1;
        PCsrc = 0;
        ResultSrc = 0;
        MemWrite = 0;
        ALUMode = 7;
    end

    // branch
    else if (opcode == 'h63) begin
        DoJump = 0;
        ALUMode = 1; // bne, beq need minus
        if (funct3 == 0) // beq
            PCsrc = ResultIsZero ? 1 : 0;
        else if (funct3 == 1) // bne
            PCsrc = ResultIsZero ? 0 : 1;
        ResultSrc = 0;
        MemWrite = 0;
        ALUsrcA = 0;
        ALUsrcB = 0;
        ImmFormat = 1;
        RegWrite = 0;
    end

    // jalr
    else if (opcode == 'h67) begin
        DoJump = 1;
        ImmFormat = 0;
        PCsrc = 2;
        ALUsrcA = 0; // rd1
        ALUsrcB = 1; // + ImmExt
        RegWrite = 1;
        MemWrite = 0;
        ResultSrc = 0;
        ALUMode = 0; // add
    end

    // jal
    else if(opcode == 'h6F) begin
        DoJump = 1;
        PCsrc = 1;
        ResultSrc = 0;
        MemWrite = 0;
        ALUMode = 7;
        ALUsrcA = 1; // PC
        ALUsrcB = 1; // + ImmExt
        ImmFormat = 3;
        RegWrite = 1;
    end

    // load
    else if(opcode == 'h03) begin
        DoJump = 0;
        PCsrc = 0;
        ResultSrc = 1;
        MemWrite = 0;
        ALUMode = 7;
        ALUsrcA = 0;
        ALUsrcB = 0;
        ImmFormat = 0;
        RegWrite = 1;
        WordWidth = funct3[1:0];
        LoadSignExt = !funct3[2];
    end
end

endmodule
