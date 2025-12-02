//Q93: Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

void main() {
    char s1[100], s2[100];
    int count1[256] = {0}, count2[256] = {0}, i;

    scanf("%s", s1);
    scanf("%s", s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not anagrams");
        return;
    }

    for (i = 0; s1[i] != '\0'; i++) count1[s1[i]]++;
    for (i = 0; s2[i] != '\0'; i++) count2[s2[i]]++;

    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("Not anagrams");
            return;
        }
    }

    printf("Anagrams");
}
