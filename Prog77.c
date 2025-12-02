//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

void main() {
    int r, c;
    printf("enter rows and columns: ");
    scanf("%d%d", &r, &c);

    int matrix[r][c];

    printf("enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (r != c) {   // must be square matrix
        printf("false");
        return;
    }

    int flag = 1;   // assume diagonal is distinct

    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < r; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    if (flag == 1)
        printf("true");
    else
        printf("false");
}
