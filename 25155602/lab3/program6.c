#include <stdio.h>
 int main() {
 float celcius, farenheit;
 printf("enter the temperatur:");
 scanf("%f", &celcius);
 farenheit = (celcius * 9) / 5 + 32;
 printf("%f celcius = %f farenheit\n", celcius, farenheit);
 return 0;
}
