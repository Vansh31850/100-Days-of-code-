/*
Q22: Write a program to find profit or loss percentage given cost price and selling price.
*/

#include <stdio.h>

int main() {
    double cp, sp, diff, percent;
    
    if (scanf("%lf %lf", &cp, &sp) == 2) {
        if (sp > cp) {
            diff = sp - cp;
            percent = (diff / cp) * 100;
            printf("Profit %.0f%%\n", percent);
        } else if (cp > sp) {
            diff = cp - sp;
            percent = (diff / cp) * 100;
            printf("Loss %.0f%%\n", percent);
        } else {
            printf("No Profit No Loss\n");
        }
    }
    
    return 0;
}