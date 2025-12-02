//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    int i, last = 0;

    fgets(str, sizeof(str), stdin);

    if (str[0] != ' ')
        printf("%c.", str[0]);

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n')
            printf("%c.", str[i+1]), last = i + 1;
    }

    printf(" %s", &str[last]);
}