// Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main()
{

    int n;
    int sum = 0;
    int i, a;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    a = 1;

    for (i = 0; i < n; i++)
    {
        sum += a;
        a = a + 2;
        printf("%d\n", (a-2));  
    }

    printf("The sum of first %d odd numbers = %d", n, sum);
    return 0;
}
