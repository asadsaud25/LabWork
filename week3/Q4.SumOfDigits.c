/* Q4.  Write a program to calculate 
 * the sum of the digits of a given number
 */
#include<stdio.h>

int main() {
	int n, ans=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	
	while(n>0) {
		ans = ans+n%10;
		n=n/10;
	}
	
	printf("%d",ans);
	return 0;
}
