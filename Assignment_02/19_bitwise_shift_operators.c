#include <stdio.h>

void print_bin8(unsigned char val) {
    int i;
    for (i = 7; i >= 0; i--) {
        printf("%d", (val >> i) & 1);
        if (i == 4) printf(" ");
    }
}

int main(void) {
    unsigned char num_left = 3;   /* 0000 0011 */
    unsigned char num_right = 48; /* 0011 0000 */
    int shift;

    printf("=== C Bitwise Operators: Left Shift (<<) & Right Shift (>>) ===\n\n");

    /* 1. Left Shift: Equivalent to multiplication by 2^shift */
    printf("1. Left Shift (a << shift) -> Multiplies by 2^k:\n");
    printf("  Initial value: %3u -> Binary: ", num_left);
    print_bin8(num_left);
    printf("\n");

    for (shift = 1; shift <= 3; shift++) {
        unsigned char shifted = (unsigned char)(num_left << shift);
        printf("  Shift << %d   : %3u -> Binary: ", shift, shifted);
        print_bin8(shifted);
        printf("  (Formula: %u * 2^%d = %u)\n", num_left, shift, num_left * (1 << shift));
    }

    printf("\n2. Right Shift (a >> shift) -> Integer division by 2^k:\n");
    printf("  Initial value: %3u -> Binary: ", num_right);
    print_bin8(num_right);
    printf("\n");

    for (shift = 1; shift <= 3; shift++) {
        unsigned char shifted = (unsigned char)(num_right >> shift);
        printf("  Shift >> %d   : %3u -> Binary: ", shift, shifted);
        print_bin8(shifted);
        printf("  (Formula: %u / 2^%d = %u)\n", num_right, shift, num_right / (1 << shift));
    }

    return 0;
}
