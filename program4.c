#include <stdio.h>

int main() {
    float distance1 = 120.0;
    float time1 = 2.0;
    float distance2 = 80.0;
    float time2 = 1.0;

    float total_distance = distance1 + distance2;
    float total_time = time1 + time2;

    float average_speed = total_distance / total_time;

    printf("Average speed: %.2f km/h\n", average_speed);

    return 0;
}
