#include <stdio.h>

int main(void) {
    printf("Counting from 0 to 100 in steps of 10:\n");
    for (int i = 0; i <= 100; i += 10) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Powers of 2 up to 1024:\n");
    for (int p = 1; p <= 1024; p *= 2) {
        printf("%d ", p);
    }
    printf("\n");

    return 0;
}
