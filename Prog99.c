//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

void main() {
    char date[20];
    int day, year, month;

    scanf("%d/%d/%d", &day, &month, &year);

    char months[12][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("%02d-%s-%d", day, months[month-1], year);
}
