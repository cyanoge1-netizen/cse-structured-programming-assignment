#include <stdio.h>

/* Helper function to display an 8-bit integer in binary representation */
void print_bin8(unsigned char val) {
    int i;
    for (i = 7; i >= 0; i--) {
        printf("%d", (val >> i) & 1);
        if (i == 4) printf(" "); /* Nibble separation */
    }
}

int main(void) {
    unsigned char a = 6; /* 0000 0110 */
    unsigned char b = 3; /* 0000 0011 */

    unsigned char res_and = a & b;
    unsigned char res_or  = a | b;
    unsigned char res_xor = a ^ b;

    printf("=== C Bitwise Operators: AND (&), OR (|), XOR (^) ===\n\n");

    printf("Operand a : %3d  ->  Binary: ", a);
    print_bin8(a);
    printf("\n");

    printf("Operand b : %3d  ->  Binary: ", b);
    print_bin8(b);
    printf("\n");
    printf("-----------------------------------------\n");

    /* Bitwise AND */
    printf("a & b     : %3d  ->  Binary: ", res_and);
    print_bin8(res_and);
    printf("  (1 only where both bits are 1)\n");

    /* Bitwise OR */
    printf("a | b     : %3d  ->  Binary: ", res_or);
    print_bin8(res_or);
    printf("  (1 where at least one bit is 1)\n");

    /* Bitwise XOR */
    printf("a ^ b     : %3d  ->  Binary: ", res_xor);
    print_bin8(res_xor);
    printf("  (1 where bits differ)\n");

    return 0;
}
