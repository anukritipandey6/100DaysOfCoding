// Q30: Write a program to reverse a given number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    int r = 0; // remainder
    while (n>0){
        r = r*10;
        r = r + (n%10);
        n=n/10;
    }
    printf("The reverse of a number : %d",r);
    return 0;
}