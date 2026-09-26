#include <stdio.h>

int main(void) {
    int x = 10;
    int y = 20;

    printf("Comparison Results (1 = True, 0 = False):\n");
    printf("x == y : %d\n", x == y);
    printf("x != y : %d\n", x != y);
    printf("x < y  : %d\n", x < y);
    printf("x >= y : %d\n", x >= y);

    printf("\nMemory Size (Bytes):\n");
    printf("sizeof(char)   : %zu byte(s)\n", sizeof(char));
    printf("sizeof(int)    : %zu byte(s)\n", sizeof(int));
    printf("sizeof(float)  : %zu byte(s)\n", sizeof(float));
    printf("sizeof(double) : %zu byte(s)\n", sizeof(double));

    return 0;
}
