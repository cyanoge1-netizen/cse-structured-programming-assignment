#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Generate a pseudo-random integer in the inclusive interval [min, max] */
int get_random_range(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main(void) {
    int i;
    srand((unsigned int)time(NULL));

    printf("=== Bounded Range Random Numbers ===\n\n");

    /* Range 1: Single-digit integers [0, 9] */
    printf("1. Ten values in range [0, 9] (rand() %% 10):\n  ");
    for (i = 0; i < 10; i++) {
        printf("%d ", rand() % 10);
    }
    printf("\n\n");

    /* Range 2: Percentile scores [1, 100] */
    printf("2. Five values in range [1, 100]:\n  ");
    for (i = 0; i < 5; i++) {
        printf("%d ", get_random_range(1, 100));
    }
    printf("\n\n");

    /* Range 3: Signed temperatures [-20, 45] */
    printf("3. Five temperature readings in range [-20, 45] Celsius:\n  ");
    for (i = 0; i < 5; i++) {
        printf("%d C  ", get_random_range(-20, 45));
    }
    printf("\n");

    return 0;
}
