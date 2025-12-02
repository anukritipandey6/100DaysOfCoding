//Q70: Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;  // handle if k > n

    int rotated[n];  // second array

    // Copy last k elements first
    int index = 0;
    for (int i = n - k; i < n; i++) {
        rotated[index] = arr[i];
        index++;
    }

    // Copy first n-k elements next
    for (int i = 0; i < n - k; i++) {
        rotated[index] = arr[i];
        index++;
    }

    printf("Array after rotating right by %d positions:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}