#include<stdio.h>
#include<ctype.h>
void main
{
	char a;
	printf("Enter a character");
	scanf("%c",&a);
	if(isupper(a))
		{
		printf("Uppercase Alphabet");
	}
		elseif(islower(a))
		{
		printf("Lowercase Alphabet");
	}
		elseif(isdigit(a))
		{
		printf("Digit/n")
		}
		else
		printf("Special Character");
}