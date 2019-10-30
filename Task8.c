//To print multiplication tables
#include<stdio.h>
void main()
{
	int num,i;
	printf("Enter a number:\n ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%2d * %2d = %3d\n",num,i,num*i);
	}
}
