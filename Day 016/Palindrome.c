//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int n, original, revnum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d",&n);

    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        revnum = revnum * 10 + remainder;
        n = n / 10;
    }

        if (original == revnum)
        {
            printf("Palindrome");
        }
        else
        {
            printf("Not a palindrome");
        }
        

return 0;
    
}