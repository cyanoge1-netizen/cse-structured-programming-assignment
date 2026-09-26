#include <stdio.h>

int main(void) {
    int count = 1;

    printf("Executing do-while loop:\n");
    do {
        printf("Iteration pass: %d\n", count);
        count++;
    } while (count <= 5);

    // Guaranteed single pass demonstration
    int single_run = 10;
    printf("\nGuaranteed single pass check (condition false from start):\n");
    do {
        printf("Runs at least once, single_run = %d\n", single_run);
        single_run++;
    } while (single_run < 5);

    return 0;
}
