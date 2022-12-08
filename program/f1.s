# This program turns on 8 lights one by one with a fixed delay in between, then
# waits a random amount of time before turning all lights off simultaneously.

# Function of registers:
# a0: lights (lowest 8 bits)
# a1: random number returned by the `rand` subroutine
# a2: delay passed to the `delay` subroutine

.equ LIGHT_UP_INTERVAL, 10 # The delay between turning on each light
.equ BREAK_INTERVAL, 50    # The time to wait after lights go off before starting new cycle
.equ LFSR_MASK, 0x000F     # The bits to keep in the LFSR (e.g. 0x3F = 6-bit LFSR); other bits are discarded after each shift
.equ LFSR_TAPS, 0x0009     # Feedback term for the LFSR. For maximal-length taps see http://users.ece.cmu.edu/~koopman/lfsr/

li a0, 0    # Turn off all lights to start with
li s0, 1    # Initialise the LFSR with seed 1
li s1, 0xFF # Constant 0xFF used in comparisons

main_loop:

    light_up_loop:

        # Turn on one more light
        slli t0, a0, 1
        ori a0, t0, 1

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
    # t0: the bits to be XOR'd extracted from the shift register, = (LFSR_TAPS & LFSR)
    # t1: parity of t0, = XOR of the tapped bits.
    # t2: temporary register holding shifted versions of t0

    # Parity (XOR) algorithm: http://graphics.stanford.edu/~seander/bithacks.html#ParityParallel

    # Calculate the new lowest bit, = the XOR of the tapped bits, = the parity of the tapped word
    andi t0, s0, LFSR_TAPS

    srli t2, t0, 16
    xor t0, t2, t0
    srli t2, t0, 8
    xor t0, t2, t0
    srli t2, t0, 4
    xor t0, t2, t0
    srli t2, t0, 2
    xor t0, t2, t0
    srli t2, t0, 1
    xor t0, t2, t0

    andi t1, t0, 0x1

    # Shift the register and put in the new lowest bit from t1
    slli s0, s0, 1
    andi s0, s0, LFSR_MASK
    or s0, s0, t1

    # Return the newly generated value through a1
    mv a1, s0

    ret
