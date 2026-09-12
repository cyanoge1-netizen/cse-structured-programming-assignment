#include <stdio.h>

/**
 * W3Schools C Tutorial: Constants Real-Life Example
 * Concept: Computing geometric properties using mathematical constants.
 */
int main(void) {
    const float PI = 3.14159265f;
    float radius = 5.0f;

    float area = PI * radius * radius;
    float circumference = 2.0f * PI * radius;

    printf("Circle Radius        : %.2f units\n", radius);
    printf("Circle Area          : %.2f sq units\n", area);
    printf("Circle Circumference : %.2f units\n", circumference);

    return 0;
}
