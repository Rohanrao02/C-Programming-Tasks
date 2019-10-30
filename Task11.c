//to store details of a book
#include<stdio.h>
struct book
{
	char title[50],author[50],genre[50];
};
void display(struct book);
void main()
{
	struct book reg_1,*reg;
	printf("Enter the title, author & genre of the book:\n");
	scanf("%[^\n]%*c%[^\n]%*c%[^\n]%*c",&reg_1.title,&reg_1.author,&reg_1.genre);
	display(reg_1);
}
void display(struct book reg)
{
	printf("The title of the book      : %s\n",reg.title);
	printf("The author of the book:    : %s\n",reg.author);
	printf("Genre of book              : %s\n",reg.genre);
}
