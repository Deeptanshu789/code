#include <stdio.h>
 int main() {
 float num1, num2, addition, subtraction, multiplication, division;
 printf("enter the number:");
 scanf("%f %f", &num1, &num2);
 addition = num1 + num2;
 subtraction = num1 - num2;
 multiplication = num1*num2;
 division = num1/num2;
 printf("addition = %.2f\n", addition);
 printf("subtraction = %.2f\n", subtraction);
 printf("multiplication = %.2f\n", multiplication);
 printf("division = %.2f\n", division);
 return 0;
}
