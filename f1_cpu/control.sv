module control (
    input logic[6:0] op,
    input logic[2:0] func3,
    input logic func7_5,
    input logic Zero,
    output logic RegWrite,
    output logic[2:0] ALUctrl, // add,addi = 0; sub = 1; and,andi = 2; or = 3; xori = 4; slli = 5; srli = 6; default = 0; 7 for nothing
    output logic ALUsrcB,
    output logic[1:0] ImmSrc,// I = 0; B = 1; U = 2; J = 3 (R-type not included, default 0)
    output logic[1:0] PCsrc,
    output logic ResultSrc, // only 1 if load
    output logic MemWrite,
    output logic ALUsrcA, // only 1 for auipc, 0 otherwise
    output logic JALctrl // 1 if jalr or jal, 0 otherwise
);

always_comb begin
     // arithmetic instructions with immediate
    if (op == 'h13) begin
        JALctrl = 0;
        ALUsrcA = 0;
        ALUsrcB = 1; // immediate
        ImmSrc = 0; // I-type
        RegWrite = 1;
        ResultSrc = 0;
        PCsrc = 0;
        MemWrite = 0;
        case (func3)
            0: ALUctrl = 0; // addi
            1: ALUctrl = 5; // slli
            4: ALUctrl = 4; // xori
            5: ALUctrl = 6; // srli
            7: ALUctrl = 2; // andi
        endcase
    end

    // auipc
    else if (op == 'h17) begin
        JALctrl = 0;
        PCsrc = 0;
        ALUsrcA = 1;
        ALUsrcB = 1;
        ImmSrc = 2;
        RegWrite = 1;
        ResultSrc = 0;
        MemWrite = 0;
        ALUctrl = 0; // add upper immediate
    end

    // store
    else if (op == 'h23) begin
        JALctrl = 0;
        MemWrite = 1;
        ResultSrc = 0;
        PCsrc = 0;
        ALUsrcA = 0;
        ALUsrcB = 0;
        ImmSrc = 0;
        RegWrite = 0;
        ALUctrl = 7;
    end

    // register arithmetic instructions
    else if (op == 'h33) begin
        JALctrl = 0;
        ALUsrcA = 0;
        ALUsrcB = 0; // RD2
        ImmSrc = 0; // R-type
        RegWrite = 1; // alu
        ResultSrc = 0;
        PCsrc = 0;
        MemWrite = 0;
        if (func3 == 0)
            if (func7_5 == 0) ALUctrl = 0; // add
            else ALUctrl = 1; // sub
        else if (func3 == 6) ALUctrl = 3; // or
        else if (func3 == 7) ALUctrl = 2; // and
    end

    // lui
    else if (op == 'h37) begin
        JALctrl = 0;
        ImmSrc = 2;
        RegWrite = 1;
        ALUsrcA = 0;
        ALUsrcB = 1;
        PCsrc = 0;
        ResultSrc = 0;
        MemWrite = 0;
        ALUctrl = 7;
    end

    // branch
    else if (op == 'h63) begin
        JALctrl = 0;
        ALUctrl = 1; // bne, beq need minus
        if (func3 == 0) // beq
            PCsrc = Zero;
        else if (func3 == 1) // bne
            PCsrc = !Zero;
        ResultSrc = 0;
        MemWrite = 0;
        ALUsrcA = 0;
        ALUsrcB = 0;
        ImmSrc = 1;
        RegWrite = 0;
    end

    // jalr
    else if (op == 'h67) begin
        JALctrl = 1;
        ImmSrc = 0;
        PCsrc = 2;
        ALUsrcA = 1;
        ALUsrcB = 1;
        RegWrite = 1;
        MemWrite = 0;
        ResultSrc = 0;
        ALUctrl = 0; // add
    end

    // jal
    else if(op == 'h6F) begin
        JALctrl = 1;
        PCsrc = 1;
        ResultSrc = 0;
        MemWrite = 0;
        ALUctrl = 7;
        ALUsrcA = 1;
        ALUsrcB = 0;
        ImmSrc = 3;
        RegWrite = 1;
    end

    // load
    else if(op == 'h03) begin
        JALctrl = 0;
        PCsrc = 0;
        ResultSrc = 1;
        MemWrite = 0;
        ALUctrl = 7;
        ALUsrcA = 0;
        ALUsrcB = 0;
        ImmSrc = 0;
        RegWrite = 1;
    end
end

endmodule
