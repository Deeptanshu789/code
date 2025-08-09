#include <stdio.h>
int main() {
    int num, reversed_num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    reversed_num = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
    printf("Reversed number: %d\n", reversed_num);
    return 0;
}

