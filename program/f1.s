# Light output is the least significant byte in a0

.equ LIGHT_UP_INTERVAL, 100
.equ BREAK_INTERVAL, 2000

.text
li s0, 1 # Initialise the LFSR
main_loop:
    light_up_loop:
        li t0, LIGHT_UP_INTERVAL
        addi t0, t0, -1
        bnez t0, -1
        slli a0, a0, 1
        addi a0, a0, 1
        bne a0, 0xFF, light_up_loop
    jal rand
    mv t0, a1
    addi t0, t0, -1
    bnez t0, -1
    li a0, 0
    li t0, BREAK_INTERVAL
    addi t0, t0, -1
    bnez t0, -1
    j main_loop

# Generate a 8-bit random number using a linear feedback shift register
# Shift register stored in s0; return value in a1
# s0 must be initialized to a non-zero value before the first call
rand:
    .equ taps, 0xB4
    andi t0, s0, taps
    rand_
    beq t0, zero, rand_ret


    rand_ret:
        ret
