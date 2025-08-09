#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter three integers: ");
    scanf("%f %f %f", &a, &b, &c);
    a = b;
    b = c;
    c = a;
    printf("After swapping: a = %f, b = %f, c = %f\n", a, b, c);
    return 0;
}
