#include <stdio.h>

int main(void) {
    const float PI = 3.14159265f;
    const int MINUTES_PER_HOUR = 60;
    float radius = 5.5f;

    float circumference = 2.0f * PI * radius;
    float area = PI * radius * radius;

    printf("Time Constant     : %d minutes in an hour\n", MINUTES_PER_HOUR);
    printf("Circle Radius     : %.2f\n", radius);
    printf("Circumference     : %.4f\n", circumference);
    printf("Area              : %.4f\n", area);

    return 0;
}
