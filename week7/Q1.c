#include<stdio.h>
int main(){
	int n, i, j;
	printf("enter the size:");
	scanf("%d",&n);
	
	int a[n];
	printf("enter the elements:");
	for( i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("elements are: \n");
	for( i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	int max,smax;
	int temp;
	for( i=0;i<n;i++){
		for( j=0;j<n;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\nsecond largest elemet is: %d",a[n-2]);
	
	
}
