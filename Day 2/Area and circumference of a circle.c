/*
Question: Write a program to calculate the area and circumference of a circle given its radius.
*/

#include <stdio.h>

int main() {
    float radius;
    float pi_area = 3.14159;
    float pi_circ = 3.14;  
    scanf("%f", &radius);
    printf("Area=%.2f, Circumference=%.2f\n", pi_area * radius * radius, 2 * pi_circ * radius);
    
    return 0;
}