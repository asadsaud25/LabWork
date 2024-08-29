/* Q1.Write a program to convert a
 * binary number to its decimal equivalent
 */
#include<stdio.h>

int main() {
	int n;
	printf("Enter binary No. : ");
	scanf("%d", &n);
	int rem;
	int ans=0;
	int i=0;
	while(n>0) {
		rem = n%10;
		ans = (ans) + (rem*(int)pow(2,i++));
		n=n/10;
	}
	printf("%d",ans);
}
