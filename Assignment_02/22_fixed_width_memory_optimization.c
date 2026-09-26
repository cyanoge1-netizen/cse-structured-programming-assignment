#include <stdio.h>
#include <stdint.h>

/* Naive data structure using generic int types */
struct NaiveTelemetry {
    int battery_level; /* 0 - 100 */
    int sensor_status; /* 0 or 1 */
    int temperature;   /* -40 to 125 */
    int packet_id;     /* 1 - 65535 */
};

/* Memory-optimized structure using exact fixed-width types */
struct CompactTelemetry {
    uint8_t  battery_level; /* 1 byte: 0 to 100% fits in 0..255 */
    uint8_t  sensor_status; /* 1 byte: boolean flags */
    int16_t  temperature;   /* 2 bytes: temp in tenths of C (-400 to 1250) */
    uint16_t packet_id;     /* 2 bytes: sequence counter */
};

void draw_battery_bar(uint8_t percent) {
    int bars = (int)(percent / 10);
    int i;
    printf("[");
    for (i = 0; i < 10; i++) {
        if (i < bars) printf("#");
        else printf(" ");
    }
    printf("] %u%%\n", percent);
}

int main(void) {
    struct CompactTelemetry device_data = {
        .battery_level = 87,
        .sensor_status = 1,
        .temperature = 265, /* 26.5 C */
        .packet_id = 1042
    };

    printf("=== Real-Life Application: Embedded Memory Optimization ===\n\n");

    printf("1. Device Telemetry Readings:\n");
    printf("  Packet ID        : #%u\n", device_data.packet_id);
    printf("  Sensor Status    : %s\n", device_data.sensor_status ? "ONLINE (Active)" : "OFFLINE");
    printf("  Temperature      : %.1f C\n", device_data.temperature / 10.0);
    printf("  Battery Level    : ");
    draw_battery_bar(device_data.battery_level);

    printf("\n2. Memory Footprint Comparison:\n");
    printf("  sizeof(struct NaiveTelemetry)   : %lu bytes\n", sizeof(struct NaiveTelemetry));
    printf("  sizeof(struct CompactTelemetry) : %lu bytes\n", sizeof(struct CompactTelemetry));

    printf("\n3. Network / Buffer Scalability (100,000 packets):\n");
    printf("  Naive memory footprint    : %.2f KB\n", (100000.0 * sizeof(struct NaiveTelemetry)) / 1024.0);
    printf("  Compact memory footprint  : %.2f KB\n", (100000.0 * sizeof(struct CompactTelemetry)) / 1024.0);
    printf("  Efficiency Savings        : %.1f%% reduction\n",
           (1.0 - ((double)sizeof(struct CompactTelemetry) / (double)sizeof(struct NaiveTelemetry))) * 100.0);

    return 0;
}
