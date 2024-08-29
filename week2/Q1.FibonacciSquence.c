/* Q1. Write a program to print the 
 * first 10 numbers of the Fibonacci sequence.
 */
#include<stdio.h>

int main() {
	int a = 0, b = 1;
	int n, c;
	printf("Enter No. : ");
	scanf("%d",&n);
	int i;
	printf("%d %d ",a ,b);
	for(i=0; i<n-2; i++){
		c = a+b;
		printf("%d ", c);
		a = b;
		b = c;
	}
	return 0;
}
