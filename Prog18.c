// Q18: Write a program to assign grades based on a percentage input.
#include<stdio.h>

int main() {

    int english_marks, hindi_marks, maths_marks, science_marks, ssc_marks, it_marks, percentage;

    printf("the marks in english are : ");
    scanf("%d", &english_marks);

    printf("the marks in hindi are : ");
    scanf("%d", &hindi_marks);

    printf("the marks in maths are : ");
    scanf("%d", &maths_marks);

    printf("the marks in science are : ");
    scanf("%d", &science_marks);

    printf("the marks in ssc are : ");
    scanf("%d", &ssc_marks);

    percentage = (english_marks + hindi_marks + maths_marks + science_marks + ssc_marks) / 5;

    if (percentage >= 90)
        printf(" Grade A ");

    else if (percentage < 90 && percentage > 80)
        printf(" Grade B ");
    
    else if (percentage <= 80 && percentage > 70)
        printf(" Grade c ");

    else if (percentage <= 70 && percentage > 60)
        printf(" Grade D ");
    
    else if (percentage <= 60 && percentage > 50)
        printf(" Grade E ");

    else if (percentage <= 50)
        printf(" Grade F ");


    return 0;

}
