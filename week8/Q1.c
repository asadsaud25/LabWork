#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int total = n * (n + 1) / 2; 
    int sum = 0;
    int i;
    for ( i = 0; i < n; i++) {
        sum += arr[i]; 
    }
    return total - sum; 
}

int main() {
    int n, i;
    
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d distinct numbers from 0 to %d:\n", n, n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int missingNumber = findMissingNumber(arr, n);
    printf("The missing number is: %d\n", missingNumber);
    return 0;
}
