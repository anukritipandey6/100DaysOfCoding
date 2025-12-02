//Q85: Reverse a string.
#include <stdio.h>

void main() {
    char str[50];
    printf("enter string: ");
    scanf("%s", str);

    char reverse[50];
    int count2 = 0;
  
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }

    for (int i = count - 1; i >= 0; i--) {
        reverse[count2] = str[i];
        count2++;
    }
    reverse[count2] = '\0';

    printf("reversed string: %s", reverse);
}
