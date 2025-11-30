// Q26: Write a program to print numbers from 1 to n.
#include <stdio.h>

int main()
{

    int n, i;

    printf("Enter the number upto which you want all the numbers to be printed: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i = i + 1)
    {
        printf("%d\n", i);
    }
    return 0;
}