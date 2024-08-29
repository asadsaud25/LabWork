/* Q3. Write a program to find the largest 
 * of three numbers.
 */
#include<stdio.h>

int main() {
	int a, b, c;
	printf("Enter 1st no : ");
	scanf("%d",&a);
	printf("Enter 2nd no : ");
	scanf("%d",&b);
	printf("Enter 3rd no : ");
	scanf("%d",&c);
	
	if(a>b) {
		if(a>c)
			printf("%d is Largest", a);
		else
			printf("%d is Largest", c);
	} else if (a<b) {
		if(c<b)	{
			printf("%d is Largest", b);			
		}else {
			printf("%d is Largest", c);
		}
	} else {
		printf("all three are equal");
	}
	return 0;
	
}
