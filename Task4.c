//Program to culcatinate two strings
#include<stdio.h>
void main()
{
	int i,j;
	char first[50],last[50],full[50];
	printf("Enter your first name:\n");
	scanf("%s",first);
	printf("Enter your last name:\n");
	scanf("%s",last);
	for (i=0;first[i]!='\0';i++);
	first[i]=' ';
	for (j=0;last[j]!='\0';j++)
	{
		first[i+j+1]=last[j];
	}
		first[i+j+2]='\0';
		printf("Your full name is:%s\n",first);
}
