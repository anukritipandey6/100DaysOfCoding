// Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>

int main()
{

    int radius;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    float area = 3.14 * radius * radius;
    printf("Area of the circle: %.2f\n", area);

    float circumference = 2 * 3.14 * radius;
    printf("circumference of the circle: %.2f\n", circumference);

    return 0;
}