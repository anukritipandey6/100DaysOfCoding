//Q52: Write a program to print the following pattern:
/*
*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

void main() {
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == 9) {
            printf("*\n\n");
        }
        else if (i >= 2 && i <= 4) {
            printf("*\n");
            if (i == 4) printf("\n");
        }
        else if (i >= 5 && i <= 8) {
            printf("*\n");
        }
    }
}