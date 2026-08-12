/*
Question: Write a program to input two numbers and display their sum, difference, product, and quotient.
Division by zero should be handled carefully.
*/

#include <stdio.h>

int main() {
    int num1, num2; 
    scanf("%d %d", &num1, &num2);
    if (num2 != 0) {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", 
               num1 + num2, num1 - num2, num1 * num2, num1 / num2);
    } else {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=Undefined (Division by zero)\n", 
               num1 + num2, num1 - num2, num1 * num2);
    }

    return 0;
}