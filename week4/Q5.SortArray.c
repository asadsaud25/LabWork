/* Q5.Write a program to sort an array using
 * the bubble sort algorithm.
 */
#include<stdio.h>
#define MAX_SIZE 100

void print(int arr[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
}
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int arr[], int n) {
	int i, j;
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-1-i; j++) {
			if(arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}
int main() {
	int arr[MAX_SIZE];
	int n;
	printf("Enter Size of Array: ");
	scanf("%d",&n);
	if(n < 0 || n > MAX_SIZE) {
		printf("invalid size, entre size b/w 0-100");
	}
	printf("Enter Elements:\n");
	int i;
	for(i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	printf("\nGiven array is:\n");
	print(arr, n);
	sort(arr, n);
	printf("\nAfter sorting by buble sort array is:\n");
	print(arr, n);
	return 0;
}
