#include <stdio.h>

int main(void) {
    int score = 78;
    int pass_mark = 40;

    const char *result = (score >= pass_mark) ? "PASSED" : "FAILED";

    int a = 45;
    int b = 62;
    int maximum = (a > b) ? a : b;

    printf("Exam Score : %d (Passing Mark: %d)\n", score, pass_mark);
    printf("Result     : %s\n", result);
    printf("Numbers    : %d, %d -> Maximum = %d\n", a, b, maximum);

    return 0;
}
