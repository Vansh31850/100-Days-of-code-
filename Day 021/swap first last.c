//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, first, last, temp, div = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    temp = num;
    while (temp >= 10)
    {
        temp /= 10;
        div *= 10;
    }

    first = temp;

    num = last * div + (num % div) / 10 * 10 + first;

    printf("Number after swapping = %d", num);

return 0;

}