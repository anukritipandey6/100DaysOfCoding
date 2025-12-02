//Q61: Search for an element in an array using linear search.
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
    
    int m;
    printf("find number: ");
    scanf("%d", &m);
    
    for (int i=0;i<n;i++) {
        if (arr[i] == m) {
            printf("Found at index %d",i);
        }
    }
}
