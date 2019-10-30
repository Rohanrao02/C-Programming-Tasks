//program for binary to decimal conversion
#include<stdio.h>
#include<math.h>
void main()
{
	int num,bin=0,i,j;
	printf("Enter a decimal number:\n");
	scanf("%d",&num);
	for(i=0;num!=0;i++)
	{
		j=num%2;
		bin=bin+j*pow(10,i);
		num=num/2;
	}
	printf("The binary representation of the number is %d\n",bin);
}
