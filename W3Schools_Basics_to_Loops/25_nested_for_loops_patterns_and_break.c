#include <stdio.h>

int main(void) {
    printf("1. 2D Coordinate Grid (3x3):\n");
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            printf("(%d,%d) ", row, col);
        }
        printf("\n");
    }

    printf("\n2. Right-Angled Triangle Pattern:\n");
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n3. Loop Control (break at 5, skip 3 with continue):\n");
    for (int k = 1; k <= 10; k++) {
        if (k == 3) {
            continue;
        }
        if (k == 6) {
            break;
        }
        printf("%d ", k);
    }
    printf("\n");

    return 0;
}
