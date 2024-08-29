/* Q2. Write a program to convert a 
 * decimal number to its binary equivalent.
 */
#include<stdio.h>

int main() {
	int n;
	printf("Enter Decimal No. : ");
	scanf("%d",&n);
	
	int ans[100];
	int i=0, count=0;
	
	while(n>0) {
		ans[i++] = (n%2);
		n=n/2;
		count++;
	}
	
	for(i=count-1; i>=0; i--) {
		printf("%d",ans[i]);
	}
}
