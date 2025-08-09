#include <stdio.h>

int main() {
    int hours, minutes, seconds;
    printf("Enter time in hours and minutes (HH MM SS): ");
    scanf("%d %d %d", &hours, &minutes, &seconds);
    printf("Time in 12-hour format: %d:%02d:%d %s\n", (hours % 12 == 0) ? 12 : hours % 12, minutes, seconds, (hours < 12) ? "AM" : "PM");
    return 0;
}
