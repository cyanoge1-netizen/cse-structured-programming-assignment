#include <stdio.h>

int main(void) {
    int x = 15;
    int y = 25;
    int sum = x + y;

    printf("Initial values: x = %d, y = %d\n", x, y);
    printf("Sum = %d\n", sum);

    // Reassigning values
    x = 50;
    y = 70;
    sum = x + y;

    printf("Updated values: x = %d, y = %d\n", x, y);
    printf("Updated sum = %d\n", sum);

    return 0;
}
