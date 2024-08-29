/* Q3.Write a program to find all 
 * prime numbers between two given intervals.
 */
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main() {
	int a, b, i, j;
	bool flag = true;
	printf("Enter range: ");
	scanf("%d %d", &a, &b);
	if(a == 1) a++;
	for(i=a; i<=b; i++) {
		flag = true;
		for(j=2; j<=sqrt(i); j++) {
			if(i%j == 0) {
				flag = false;
				break;
			}
		}
		if(flag) printf("%d ", i);
	}
	return 0;
}
