// Q36: Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>

int main() {

    int num1, num2, num, c;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1>num2)
    {
        num = num2;
    }
    else
    {
        num = num1;
    }

    for (int i=1; i<=num; i++)
    {
        if (num1%i == 0 && num2%i == 0)
        {
            c=i;
        }

    }
    printf("%d", c);
    return 0;
}