#include <stdio.h>

void main()
{
	char ch;
	
    printf("Enter a Value : ");
    scanf("%c",&ch);
	
    if(ch >= 65 && ch <= 90)
		printf("Upper Case");
	else if(ch >= 97 && ch <= 122)
		printf("Lower Case");
	else if(ch >= 48 && ch <= 57)
		printf("Digit");
	else
		printf("Special Character");
}