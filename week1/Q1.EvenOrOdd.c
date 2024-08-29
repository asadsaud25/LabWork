/* Q2.Write a program to check whether a
 * given number is even or odd
 */
#include<stdio.h>

int main() {
	int n;
	printf("Enter a no. : ");
	scanf("%d", &n);
	
	if(n % 2 > 0) {
		printf("%d is odd", n);
	}else {
		printf("%d is even", n);
	}
	return 0;
}
