//Q63: Merge two arrays.
#include <stdio.h>

void main() {
    int n;
    printf("Enter size of first array: ");
    scanf("%d", &n);

    int arr1[n];
    printf("Enter elements of first array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    int m;
    printf("Enter size of second array: ");
    scanf("%d", &m);

    int arr2[m];
    printf("Enter elements of second array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    int a = n + m;
    int arr3[a];

    int count = 0;

    for (int i = 0; i < n; i++) {
        arr3[count] = arr1[i];
        count++;
    }

    for (int i = 0; i < m; i++) {
        arr3[count] = arr2[i];
        count++;
    }

    printf("Merged Array: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", arr3[i]);
    }
}
