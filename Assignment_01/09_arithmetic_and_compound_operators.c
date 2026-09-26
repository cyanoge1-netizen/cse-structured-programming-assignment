#include <stdio.h>

int main(void) {
    int a = 20;
    int b = 6;

    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d (integer division)\n", a / b);
    printf("a %% b = %d (remainder)\n", a % b);

    // Increment and compound assignment
    int count = 10;
    count++;
    printf("count after ++ : %d\n", count);
    count += 5;
    printf("count after += 5 : %d\n", count);
    count *= 2;
    printf("count after *= 2 : %d\n", count);

    return 0;
}
