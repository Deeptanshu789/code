#include <stdio.h>
 int main() { 
 float number, square, cube;
 printf("enter the number:");
 scanf("%f", &number);
 square = number * number;
 cube = number * number * number;
 printf("square = %.2f\n", square);
 printf("cube = %.2f\n", cube);
 return 0;
}
