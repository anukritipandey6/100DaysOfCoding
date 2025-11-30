// Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>

int main()
{

    int num, number;

    printf("Enter a number :");
    scanf("%d", &num);

    number = num;

    int r = 0;
    while (num > 0)
    {
        r = r * 10;
        r = r + (num % 10);
        num = num / 10;
    }

    if (number == r)
    {
        printf("This is a palindrome");
    }

    else 
    {
        printf("this is not a palindrome");
    }

    return 0;
}