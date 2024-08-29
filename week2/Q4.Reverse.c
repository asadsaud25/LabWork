/* Q4. Write a program to reverse
 * the digits of a given number.
 */
#include<stdio.h>

int main() {
	int n,ans=0;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	while(n>0) {
		ans = ans*10 + n%10;
		n=n/10;
	}
	printf("%d",ans);
}
