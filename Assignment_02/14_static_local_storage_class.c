#include <stdio.h>

/* Regular local variable: Reallocated and reinitialized on every function call */
void standard_counter(void) {
    int count = 0;
    count++;
    printf("  standard_counter(): count = %d\n", count);
}

/* Static local variable: Initialized once, retains value across invocations */
void static_counter(void) {
    static int count = 0;
    count++;
    printf("  static_counter()  : count = %d\n", count);
}

/* Practical application: Cumulative account balance ledger */
double process_transaction(double amount) {
    static double total_balance = 1000.00; /* Initial opening balance */
    total_balance += amount;
    return total_balance;
}

int main(void) {
    int i;

    printf("=== C Storage Classes: 'static' Specifier ===\n\n");

    printf("1. Standard local variable vs Static local variable:\n");
    for (i = 1; i <= 3; i++) {
        printf("Iteration %d:\n", i);
        standard_counter();
        static_counter();
    }

    printf("\n2. Real-World Application: Cumulative Bank Account Balance:\n");
    printf("  Deposit  $250.50 -> New Balance: $%.2f\n", process_transaction(250.50));
    printf("  Deposit  $120.00 -> New Balance: $%.2f\n", process_transaction(120.00));
    printf("  Withdraw $85.75  -> New Balance: $%.2f\n", process_transaction(-85.75));

    return 0;
}
