//Q86: Check if a string is a palindrome.
#include <stdio.h>

void main() {
    char str[50];
    printf("enter string: ");
    scanf("%s", str);

    int count = 0;
    while (str[count] != '\0') {
        count++;
    }

    int flag = 1;            
    for (int i = 0, j = count - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;         
            break;
        }
    }

    if (flag == 1)
        printf("palindrome");
    else
        printf("not palindrome");
}