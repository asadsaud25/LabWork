#include<stdio.h>
#include<math.h>
int main() {
	int n, i;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	for(i=2; i<=sqrt(n); i++) {
		if(n%i == 0) {
			printf("\nGiven no. is NOT a Prime no.");
			return 0;
		} 
	}
	printf("\nGiven no. is a Prime no.");
	return 0;
}
