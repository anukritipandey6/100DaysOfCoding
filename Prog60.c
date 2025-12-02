//Q60: Count positive, negative, and zero elements in an array.
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
    int pos=0,neg=0,zero=0;
    for (int i=0;i<n;i++) {
        if (arr[i]>0) {
            pos+=1;
        }
        else if (arr[i]<0) {
            neg+=1;
        }
        else {
            zero+=1;
        }
    }
    printf("positive - %d,negative - %d, zero - %d",pos,neg,zero);

}