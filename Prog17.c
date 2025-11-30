//  Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c, x, y;
    float root1, root2;

    printf("enter the value of coeffecient of x^2");
    scanf("%d", &a);

    printf("enter the value of coeffecient of x");
    scanf("%d", &b);

    printf("enter the value of constant");
    scanf("%d", &c);

    y = a * pow(x, 2) + b * x + c;

    root1 = ((0 - b) + pow((pow(b, 2) - (4 * a * c)), 0.5)) / (2 * a);
    root2 = ((0 - b) - pow((pow(b, 2) - (4 * a * c)), 0.5)) / (2 * a);

    if ((pow(b, 2) - (4 * a * c)) == 0)
        printf(" The roots %f and %f are real and equal", root1, root2);

    else if ((pow(b, 2) - (4 * a * c)) > 0)
        printf(" The roots %f and %f are real and distinct", root1, root2);

    else if ((pow(b, 2) - (4 * a * c)) < 0)
        printf(" The roots are unreal");

    return 0;
}