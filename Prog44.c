// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include<stdio.h>

int main() {

    int terms;
    float series;
    float sum = 1.0;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for (int i = 2; i<=terms; i++)
    {
        series = ((2.0 * i) - 1) / (2.0 * i);
        sum = sum + series;
    }

    printf("approximate sum: %f", sum);

    return 0;
}