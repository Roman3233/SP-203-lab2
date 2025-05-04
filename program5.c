#include <stdio.h>

int main() {
    int number, reversed;
    int digit1, digit2, digit3;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    digit1 = number / 100;          
    digit2 = (number / 10) % 10;     
    digit3 = number % 10;           

    reversed = digit3 * 100 + digit2 * 10 + digit1;

    printf("Reversed number: %d\n", reversed);

    return 0;
}
