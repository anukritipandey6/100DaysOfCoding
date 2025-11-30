// Q6: Write a program to swap two numbers using a third variable.


#include<stdio.h>

int main() {

    int num1, num2, temp;

    printf("the 1st number is:");
    scanf("%d", &num1);

    printf("the 2nd number is:");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("after swap number 1 is %d and number 2 is %d" , num1, num2);

    return 0;


