// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    int length, width, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    area = length * width;

    printf("The area of the rectangle is: %d\n", area);

    perimeter = 2*(length + width);

    printf("The perimeter of the rectangle is: %d\n", perimeter);

    return 0;
}
