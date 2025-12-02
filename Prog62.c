//Q62: Reverse an array without taking extra space.
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
    
    for (int i=n-1;i>=0;i--) {
        printf("%d\t",arr[i]);
    }
}