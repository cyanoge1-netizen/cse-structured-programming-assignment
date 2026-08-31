#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Input the first integer: ");
    scanf("%d", &a);
    printf("Input the second integer: ");
    scanf("%d", &b);
    printf("Input the third integer: ");
    scanf("%d", &c);

    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("Maximum value of three integers: %d\n", max);

    return 0;
}
