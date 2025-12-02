//Q51: Write a program to print the following pattern:
/*  
    5
   45
  345
 2345
12345
*/
#include <stdio.h>
void main() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    for (int i = a; i >= 1; i--) {
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        for (int j = i; j <= a; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}
