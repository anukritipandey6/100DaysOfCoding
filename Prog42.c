// Q42: Write a program to check if a number is a perfect number.
#include <stdio.h>

int main()
{

    int number;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == number)
    {
        printf("perfect number");
    }

    else 
    {
        printf("not a perfect number");
    }

    return 0;
}