#include <stdio.h>

/* Bitmask flag definitions using shift operations */
#define FLAG_READ   (1 << 0) /* 0001 (1) */
#define FLAG_WRITE  (1 << 1) /* 0010 (2) */
#define FLAG_EXEC   (1 << 2) /* 0100 (4) */
#define FLAG_ADMIN  (1 << 3) /* 1000 (8) */

void display_permissions(int perms) {
    printf("  [Perms: 0x%02X] ", perms);
    printf("Read: %s | ",   (perms & FLAG_READ)  ? "YES" : "NO ");
    printf("Write: %s | ",  (perms & FLAG_WRITE) ? "YES" : "NO ");
    printf("Exec: %s | ",   (perms & FLAG_EXEC)  ? "YES" : "NO ");
    printf("Admin: %s\n",   (perms & FLAG_ADMIN) ? "YES" : "NO ");
}

int main(void) {
    int user_permissions = 0;

    printf("=== Real-Life Application: Bitwise Permissions System ===\n\n");

    /* 1. Setting initial permissions (READ and WRITE) */
    printf("1. Granting READ and WRITE permissions (OR):\n");
    user_permissions |= (FLAG_READ | FLAG_WRITE);
    display_permissions(user_permissions);

    /* 2. Checking individual permissions (AND) */
    printf("\n2. Querying individual permissions (AND):\n");
    if (user_permissions & FLAG_READ) {
        printf("  -> User has permission to READ files.\n");
    }
    if (!(user_permissions & FLAG_EXEC)) {
        printf("  -> User does NOT have permission to EXECUTE files.\n");
    }

    /* 3. Adding EXEC permission */
    printf("\n3. Adding EXECUTE permission (OR):\n");
    user_permissions |= FLAG_EXEC;
    display_permissions(user_permissions);

    /* 4. Revoking WRITE permission (AND with NOT) */
    printf("\n4. Revoking WRITE permission (AND ~FLAG):\n");
    user_permissions &= ~FLAG_WRITE;
    display_permissions(user_permissions);

    /* 5. Toggling ADMIN permission (XOR) */
    printf("\n5. Toggling ADMIN permission ON (XOR):\n");
    user_permissions ^= FLAG_ADMIN;
    display_permissions(user_permissions);

    printf("   Toggling ADMIN permission OFF (XOR):\n");
    user_permissions ^= FLAG_ADMIN;
    display_permissions(user_permissions);

    return 0;
}
