#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;              // ціле ділення на 3600 секунд
    minutes = (total_seconds % 3600) / 60;     // залишок від ділення на 3600, потім ділимо на 60
    seconds = total_seconds % 60;              // залишок секунд

    printf("%d seconds = %d hour(s), %d minute(s), %d second(s)\n", total_seconds, hours, minutes, seconds);

    return 0;
}
