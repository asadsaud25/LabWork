#include <stdio.h>
#include <limits.h>
void findSecondLargest(int arr[], int n) {
	int i;
    int first, second;
    
    if (n < 2) {
        printf("Invalid input: Array should have at least two elements.");
        return;
    }

    first = second = INT_MIN;
    for ( i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        printf("There is no second largest element.\n");
    else
        printf("The second largest element is %d.\n", second);
}

int main() {
	int n, i;
	printf("enter the size:");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter the elements:");
	for( i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("elements are: \n");
	for( i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
    findSecondLargest(arr, n);
    return 0;
}

