#include <stdio.h>

int main()
{
    int distance, m, km;
    printf("Enter distance in meters:");
    scanf("%d", &distance);
    km = distance / 1000;
    m = distance % 1000;
    printf("%d meters = %d kilometers + %d meters", distance, km, m);
    return 0;

}
