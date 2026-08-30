//Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int n, digits, product = 1;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
            digits = n % 10;
            n = n / 10;

            if (digits % 2 == 1)
            {
                product *= digits;
            }
        
    }
        printf("%d",product);

return 0;
    
}