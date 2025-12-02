//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

void main() {
    int r, c;
    printf("enter rows and columns: ");
    scanf("%d%d", &r, &c);

    int matrix[r][c];
    int sum[r];

    printf("enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        sum[i] = 0;  
        for (int j = 0; j < c; j++) {
            sum[i] += matrix[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        printf("%d ", sum[i]);
    }
}
