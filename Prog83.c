//Q83: Count vowels and consonants in a string.
#include <stdio.h>

void main() {
    char str[50];
    printf("enter string: ");
    scanf("%s", str);

    int count = 0, vol = 0, cons = 0;

    while (str[count] != '\0') {        // fixed
        if ( str[count] == 'A' || str[count] == 'E' || str[count] == 'I' || 
             str[count] == 'O' || str[count] == 'U' || 
             str[count] == 'a' || str[count] == 'e' || str[count] == 'i' || 
             str[count] == 'o' || str[count] == 'u' ) 
        {
            vol++;
        } 
        else {
            cons++;
        }
        count++;   // IMPORTANT!!
    }

    printf("vowels: %d\n", vol);
    printf("consonants: %d\n", cons);
}