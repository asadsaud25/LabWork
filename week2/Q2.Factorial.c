/* Q2. Write a program to calculate
 * the factorial of a given number.
 */
#include<stdio.h>

int main() {
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	int i,ans=1;
	for(i=1; i<=n; i++) {
		ans = ans*i;
	}
	printf("%d",ans);
	return 0;
}
