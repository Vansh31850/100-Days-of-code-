//Q38: Write a program to find the sum of digits of a number.

// Program to find the sum of digits of a number

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;   // Extract the last digit
        sum += digit;       // Add the digit to sum
        num /= 10;          // Remove the last digit
    }

    printf("%d", sum);

return 0;

}