#include <stdio.h>

int main(void) {
    int num = -28;

    printf("Input Value: %d\n", num);

    // Check sign
    if (num > 0) {
        printf("Sign       : Positive number\n");
    } else if (num < 0) {
        printf("Sign       : Negative number\n");
    } else {
        printf("Sign       : Zero\n");
    }

    // Check parity
    if (num % 2 == 0) {
        printf("Parity     : Even\n");
    } else {
        printf("Parity     : Odd\n");
    }

    return 0;
}
