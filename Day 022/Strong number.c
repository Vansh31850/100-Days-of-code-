//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int n, remainder, originalNum, sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d",&n);

    originalNum = n;

    while (n != 0)
    {
        remainder = n % 10;
        fact = 1;
            for (int i = 1; i <= remainder; i++)
            {
                fact *= i;
            }
        sum += fact;
        n = n / 10;    
    }
    
    if (sum == originalNum)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not strong number");
    }

return 0;
    
}