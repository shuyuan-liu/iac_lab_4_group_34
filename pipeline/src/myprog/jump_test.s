addi t0, x0, 0x20  # address of target3
addi t1, x0, 0x28  # address of target4

j target1   # Jump to target 1 without storing return address
nop         # This should be skipped
target1:

jal target2 # Jump to target 2, storing return address in x1
nop         # This should be skipped
target2:

jr t0       # Jump to 0(t0) -> target3 without storing return address
nop         # This should be skipped
target3:

jalr t1     # Jump to 0(t1) -> target4, storing return address in x1
nop         # This should be skipped
target4:

addi a0, x0, 1  # Signal we are done

halt:
j halt
