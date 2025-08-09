#include <stdio.h>

 int main() {
 float num1, num2, num3, num4, num5, average;
 printf("Enter the numbers:");
 scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
 average = (num1 + num2 + num3 + num4 + num5) / 5;
 printf("the average of 5 numbers = %.3f", average);
 return 0;
}
