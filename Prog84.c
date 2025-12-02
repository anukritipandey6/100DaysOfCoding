//Q84: Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

void main() {
    char str[50];
    int i = 0;

    printf("enter string: ");
    scanf("%s", str);    

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  
        }
        i++;
    }

    printf("uppercase string: %s", str);
}