//Q129: Read numbers from numbers.txt, compute sum and average.
#include <stdio.h>

void main() {
    FILE *fp;
    int num, count = 0, sum = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: numbers.txt not found!");
        return;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found.\n");
        return;
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / count);
}