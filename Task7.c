//to check a palindromic string
#include<stdio.h>
#include<string.h>
void main()
{
	int i,j;
	char str[100],rev[100];
	printf("Enter a string:\n");
	scanf("%s",str);
	for (i=0;str[i]!='\0';i++);
	
	for (j=0;str[j]!='\0';j++)
	{
		rev[j]=str[i-j-1];
	}
	rev[j]='\0';
	if(strcmp(str,rev))
	printf("The string is not palindromic\n");
	else
	printf("The given string is palindromic\n");
}
