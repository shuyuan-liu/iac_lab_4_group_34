Extension: Add bits to 8. If opsitive signed, 00000. If negative, FFFFF.
RegWrite: 1 for add, 0 for branch,
ALUCtrl: 0 sum two number, 1 minus. If =0, EQ =1.
ALUSrc: 0 normal, 1 immediate.
OP=51 R-type.
Imm Src: sign extend?
PCSrc: Pc+Imm or PC?