nop
addi t0, x0, 0x20  # address of target3
addi t1, x0, 0x28  # address of target4

nop
nop
nop
nop
j target1   # Jump to target 1 without storing return address JAL C
nop         # This should be skipped
nop
nop
nop         # This should be skipped
nop
nop
target1: # 24
nop
nop
nop
nop

jal target2 # Jump to target 2, storing return address in x1
nop         # This should be skipped
nop         # This should be skipped
nop
nop         # This should be skipped
nop
nop
target2:
nop
nop
nop
nop
jr t0       # Jump to 0(t0) -> target3 without storing return address
nop         # This should be skipped
nop
nop        # This should be skipped
nop         # This should be skipped
nop
nop
target3:
nop
nop
nop
nop
jalr t1     # Jump to 0(t1) -> target4, storing return address in x1
nop         # This should be skipped
nop         # This should be skipped
nop
nop         # This should be skipped
nop
nop
target4:
nop
nop
nop
nop
addi a0, x0, 1  # Signal we are done

halt:
j halt
