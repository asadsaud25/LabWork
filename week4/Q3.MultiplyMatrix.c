// Q3.Write a program to multiply two matrices.
#include <stdio.h>
#define MAX_SIZE 100

void insert_print(int arr[MAX_SIZE][MAX_SIZE], int n, int m, int op) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (op == 0) {
                printf("Enter arr[%d][%d] element: ", i, j);
                scanf("%d", &arr[i][j]);
            } else {
                printf("%d ", arr[i][j]);
            }
        }
        if (op == 1) printf("\n");
    }
}

void multiply(int arr1[MAX_SIZE][MAX_SIZE], int arr2[MAX_SIZE][MAX_SIZE], int arr3[MAX_SIZE][MAX_SIZE], int n, int m) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            arr3[i][j] = 0;
            for (k = 0; k < n; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

int main() {
    int R1, C1, R2, C2;

    printf("\nEnter Row and Column of 1st Array: ");
    scanf("%d %d", &R1, &C1);

    printf("\nEnter Row and Column of 2nd Array: ");
    scanf("%d %d", &R2, &C2);

    if (R1 > MAX_SIZE || C1 > MAX_SIZE || R2 > MAX_SIZE || C2 > MAX_SIZE) {
        printf("\nRow or column size exceeds maximum limit of %d \n", MAX_SIZE);
        return 1;
    }

    if (R1 != C2) {
        printf("\nMultiplication Not possible!\n");
        return 1;
    }

    int arr1[MAX_SIZE][MAX_SIZE];
    int arr2[MAX_SIZE][MAX_SIZE];
    int arr3[MAX_SIZE][MAX_SIZE];

    printf("\nEnter Elements of 1st Array:\n");
    insert_print(arr1, R1, C1, 0);

    printf("\nEnter Elements of 2nd Array:\n");
    insert_print(arr2, R2, C2, 0);

    multiply(arr1, arr2, arr3, R1, C2);
    printf("\nResultant Matrix:\n");
    insert_print(arr3, R1, C2, 1);

    return 0;
}
