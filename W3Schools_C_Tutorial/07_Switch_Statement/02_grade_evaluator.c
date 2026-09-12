#include <stdio.h>

/**
 * W3Schools C Tutorial: Switch Statement with Case Grouping
 * Concept: Handling character cases and fallthrough grouping.
 */
int main(void) {
    char grade = 'B';

    switch (grade) {
        case 'A':
        case 'a':
            printf("Excellent performance!\n");
            break;
        case 'B':
        case 'b':
            printf("Well done! Good work.\n");
            break;
        case 'C':
        case 'c':
            printf("Satisfactory. Keep pushing!\n");
            break;
        case 'F':
        case 'f':
            printf("Failed. Please seek guidance and retake.\n");
            break;
        default:
            printf("Invalid grade entered.\n");
            break;
    }

    return 0;
}
