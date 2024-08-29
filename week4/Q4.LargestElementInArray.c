/* Q4.Write a program to find the largest 
 * element in an array. 
 */
#include<stdio.h>
#define MAX_VALUE 100

int max(int arr[], int n) {
	int max = arr[0];
	int i;
	for(i=0; i<n; i++) {
		if(max < arr[i])
			max = arr[i];
	}
	return max;
}
int main() {
	int arr[MAX_VALUE];
	int n;
	printf("Enter Size of Array: ");
	scanf("%d",&n);
	printf("Enter Elements:\n");
	int i;
	for(i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	
	printf("Max value in given array is : %d", max(arr, n));
	return 0;
}
