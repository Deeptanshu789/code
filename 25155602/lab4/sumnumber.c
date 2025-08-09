#include <stdio.h>

int main()
{
    int number, a, b, c;
    printf("Enter a three digit number:");
    scanf("%d", &number);
    a = number/100;
    b = (number % 100) / 10;
    c = number % 10;
    printf("The sum of the digits of a three digits number:%d", a+b+c);
    return 0;

}
