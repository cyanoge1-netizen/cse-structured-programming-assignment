#include <stdio.h>

int main(void) {
    int student_id = 43;
    float cgpa = 3.85f;
    double exact_pi = 3.141592653589793;
    char section_grade = 'A';

    printf("Student ID : %d\n", student_id);
    printf("CGPA       : %.2f\n", cgpa);
    printf("Double PI  : %.8lf\n", exact_pi);
    printf("Grade      : %c\n", section_grade);

    return 0;
}
