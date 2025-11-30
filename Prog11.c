// Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>

int main()
{

    int number;

    printf("The nummber is :");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("The number %d is even", number);

    else
        printf("The number %d is odd", number);

    return 0;
}