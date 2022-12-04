# Light output is the least significant byte in a0

.equ LIGHT_UP_INTERVAL, 10
.equ BREAK_INTERVAL, 50
.equ TAPS, 0xB4

.text

li s0, 1    # Initialise the LFSR
li s1, 0xFF # Constant 0xFF used in comparisons

main_loop:
    light_up_loop:
        li t0, LIGHT_UP_INTERVAL
        delay_loop_light_up:
            addi t0, t0, -1
            bnez t0, delay_loop_light_up
        slli a0, a0, 1
        addi a0, a0, 1
        bne a0, s1, light_up_loop
    jal rand
    srli t0, a1, 4
    addi t0, t0, 10
    delay_loop_lights_off:
        addi t0, t0, -1
        bnez t0, delay_loop_lights_off
    li a0, 0
    li t0, BREAK_INTERVAL
    delay_loop_break:
        addi t0, t0, -1
        bnez t0, delay_loop_break
    j main_loop

# Generate a 8-bit random number using a linear feedback shift register
# Shift register stored in s0; return value in a1
# s0 must be initialized with a non-zero seed value before the first call
rand:
    # t0: masked ("tapped") bits to XOR
    # t1: parity of t0
    # t2: temporary holding t0 - 1 while calculating parity
    li t1, 0
    andi t0, s0, TAPS
    parity_loop:
        beq t0, zero, rand_finish
        xori t1, t1, 1
        addi t2, t0, -1
        and t0, t0, t2
        j parity_loop
    rand_finish:
        mv a1, s0
        slli s0, s0, 1
        andi s0, s0, 0xFF
        or s0, s0, t1
        ret
