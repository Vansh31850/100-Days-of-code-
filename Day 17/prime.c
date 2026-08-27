//Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d",&n);

    i = 2;

    while (i <= n - 1)
    {
        if (n % i == 0)
        {
            printf("Not prime");
            break;
        }    
    i++;
    }
        if (i == n)
        {
            printf("Prime");
        }

    return 0;
    
}