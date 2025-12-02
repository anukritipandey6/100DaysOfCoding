//Q88: Replace spaces with hyphens in a string.
#include <stdio.h>

void main() {
    char str[100];
    int i = 0;

    printf("enter string: ");
    fgets(str, 100, stdin);   // allows spaces

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';     // replace space
        }
        i++;
    }

    printf("output: %s", str);
}