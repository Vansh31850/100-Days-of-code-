#Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

/*
Question: Write a program to convert temperature from Celsius to Fahrenheit.
*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("Fahrenheit=%.0f\n", fahrenheit);
    
    return 0;
}