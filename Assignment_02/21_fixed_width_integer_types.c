#include <stdio.h>
#include <stdint.h> /* Required for standard fixed-width integer types */

int main(void) {
    /* 8-bit integers (1 byte) */
    int8_t  s8  = -128;
    uint8_t u8  = 255;

    /* 16-bit integers (2 bytes) */
    int16_t  s16 = -32768;
    uint16_t u16 = 65535;

    /* 32-bit integers (4 bytes) */
    int32_t  s32 = -2147483647 - 1;
    uint32_t u32 = 4294967295U;

    /* 64-bit integers (8 bytes) */
    int64_t  s64 = -9223372036854775807LL - 1;
    uint64_t u64 = 18446744073709551615ULL;

    printf("=== C Fixed-Width Integer Types (<stdint.h>) ===\n\n");
    printf(" Type Name   | Size   | Minimum Value                | Maximum Value\n");
    printf("-------------+--------+------------------------------+-----------------------------\n");
    printf(" int8_t      | %lu byte | %-28d | %d\n",   sizeof(int8_t),   s8,  127);
    printf(" uint8_t     | %lu byte | %-28u | %u\n",   sizeof(uint8_t),  0,   u8);
    printf(" int16_t     | %lu B    | %-28d | %d\n",   sizeof(int16_t),  s16, 32767);
    printf(" uint16_t    | %lu B    | %-28u | %u\n",   sizeof(uint16_t), 0,   u16);
    printf(" int32_t     | %lu B    | %-28d | %d\n",   sizeof(int32_t),  s32, 2147483647);
    printf(" uint32_t    | %lu B    | %-28u | %u\n",   sizeof(uint32_t), 0U,  u32);
    printf(" int64_t     | %lu B    | %-28lld | %lld\n", sizeof(int64_t),  (long long)s64, (long long)9223372036854775807LL);
    printf(" uint64_t    | %lu B    | %-28llu | %llu\n", sizeof(uint64_t), 0ULL, (unsigned long long)u64);
    printf("-------------+--------+------------------------------+-----------------------------\n");

    return 0;
}
