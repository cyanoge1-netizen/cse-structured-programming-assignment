#include <stdio.h>

/* Declaration of external variables defined in 16_extern_storage_class_data.c */
extern int global_system_code;
extern int active_user_count;
extern void increment_user_count(void);

int main(void) {
    printf("=== C Storage Classes: 'extern' Specifier ===\n\n");
    printf("Accessing external global variables defined in separate source file:\n");
    printf("  Initial global_system_code : %d\n", global_system_code);
    printf("  Initial active_user_count  : %d\n\n", active_user_count);

    printf("Calling external function increment_user_count()...\n");
    increment_user_count();
    increment_user_count();

    printf("  Updated active_user_count  : %d\n", active_user_count);

    /* Modifying external variable from main */
    global_system_code = 404;
    printf("  Modified global_system_code: %d\n", global_system_code);

    return 0;
}
