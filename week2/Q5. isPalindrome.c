/* Q5.Write a program to check if a 
 * given string or number is a palindrome.
 */
#include<stdio.h>

int main() 
{
	char s[100];
	printf("Enter a Sting or a Number : ");
	scanf("%[^\n]s", &s);
	int i, count=0;
	char r[100];

	for(i=0; s[i]; i++) {
		r[i] = s[i];
		count++;
	}
	for(i=0; i<count; i++) {
		if(r[i] != s[count-1-i]) {
			printf("It is not a Palindrome");
			return 0;
		}
	}
	printf("It is a Palindrome");
	return 0;
}
