//to print a pyramid
#include<stdio.h>
void main()
{
	int i,num,j;
	printf("Enter the number:\n ");
	scanf("%d",&num);
	for (i=0;i<num;i++)
	{
		for(j=1;j<=num-i;j++)
		printf("%2d",j);
		printf("\n");
	}
	
}
