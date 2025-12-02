//Q59: Count even and odd numbers in an array.
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
    int odd=0,even=0;
    for (int i=0;i<n;i++) {
        if (arr[i]%2==0) {
            even+=1;
        }
        else {
            odd+=1;
        }
    }
    printf("even - %d,odd - %d",even,odd);

}
