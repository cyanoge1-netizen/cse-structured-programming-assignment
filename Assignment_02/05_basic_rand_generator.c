#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;

    printf("=== Default Pseudo-Random Generation (Unseeded) ===\n");
    printf("RAND_MAX on this platform: %d\n\n", RAND_MAX);
    printf("Generating 5 pseudo-random numbers using rand():\n");

    for (i = 1; i <= 5; i++) {
        int r = rand();
        printf("  Value %d: %d\n", i, r);
    }

    printf("\nNote: Without srand(), the default seed is 1,\n");
    printf("producing the identical sequence on every program execution.\n");

    return 0;
}
