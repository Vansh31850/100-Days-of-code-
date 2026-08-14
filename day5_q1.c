#Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t, si, ci;

    scanf("%lf %lf %lf", &p, &r, &t);

    si = (p * r * t) / 100.0;
    ci = p * pow((1.0 + r / 100.0), t) - p;

    printf("Simple Interest=%g, Compound Interest=%g\n", si, ci);

    return 0;
}