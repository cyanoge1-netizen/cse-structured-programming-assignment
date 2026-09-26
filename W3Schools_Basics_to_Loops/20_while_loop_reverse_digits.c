#include <stdio.h>

int main(void) {
    int original_num = 12345;
    int temp = original_num;
    int reversed_num = 0;

    while (temp > 0) {
        int last_digit = temp % 10;
        reversed_num = reversed_num * 10 + last_digit;
        temp /= 10;
    }

    printf("Original Number : %d\n", original_num);
    printf("Reversed Number : %d\n", reversed_num);

    return 0;
}
