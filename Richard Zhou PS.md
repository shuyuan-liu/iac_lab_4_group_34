Contribution I made: 
1. Basic task: Updated RISC-V:   control.sv, sign_extend.sv, instrmem.sv(initial version)                    
2. Streched Goal 1 pipeline: updated code: control.sv, sign_extend.sv, memory.sv (memory part of the 5 stages in pipeline) in f1_cpu.

My idea of designing components:

1. control.sv
   Functions of different instructions are determined by some part of 32 bits, such as op[6:0], func3[14:12], func7_5[30]. ResultIsZero receives the output from ALU. If the minus of SrcA and SrcB is 0, the input is 1. They are the inputs control.sv receive. The outputs are the flag used to represent different conditions. RegWrite = 1 when you need to write data into registers, such as alu, aupic, jal, jalr, load. MemWrite = 1 when you need to store data into RAM. ALUMode is designed for different instrutions in ALU. My design is add,addi = 0; sub = 1; and,andi = 2; or = 3; xori = 4; slli = 5; srli = 6; default = 0; 7 for nothing. ALUsrcB performs the same function as ALUsrc. It determines whether ALU accepts RD2 from register file or immediate from sign exend unit. Immformat controls what type of extension should sign_extend.sv operate. It is based on the type of the instruction. My design is I = 0; B = 1; U = 2; J = 3; S = 4 (R-type not included, default 0). PCsrc has 1 digit initially. 0 means PC+4, 1 means PC+imm. However, we extend PCsrc to two bits later because jalr instruction needs rs1+sign extend, which is the third condition. ResultSrc is 1 for load instructions. ALUsrcA is 1 for auipc instructions. DoJump is 1 if jalr or jal, 0 otherwise. WordWidth determines whether we want to load/store byte(0), half(1) or word(2). LoadSignExt is 1 for loading/storing signed vaule, 0 for unsigned.
   
 2. sign_extend.sv
   Based on different type of instructions, I designed 5 situations for sign_extend. My teammate shuyuan-liu adds a [default value](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/0db0cca657147e96137188cc58819e2cf2146967) for ImmExt.

First version of [control.sv](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/18e70f9a82282443f31ff73bf0d8c250ff4f24b1), [sign_extend.sv](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/1e877402444a762074fda79e7f45f6bc35892bf0), [instrmen.sv](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/a5faa179a357e5ca24adc764a01ac75a2319f68e). (Lab4)

Target:

1. Sign Extension: Add bits to 8. If opsitive signed, 00000. If negative, FFFFF.
2. RegWrite: 1 for add  (op = 19, 51), 0 for branch,
3. ALUCtrl: 0 sum two number, 1 minus. If the result of minus=0, EQ =1.
4. ALUSrc: 0 normal, 1 immediate.
5. OP=51 R-type.
6. ImmSrc: sign extend.
7. PCSrc: Pc+Imm or PC.

The improvement I made during coding:
1. Shuyuan Leo Liu suggest me to [remove unrelated comments and incorrect format at the head](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/5557f6c17ded0fd398a35d54280f81e5709cc5d1). Done.[See here for changes](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/18e70f9a82282443f31ff73bf0d8c250ff4f24b1)
2. Correct the method of combining 20 digits of 0 and 1 with the input in sign extend.[See here for changes](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/1e877402444a762074fda79e7f45f6bc35892bf0)
3. The output RD of instruction memory should be separated into different inputs connected to register file instead of only 1 output. [See here for changes](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/85c67df7ef0d54f0b992e4ef81d837004428bcf9)

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
5. My teammate Jim suggested that PC+4 needs to connect to a multiplexer as well. He updated control.sv with a new output JALctrl. It controls the select of PC+4 and result from registers. Their destination is WD3. JALctul is 1 only for jal and jalr.
