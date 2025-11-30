// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main()
{

    char char_for_check;

    printf(" Enter the character : ");
    scanf("%c", &char_for_check);

    if (char_for_check == 'a' || char_for_check == 'e' || char_for_check == 'i' || char_for_check == 'o' || char_for_check == 'u')
        printf("The character %c is a lower case vowel", char_for_check);

    else if (char_for_check == 'A' || char_for_check == 'E' || char_for_check == 'I' || char_for_check == 'O' || char_for_check == 'U')
        printf("The character %c is a upper case vowel", char_for_check);

    else
        printf("the character is a consonant");

    return 0;
}