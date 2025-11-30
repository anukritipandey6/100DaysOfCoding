#include <stdio.h>

int main()
{

    char operator;
    float num1, num2, result;

    printf("Enter one operator from +, -, *, /, %: ");
    scanf("%c", &operator);

    printf("Enter two number: ");
    scanf("%f, %f", &num1, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%f + %f = %f", num1, num2, result);
        break;

    case '-':
        result = num1 - num2;
        printf("%f - %f = %f", num1, num2, result);
        break;

    case '*':
        result = num1 * num2;
        printf("%f * %f = %f", num1, num2, result);
        break;

    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%f / %f = %f", num1, num2, result);
        }

        else
        {
            printf("ERROR 404: Division by 0 is not possible");
        }

        break;

    case '%':
        if (num2 != 0)
        {
            result = (int)num1 % (int)num2;
            printf("%f % %f = %f", num1, num2, result);
        }

        else
        {
            printf("ERROR 404: Modulus by 0 is not possible");
        }

        break;
    default:
        printf("invalid operator entered");
        break;
    }
    return 0;
}