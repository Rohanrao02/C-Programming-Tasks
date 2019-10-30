/*This is a program to check whether the entered character is vowel or consonant */
#include<stdio.h>
#include<string.h>
void main()
{
	char ch;
	printf("Enter a alphabet:\n");
	scanf("%c",&ch);
	ch=tolower(ch);
	if (ch<97 && ch>122)
		printf("Enter an alphabet");
	else
	switch (ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
					printf("%c is a vowel",ch);
					break;
		default:
					printf("%c is a consonant",ch);
	}
}
