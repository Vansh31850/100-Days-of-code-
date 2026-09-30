/*count the vovels and consonants in a string */
#include <stdio.h>
int main() {
    char string[]="problem solving is an useless subject";
    int vovels=0,consonants=0; /*take original value as 0 so that it can be added on*/
    for (int i = 0; string[i] != '\0'; i++) { /*run the loop till null*/
        char ch = string[i]; /*this takes the single character from the loop*/
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {  /*takes the vowels and adds one*/
            vovels++; 
        }
        else if (ch == ' ') {} /*ignores spaces*/
        
        else { /*coutns everythign else */
            consonants++;
        }
    }
    printf("String: \"%s\"\n", string);
    printf("Vovels: %d\n", vovels);
    printf("Consonants: %d\n", consonants);

    return 0;
}