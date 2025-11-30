// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main()
{

    int number;

    printf("The nummber is :");
    scanf("%d", &number);

    if (number >= 0)

    {
        if (number == 0)
            printf("the number is zero");

        else
            printf("The number is positive");
    }

    else if (number < 0)
        printf("The number is negative");

    return 0;
}