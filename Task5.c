//Program to reverse a number
#include<stdio.h>
#include<math.h>
void main()
{
	int i,num,rev=0,a;
	printf("Enter the number:\n");
	scanf("%d",&num);
	for(i=0;num!=0;i++)
	{
		a=num%10;
		rev=rev*10+a;
		num=num/10;
	}
	printf("The reversed number is:%d",rev);
}
