//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>

int main()
{

    int number, factorial;

    printf("Enter the number whose factorial you want: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("The factorial can't be calculated");
    }

    else
    {
        factorial = number * (number-1);
        for (int i = 1; i < (number-1);)
        {
           factorial = factorial * i;
            i = i + 1;
        }

        printf("The factorial of %d is %d", number, factorial);
    }
    return 0;
}