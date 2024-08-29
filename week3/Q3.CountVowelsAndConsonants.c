/* Q3. Write a program to count the number of vowels and 
 * consonants in a given string.
 */
#include<stdio.h>

int checkChar(char a) {
	int b = (int)a;
    
    if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a' || a=='e' || a=='i' || a=='o' || a=='u') {
    	return 0;
	}
	else if(b>=65 && b<=90 || b>=97 && b<=122) {
		return 1;
	}
	else 
		return -1;
}
int main() {
	char str[100];
	int i, v_count = 0, c_count=0;
	printf("Enter String: ");
	scanf("%[^\n]s",&str);
	
	for(i=0; str[i]; i++) {
		if(checkChar(str[i]) == 0) 
			v_count++;
		else if(checkChar(str[i]) == 1)
			c_count++;
		else 
			continue;
	}
	
	printf("No of vowels in given string are : %d\n",v_count);
	printf("No of consonants in given string are : %d",c_count);
}
