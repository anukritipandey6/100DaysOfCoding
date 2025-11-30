
// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include<math.h>

int main()
{

    int p, r, t;
    float SI, CI;

    printf("the princliple amount is ");
    scanf("%d", &p);

    printf("the rate of interest is ");
    scanf("%d", &r);

    printf("the time in yrs is ");
    scanf("%d", &t);

    int n = 1;

    SI = p + ((p * r * t) / 100);

    CI = p * pow((1 + (r / n)), (n * t));

    printf(" the amount after simple interst is : %f", SI);
    printf(" the amount after compound interst is : %f", CI);

    return 0;
}
