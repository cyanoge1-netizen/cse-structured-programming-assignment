#include <stdio.h>

int main(void) {
    int n = 7;

    printf("Multiplication Table for %d:\n", n);
    printf("---------------------------\n");

    for (int i = 1; i <= 10; i++) {
        printf("%2d x %2d = %3d\n", n, i, n * i);
    }

    return 0;
}
