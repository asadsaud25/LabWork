#include<stdio.h>

int main() 
{
	int yr;
	printf("Enter year: ");
	scanf("%d",&yr);
	
	if (((yr % 4 == 0) && (yr%100!=0)) || (yr%400==0)) {
		printf("%d is leap year",yr);
	}else{
		printf("%d is NOT leap year",yr);
	}
	return 0;
}
