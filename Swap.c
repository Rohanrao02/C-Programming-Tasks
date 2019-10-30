//Its a program to swap two numbers without use of third number
#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter two numbers\n");
	scanf("%d%d",&x,&y);
	// before swaping
	printf("x=%d\ny=%d\n",x,y);
	x=x^y;
	y=x^y;
	x=x^y;
	//After swaping
	printf("____________________________________________________________________\n");
	printf("x=%d\ny=%d\n",x,y);
}
