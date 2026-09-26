#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i;
    time_t seed_value = time(NULL);

    /* Initialize pseudo-random number generator with current epoch time */
    srand((unsigned int)seed_value);

    printf("=== Seeded Pseudo-Random Number Generation ===\n");
    printf("Generator Seed : %lu (current time)\n\n", (unsigned long)seed_value);
    printf("Generated sequence of 5 pseudo-random integers:\n");

    for (i = 1; i <= 5; i++) {
        printf("  [%d] %d\n", i, rand());
    }

    printf("\nPedagogical Note:\n");
    printf("- srand() must be called ONCE at the start of execution.\n");
    printf("- Re-seeding inside loops resets the sequence to identical values\n");
    printf("  if iterations occur within the same second.\n");

    return 0;
}
