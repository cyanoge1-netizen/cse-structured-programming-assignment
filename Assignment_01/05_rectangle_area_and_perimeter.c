#include <stdio.h>

int main(void) {
    int length = 12;
    int width = 7;

    int area = length * width;
    int perimeter = 2 * (length + width);

    printf("Rectangle Dimensions:\n");
    printf("Length    : %d units\n", length);
    printf("Width     : %d units\n", width);
    printf("Area      : %d sq units\n", area);
    printf("Perimeter : %d units\n", perimeter);

    return 0;
}
