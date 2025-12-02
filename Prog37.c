// Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>

int main()
{
    int num1, num2, multiple1, multiple2, LCM, num;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1>num2)
    {
        num = num1;
    }

    else 
    {
        num = num2;
    }

    for (int i = 1; i<=num ; i++)   
    {
        multiple1 = num1 * i;
        multiple2 = num2 * i;

        if (multiple2 == multiple1)
        {
            break;
        }
        
    }   

    printf("LCM = %d\n", multiple1);
    return 0;
}