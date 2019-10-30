//To check an armstrong number
#include<stdio.h>
#include<math.h>
void main()
{
	int x,num,sum=0,a,i;
	printf("Enter a number:\n");
	scanf("%d",&num);
	a=num;
	for(i=0;a!=0;i++)
	{
		a=a/10;
	}
	a=num;
	while (a!=0)
	{
		x=a%10;
		sum+=pow(x,i);
		a/=10;
	}
	if (sum==num)
	printf("The number %d is an armstrong number\n",num);
	else 
	printf("%d is not an armstrong number\n",num);
}
