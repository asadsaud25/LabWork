/* Q5. Write a program to find the HCF 
 * and LCM of two numbers
 */
#include<stdio.h>

int main(){
    int a,b,i;
    
    printf("Enter two positive numbers:");
    scanf("%d%d",&a,&b); 
    int hcf = a;
   	int res = b%hcf;
   	
	while(res!=0) {
		b=hcf;
		hcf=res;
		res=b%hcf;
	}
	
	int lcm=(a*b)/hcf;
	printf("LCM: %d,\nHCF: %d",lcm,hcf);
	
	return 0;
}
