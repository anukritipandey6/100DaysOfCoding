//Q97: Print the initials of a name.
#include <stdio.h>

void main() {
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    if (str[0] != ' ')
        printf("%c.", str[0]);

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n')
            printf("%c.", str[i+1]);
    }
}


