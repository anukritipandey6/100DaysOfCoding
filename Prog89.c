//Q89: Count frequency of a given character in a string.
#include <stdio.h>
void main() {
    char str[50];
    printf("enter word: ");
    scanf("%s", str);

    char a;
    printf("enter letter u want to check: ");
    scanf(" %c", &a); 

    int count = 0, count1 = 0;
    while (str[count] != '\0') {
        if (str[count] == a) {
            count1++;
        }
        count++;
    }

    printf("%d", count1);
}
