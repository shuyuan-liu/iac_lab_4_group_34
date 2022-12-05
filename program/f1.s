# This program turns on 8 lights one by one with a fixed delay in between, then
# waits a random amount of time before turning all lights off simultaneously.

# Function of registers:
# a0: lights (lowest 8 bits)
# a1: random number returned by the `rand` subroutine
# t0: delay counter in `main`

.equ LIGHT_UP_INTERVAL, 10 # The delay between turning on each light
.equ BREAK_INTERVAL, 50    # The time to wait before starting new cycle after the lights go off
.equ TAPS, 0xB4            # Feedback term used by the LFSR

.text

li a0, 0    # Turn off all lights to start with
li s0, 1    # Initialise the LFSR with seed 1
li s1, 0xFF # Constant 0xFF used in comparisons

main_loop:

    light_up_loop:

        # Turn on one more light
        slli a0, a0, 1
        ori a0, a0, 1

        # Wait before turning on the next light
        li a2, LIGHT_UP_INTERVAL
        jal delay

        # Exit loop when all lights are on
        bne a0, s1, light_up_loop

    # Wait a randem amount of time, then turn all lights off
    jal rand
    mv a2, a1
    jal delay

    # Random wait done; turn all lights off
    li a0, 0

    # Wait before starting the next light cycle
    li a2, BREAK_INTERVAL
    jal delay

    j main_loop

# Delay (2x) a specified number of cycles passed in a2
delay:
    # t0: delay counter
    mv t0, a2
    delay_loop:
        addi, t0, t0, -1
        bnez t0, delay_loop
    ret

# Generate a 8-bit random number using a linear feedback shift register
# Shift register stored in s0; return value is in a1
# s0 must be initialized to a non-zero value before the first call
rand:
    # t0: the bits to be XOR'd extracted from the shift register
    # t1: parity of t0, = XOR of the extracted bits.
    # t2: temporary to hold t0 - 1 while calculating parity

    andi t0, s0, TAPS

    li t1, 0
    parity_loop:
        # See http://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan for parity algorithm
        beq t0, zero, rand_finish
        xori t1, t1, 1
        addi t2, t0, -1
        and t0, t0, t2
        j parity_loop

    rand_finish:
        mv a1, s0

        # Shift the register and add in the new bit 0 held by t1
        slli s0, s0, 1
        andi s0, s0, 0xFF
        or s0, s0, t1

        ret
