#include <stdio.h>

/**
 * W3Schools C Tutorial: Multidimensional Arrays (2D Matrices)
 * Concept: Declaring, initializing, and traversing a 2D array with nested loops.
 */
int main(void) {
    int matrix[2][3] = {
        {1, 4, 2},
        {3, 6, 8}
    };

    printf("Matrix elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
