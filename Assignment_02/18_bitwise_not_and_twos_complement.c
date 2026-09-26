#include <stdio.h>

/* Helper function to display an 8-bit integer in binary representation */
void print_bin8(unsigned char val) {
    int i;
    for (i = 7; i >= 0; i--) {
        printf("%d", (val >> i) & 1);
        if (i == 4) printf(" ");
    }
}

int main(void) {
    int signed_val = 5;
    int signed_not = ~signed_val;

    unsigned char byte_val = 5;         /* 0000 0101 */
    unsigned char byte_not = (unsigned char)(~byte_val); /* 1111 1010 */

    printf("=== C Bitwise Operators: NOT (~) & Two's Complement ===\n\n");

    /* 1. Unsigned Bit Inversion (One's Complement) */
    printf("1. Unsigned 8-Bit Inversion:\n");
    printf("   byte_val     : %3u  ->  Binary: ", byte_val);
    print_bin8(byte_val);
    printf("\n");

    printf("  ~byte_val     : %3u  ->  Binary: ", byte_not);
    print_bin8(byte_not);
    printf("  (all bits inverted 0 <-> 1)\n\n");

    /* 2. Signed Integer Inversion (Two's Complement) */
    printf("2. Signed Integer Two's Complement Representation:\n");
    printf("   signed_val   : %d\n", signed_val);
    printf("  ~signed_val   : %d\n", signed_not);
    printf("   Mathematical Law: ~x == -(x + 1) in Two's Complement arithmetic.\n");
    printf("   Verification    : -(5 + 1) = %d\n", -(signed_val + 1));

    return 0;
}
