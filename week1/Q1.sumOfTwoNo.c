/*  Q1. Write a program that takes two integers from the
 *	user and prints their sum
 */

#include<stdio.h>

int main() {
	int a, b;
	printf("Enter 1st no. : ");
	scanf("%d",&a);
	printf("Enter 2nd no. : ");
	scanf("%d",&b);
	printf("Sum of %d and %d is : %d", a, b, a+b);
	return 0;
}
