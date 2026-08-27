//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    
    printf("Enter a number: ");
    scanf("%d",&num);

    originalNum = num ;

        do
        {
            originalNum /= 10;
            n++;
        } while (originalNum != 0);

    originalNum = num ;

    do
    {
        remainder = originalNum % 10;
        //result += pow(remainder,n);
        int power = 1;

            for (int i = 0; i < n; i++)
            {
                power *= remainder;
            }

            result += power;

        originalNum /= 10;
    } while (originalNum != 0);
    
    if (result == num)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
    
return 0;   
    
}