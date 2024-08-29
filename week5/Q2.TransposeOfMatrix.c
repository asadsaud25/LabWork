/* Q2.Write a program to find the 
 * transpose of a given matrix.
 */
#include<stdio.h>
#define MAX_SIZE 100

void insert_print(int arr[MAX_SIZE][MAX_SIZE], int n, int m, int op) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
        	if(op == 0) {
	        	printf("Enter arr[%d][%d] element: ", i, j);
	            scanf("%d", &arr[i][j]);	
			}else{
				printf("%d ", arr[i][j]);
			}
        }
        if(op == 1) printf("\n");
    }
}
void transpose(int arr1[MAX_SIZE][MAX_SIZE], int arr2[MAX_SIZE][MAX_SIZE], int row, int col) {
	int i, j;
	for(i=0; i<row; i++) {
		for(j=0; j<col; j++) {
			arr2[j][i] = arr1[i][j];
		}
	}
}
int main() {
	int row, col;
	printf("\nEnter Row and Column: ");
    scanf("%d %d", &row, &col);
    if (row > MAX_SIZE || col > MAX_SIZE) {
        printf("\nRow or column size exceeds maximum limit of %d.\n", MAX_SIZE);
        return 1;
    }
    int arr1[MAX_SIZE][MAX_SIZE];
    int arr2[MAX_SIZE][MAX_SIZE];
    
    printf("\nEnter Elements of Array:\n");
    insert_print(arr1, row, col, 0);
	printf("\nGiven Matrix is:\n");
	insert_print(arr1, row, col, 1);
	transpose(arr1, arr2, row, col);
	printf("\nMatrix after transpose:\n");
	insert_print(arr2, col, row, 1);  
}
