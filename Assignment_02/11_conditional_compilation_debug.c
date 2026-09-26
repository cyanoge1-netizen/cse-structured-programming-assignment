#include <stdio.h>

/* Toggle debug mode by defining or undefining DEBUG_MODE */
#define DEBUG_MODE 1

/* Conditional logger macro */
#ifdef DEBUG_MODE
    #define LOG_DEBUG(fmt, ...) \
        printf("[DEBUG %s:%d] " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#else
    #define LOG_DEBUG(fmt, ...) /* No-op in release mode */
#endif

/* Fallback default value using #ifndef */
#ifndef MAX_CONNECTIONS
    #define MAX_CONNECTIONS 100
#endif

int main(void) {
    int active_users = 42;

    printf("=== Conditional Compilation Directives ===\n\n");

#ifdef DEBUG_MODE
    printf("Status: DEBUG_MODE is active.\n");
#else
    printf("Status: RELEASE_MODE is active (debug diagnostics disabled).\n");
#endif

    LOG_DEBUG("Verifying active connection limits (current = %d)", active_users);
    LOG_DEBUG("Configured MAX_CONNECTIONS default: %d", MAX_CONNECTIONS);

    if (active_users < MAX_CONNECTIONS) {
        printf("System Health: Normal load within configured threshold.\n");
    }

#if defined(DEBUG_MODE) && (DEBUG_MODE > 0)
    LOG_DEBUG("Diagnostic test complete with zero runtime anomalies.");
#endif

    return 0;
}
