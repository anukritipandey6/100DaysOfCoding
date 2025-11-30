// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main()
{

    int sec, hrs, min, sec2;

    printf("The time in seconds is:");
    scanf("%d", &sec);

    hrs = sec / 3600;

    min = (sec - hrs*3600) / 60;

    sec2 = sec - (hrs * 3600) - (min * 60);

    printf("time is %d:%d:%d", hrs, min, sec2);

    return 0;
}