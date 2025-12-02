// Q40: Write a program to find the 1’s complement of a binary number and print it.
#include<stdio.h>
int main(){

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int remainder;

    while (number>0)
    {
        remainder=number%10;
        number=number/10;

        if (remainder == 1)
        {
            
        }
    }
}