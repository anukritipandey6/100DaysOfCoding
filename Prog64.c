//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

void main() {
    int n, digit;
    int freq[10] = {0};  // To store frequency of each digit
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    int temp = n;
    
    while (temp > 0) {
        digit = temp % 10;
        freq[digit]++;
        temp = temp / 10;
    }
    
    int max = 0, ans = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            ans = i;
        }
    }
    
    printf("Digit that occurs the most: %d", ans);
}