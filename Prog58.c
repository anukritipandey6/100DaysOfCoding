//Q58: Find the maximum and minimum element in an array.
#include <stdio.h>
void main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("enter numbers: ");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0];
    for (int i=0;i<n;i++) {
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    for (int i=0;i<n;i++) {
        if (arr[i]>max) {
            max = arr[i];
        }
    }
    printf("minn - %d, max - %d",min,max);

}