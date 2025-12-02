// Q43: Write a program to check if a number is a strong number.
#include <stdio.h>

int main()
{

    int num, digit, factorial, og_num;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    og_num = num;

    while (num > 0)
    {
        digit = num % 10;

        factorial = digit;
        for (int i = 1; i < digit ; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;

        num = num / 10;
    }

    if (sum == og_num)
    {
        printf("strong number");
    }

    else if (sum != og_num)
    {
        printf("not a strong number");
    }

    return 0;
}