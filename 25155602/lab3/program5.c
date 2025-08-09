#include <stdio.h>
 int main() {
float principal, rate, time, interest;
printf("Enter the principal, rate, time:");
scanf("%f %f %f", &principal, &rate, &time);
interest  = (principal * rate * time ) / 100;
printf("Simple interst = %0.6f\n", interest);
return 0;
}
