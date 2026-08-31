#include <stdio.h>

int main() {
    char emp_id[11];
    double hours, rate, salary;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%10s", emp_id);

    printf("Input the working hrs: ");
    scanf("%lf", &hours);

    printf("Salary amount/hr: ");
    scanf("%lf", &rate);

    salary = hours * rate;

    printf("Employees ID = %s\n", emp_id);
    printf("Salary = U$ %.2lf\n", salary);

    return 0;
}
