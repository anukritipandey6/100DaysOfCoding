// Q21: Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>

int main()
{

    int month;

    printf("Enter the month of the year considering January as first: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("The month is January and it has 31 days");
        break;
    case 2:
        printf("The month is February and it has 29 days");
        break;
    case 3:
        printf("The month is March and it has 31 days");
        break;
    case 4:
        printf("The month is April and it has 30 days");
        break;
    case 5:
        printf("The month is May and it has 31 days");
        break;
    case 6:
        printf("The month is June and it has 30 days");
        break;
    case 7:
        printf("The month is July and it has 31 days");
        break;
    case 8:
        printf("The month is August and it has 31 days");
        break;
    case 9:
        printf("The month is September and it has 30 days");
        break;
    case 10:
        printf("The month is October and it has 31 days");
        break;
    case 11:
        printf("The month is November and it has 30 days");
        break;
    case 12:
        printf("The month is December and it has 31 days");
        break;
    }
    return 0;
}