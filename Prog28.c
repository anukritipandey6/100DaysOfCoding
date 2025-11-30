// Q28: Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main()
{

    int n;
    int product = 1;
    int i, a;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    a = 2;

    for (i = 0; i < n; i++)
    {
        product = product * a;
        a = a + 2;
        printf("%d\n", (a-2));  
    }

    printf("The product of first %d odd numbers = %d", n, product);
    return 0;
}
