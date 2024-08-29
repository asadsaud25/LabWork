/* Q1.Write a program to merge two sorted 
 * arrays into one sorted array. 
 */
#include<stdio.h>
void merge(int arr1[], int arr2[], int arr3[], int n, int m) {
	int i=0, j=0, k=0;
	while(i < n && j < m ) {
		if(arr1[i] < arr2[j]) {
			arr3[k++] = arr1[i++];
		}else{
			arr3[k++] = arr2[j++];
		}
	}
	while(i < n) {
		arr3[k++] = arr1[i++];
	}
	while(j < m) {
		arr3[k++] = arr2[j++];
	}
	
}
void print(int arr[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}
}
int main() {
	int arr1[] = {1, 3, 5, 7, 9};
	int arr2[] = {2, 4, 6, 8, 10};
	int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);
	int arr3[n+m];
	merge(arr1, arr2, arr3, n, m);
	printf("Sorted Merged Array :\n");
	print(arr3, n+m);
	return 0;
}
