#include <stdio.h>

int main() {
    float radius = 6.0;
    float pi = 3.14159;

    float perimeter = 2 * pi * radius;
    float area = pi * radius * radius;

    printf("Perimeter of the Circle = %f inches\n", perimeter);
    printf("Area of the Circle = %f square inches\n", area);

    return 0;
}
