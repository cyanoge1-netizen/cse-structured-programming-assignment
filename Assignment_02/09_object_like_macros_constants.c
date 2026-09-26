#include <stdio.h>

/* Object-like macros defining symbolic constants */
#define PI 3.141592653589793
#define APP_NAME "SEC Scientific Geometry Toolkit"
#define MAX_BUFFER_SIZE 128
#define DEFAULT_RADIUS 5.0
#define DEFAULT_HEIGHT 12.0

int main(void) {
    char title_buffer[MAX_BUFFER_SIZE];
    double radius = DEFAULT_RADIUS;
    double height = DEFAULT_HEIGHT;

    double circle_area = PI * radius * radius;
    double circle_circumference = 2.0 * PI * radius;
    double cylinder_volume = PI * radius * radius * height;

    /* Fill title using preprocessor constant */
    snprintf(title_buffer, sizeof(title_buffer), "System: %s", APP_NAME);

    printf("=== Preprocessor Object-Like Macros Demo ===\n");
    printf("%s\n\n", title_buffer);
    printf("Constant PI          : %.15f\n", PI);
    printf("Max Buffer Size      : %d bytes\n\n", MAX_BUFFER_SIZE);
    printf("Geometric Calculations (Radius = %.2f, Height = %.2f):\n", radius, height);
    printf("  Circle Area        : %.4f sq units\n", circle_area);
    printf("  Circumference      : %.4f units\n", circle_circumference);
    printf("  Cylinder Volume    : %.4f cubic units\n", cylinder_volume);

    return 0;
}
