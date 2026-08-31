#include <stdio.h>

int main() {
    double w1, w2, count1, count2;
    double avg;

    printf("Weight - Item1: ");
    scanf("%lf", &w1);
    printf("No. of item1: ");
    scanf("%lf", &count1);

    printf("Weight - Item2: ");
    scanf("%lf", &w2);
    printf("No. of item2: ");
    scanf("%lf", &count2);

    avg = ((w1 * count1) + (w2 * count2)) / (count1 + count2);
    printf("Average Value = %f\n", avg);

    return 0;
}
