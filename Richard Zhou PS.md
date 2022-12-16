Contribution I made(Those are the finished version of programs): 
1. Basic task: f1_cpu:   control.sv, sign_extend.sv, [instrmem.sv(initial version, not used)](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/a5faa179a357e5ca24adc764a01ac75a2319f68e)                   
2. Streched Goal 1: pipeline: control.sv, sign_extend.sv, memory.sv.

My idea of designing components(Link below shows histories of original programs which has my idea of design. The finished version above is transferred by my team):

1. [first version of control.sv](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/2222e10fa9e234c77e828b556f8bf8ef3d196aed)
   Functions of different instructions are determined by some part of 32 bits, such as op[6:0], func3[14:12], func7_5[30]. ResultIsZero receives the output from ALU. If the minus of SrcA and SrcB is 0, the input is 1. They are the inputs control.sv receive. The outputs are the flag used to represent different conditions. RegWrite = 1 when you need to write data into registers, such as alu, aupic, jal, jalr, load. MemWrite = 1 when you need to store data into RAM. ALUMode is designed for different instrutions in ALU. My design is add,addi = 0; sub = 1; and,andi = 2; or = 3; xori = 4; slli = 5; srli = 6; default = 0; 7 for nothing. ALUsrcB performs the same function as ALUsrc. It determines whether ALU accepts RD2 from register file or immediate from sign exend unit. Immformat controls what type of extension should sign_extend.sv operate. It is based on the type of the instruction. My design is I = 0; B = 1; U = 2; J = 3; S = 4 (R-type not included, default 0). PCsrc has 1 digit initially. 0 means PC+4, 1 means PC+imm. However, we extend PCsrc to two bits later because jalr instruction needs rs1+sign extend, which is the third condition. ResultSrc is 1 for load instructions. ALUsrcA is 1 for auipc instructions. DoJump is 1 if jalr or jal, 0 otherwise. WordWidth determines whether we want to load/store byte(0), half(1) or word(2). LoadSignExt is 1 for loading/storing signed vaule, 0 for unsigned. In [pipeline version](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/16adba44a42ad500facdbc357643cc633a37be52), the only difference is that a new output BranchD is added for judging bne and beq.
   
 2. [sign_extend.sv](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/ff872c3d1d112f6bebdd3311d912cf3ec2805872)
   Based on different type of instructions, I designed 5 situations for sign_extend. My teammate shuyuan-liu adds a [default value](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/0db0cca657147e96137188cc58819e2cf2146967) for testing purpose.
   
 3. [instrmem.sv(initial version)](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/a5faa179a357e5ca24adc764a01ac75a2319f68e) and [memory.sv](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/017d4ba8a1d13d8ec5a670ceb979c27f86f17f3c)
   I check the name of input and output ports of the file and the previous file. The output of program counter PC will be the input A of my file. The output of instrmen.sv will then be divided into different parts which will be the input of control unit, register file and sign extend unit. Memory.sv uses a similar method to make.
 
The improvement I made during coding:
1. Shuyuan Leo Liu suggest me to [remove unrelated comments and incorrect format at the head](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/5557f6c17ded0fd398a35d54280f81e5709cc5d1). Done.[See here for changes](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/18e70f9a82282443f31ff73bf0d8c250ff4f24b1)
2. At the early stages, I corrected the method of combining 20 digits of 0 and 1 with the input in sign extend.[See here for changes.](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/1e877402444a762074fda79e7f45f6bc35892bf0)This reminds me that I should always be careful checking typing errors during coding.
3. The output RD of instruction memory should be separated into different inputs connected to register file instead of only 1 output. [See here for changes.](https://github.com/shuyuan-liu/iac_lab_4_group_34/commit/85c67df7ef0d54f0b992e4ef81d837004428bcf9) I learned how to write registers in a correct format.

Special design decision:
1. I sep up different numbers for flags such as Immformat and ALUsucB. Those numbers represent different conditions.
2. During writing of control unit, our team notice that we need to separate the output from PC and register file for some of the special instrutions like jalr. So we add a multiplexer connecting Program Counter and register( this is also mentioned by Jim and Boyan's statements). There is also an unused line that connects from PC to RD1 and an unused multiplexer. They should be used to serve auipc.

What I might do differently
1. Try to finish programs earlier toget advices from GTA.
2. Write down the plan on notebook first before designing in order to save time for thinking.
3. Learn to use GTKwave more effectively to help testing.
