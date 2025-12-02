// Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main()
{
    int num, digit;
    int product = 1;

    printf("Enter a number :");
    scanf("%d", &num);

    do
    {
        digit = num % 10;

        if (digit % 2 != 0)
        {
            product = product * digit;
        }

        else if (digit % 2 == 0)
        {
            product = product * 1;
        }

        num = num / 10;

    }

    while (num > 0);

    printf("product is %d", product);
    return 0;
}