#include <stdio.h>

void demo_auto_scope(void) {
    auto int local_var = 10; /* 'auto' is optional; default for local variables */
    local_var += 5;
    printf("  Inside demo_auto_scope(): local_var = %d\n", local_var);
}

int main(void) {
    auto int x = 100;

    printf("=== C Storage Classes: 'auto' Specifier ===\n\n");
    printf("1. Local function scope:\n");
    demo_auto_scope();
    demo_auto_scope(); /* re-initialized each time */

    printf("\n2. Block-level scope and variable shadowing:\n");
    printf("  Outer block: x = %d\n", x);
    {
        auto int x = 500; /* Shadows outer x within this nested block */
        auto int inner_only = 999;
        printf("  Inner block: shadowed x = %d, inner_only = %d\n", x, inner_only);
    }
    printf("  Outer block restored: x = %d\n", x);

    return 0;
}
