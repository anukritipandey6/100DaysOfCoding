//Q71: Read and print a matrix.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter rows and coloumn: ");
    scanf("%d%d", &a, &b);

    int arr[a][b];
    printf("enter array elements: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("array elements are: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
