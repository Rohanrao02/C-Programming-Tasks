//To calculate sum and average of 3 subjects
#include<stdio.h>
void main()
{
	int math,sum,phy,chem;
	float avg;
	printf("Enter the marks in maths ,physics & chemistry:\n");
	scanf("%d%d%d",&math,&phy,&chem);
	sum=math+phy+chem;
	avg=sum/3.0;
	printf("The sum and average marks of student is %d and %.2f\n",sum,avg);
}
