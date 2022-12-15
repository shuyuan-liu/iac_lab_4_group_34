Contribution I made: 
1. Basic task: Updated RISC-V:   control.sv, sign_extend.sv, instrmem.sv(initial version)                    
2. Streched Goal 1 pipeline: updated code: control.sv, sign_extend.sv, memory.sv (memory part of the 5 stages in pipeline)



First version of control.sv and sign_extend.sv(lab4)

1. Extension: Add bits to 8. If opsitive signed, 00000. If negative, FFFFF.
2. RegWrite: 1 for add  (op = 19, 51), 0 for branch,
3. ALUCtrl: 0 sum two number, 1 minus. If the result of minus=0, EQ =1.
4. ALUSrc: 0 normal, 1 immediate.
5. OP=51 R-type.
6. ImmSrc: sign extend.
7. PCSrc: Pc+Imm or PC.



Updated RISC-V and improvement I made

New target:

1. Input update: op 6:0, func3 14:12, func7[5]    30.
2. Output update: ImmSrc: 1:0, ALUControl 2:0,    New Output:MemWrite to data memory,    ResultSrc to decide a multiplexer after data memory.
3. alu concrol bit extends to 3 bit. 
4. Control unit do not need to judge bit 31. Sign extend of immediate will be the same number as the bit 31.
5. The F1 tesing program has instructions: addi, slli, srli, bne, beq, jal, jalr, xori, andi, and, or. They are generally in 4 types: I, R, B, J.


The improvement I made during coding:
1. I checked the sign-extend data structure for different type of instructions. S type is not included.
2. In my previous coding, RegWrite: 1 for add  (op = 19, 51), 0 for branch. In my updated control.sv: RegWrite: 1 for op = 19(alu immediate), 23(auipc), 51(alu normal), 55(load upper immediate), 103(jalr), 111(jal).
3. I noticed that data memory block is used for both load and store insturctions, ResultSrc = 1 only in load insturtions because RAM needs to write data back to registers.
4. For jal, jalr, auipc instructions, we need to add a new multiplexer after RD1 output of Register File. This decides whether we use PC or the sign extended result that is written into the registers. A new output ALUsrcA is added to contorl unit.
5. My teammate Jim suggested that PC+4 needs to connect to a multiplexer as well. He updated control.sv with a new output JALctrl. It controls the select of PC+4 and result from registers. Their destination is WD3. JALcrul is 1 only for jal and jalr.
