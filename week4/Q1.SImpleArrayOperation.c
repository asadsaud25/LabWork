/* Q1.Write a program to perform basic 
 * operations like finding the sum, average, 
 * maximum, and minimum of elements in an array.
 */
#include<stdio.h>

MAX_VALUE=100;
void print(int arr[], int n) {
	printf("Given array is:\n");
	int i;
	for(i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
}
int sum(int arr[], int n) {
	int i, sum=0;
	for(i=0; i<n; i++) {
		sum += arr[i];
	}
	return sum;
}
void min_max(int arr[], int n) {
	int min = arr[0], max = arr[0];
	int i;
	for(i=0; i<n; i++) {
		if(min > arr[i])
			min = arr[i];
		else if(max < arr[i])
			max = arr[i];
	}
	printf("\nminimum element in given array is: %d\nmaximum element in given array is: %d", min, max);
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
	
	print(arr, n);
	printf("\nsum of all elements of given array is: %d",sum(arr, n));
	min_max(arr, n);
	printf("\navg of given array is: %d", sum(arr,n)/n);
	return 0;
}
