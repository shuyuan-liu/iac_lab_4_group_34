
First version of control.sv and sign extend

1. Extension: Add bits to 8. If opsitive signed, 00000. If negative, FFFFF.
2. RegWrite: 1 for add  (op = 19, 51), 0 for branch,
3. ALUCtrl: 0 sum two number, 1 minus. If =0, EQ =1.
4. ALUSrc: 0 normal, 1 immediate.
5. OP=51 R-type.
6. Imm Src: sign extend?
7. PCSrc: Pc+Imm or PC?



Updated RISC-V and improvement I made

New target:

1. Input update: op 6:0, func3 14:12, func7[5]    30.
2. Output update: ImmSrc: 1:0, ALUControl 2:0,    New Output:MemWrite to data memory,    ResultSrc to decide a multiplexer after data memory.
3. alu concrol bit extends to 3 bit. func3   100     xor
4. Control unit do not accept bit 31. Judge in sign extend.
5. The F1 tesing program has instructions: addi, slli, srli, bne, beq, jal, jalr, xori, andi, and, or. They are generally in 4 types: I, R, B, J.


The improvement I made during coding:
1. I checked the sign-extend data structure for different type of instructions. S type is not included.
2. I noticed that data memory block is used for both load and store insturctions, ResultSrc = 1 only in load insturtions because RAM needs to write data back to registers.
3. For jal and jalr instructions, we need to add a new multiplexer after RD1 output of Register File. This decides whether we use PC or the sign extended result that is writtehn into the registers. A new output ALUsrcA is added to contorl unit.
4. My teammate Jim suggested that PC+4 needs to connect to a multiplexer as well. He updated control.sv with a new output jalcontrol. It controls the select of PC+4 and result from registers. Their destination is WD3.
