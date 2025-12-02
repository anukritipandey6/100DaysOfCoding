//Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char s[1000];
    int f[26] = {0};
    scanf("%s", s);
    for(int i = 0; s[i]; i++) {
        int k = s[i] - 'a';
        f[k]++;
        if(f[k] == 2) {
            printf("%c", s[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}