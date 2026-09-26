#include <stdio.h>

int main(void) {
    int items = 45;
    float cost_per_item = 8.75f;
    char currency = '$';

    float total_cost = items * cost_per_item;

    printf("--- Purchase Summary ---\n");
    printf("Quantity      : %d\n", items);
    printf("Unit Price    : %c%.2f\n", currency, cost_per_item);
    printf("Total Amount  : %c%.2f\n", currency, total_cost);

    return 0;
}
