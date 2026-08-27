//Q30: Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int n, revnum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d",&n);

    while (n != 0)
    {
        remainder = n % 10;
        revnum = revnum * 10 + remainder;
        n = n / 10;
    }
    printf("%d",revnum);

return 0;
    
}