#include <stdio.h>

int main(void) {
    int max_score = 500;
    int obtained_score = 423;

    // Explicit type conversion prevents integer division truncation
    float percentage = ((float)obtained_score / max_score) * 100.0f;

    printf("Total Marks    : %d\n", max_score);
    printf("Obtained Marks : %d\n", obtained_score);
    printf("Percentage     : %.2f%%\n", percentage);

    return 0;
}
