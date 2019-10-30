//smallest and largest in a array
#include<stdio.h>
void main()
{
	int arr[50],i,j,small,large;
	printf("Enter the number of elements:\n");
	scanf("%d",&i);
	printf("Enter the elements:\n");
	
	for(j=0;j<i;j++)
	scanf("%d",&arr[j]);
	
	for(j=1,small=arr[0],large=arr[0];j<i;j++)
	{
		small=arr[j-1]<small?arr[j-1]:small;
		large=arr[j-1]>large?arr[j-1]:large;
	}
	printf("The largest number in the array:%d\n",large);
	printf("The smallest number in the array:%d\n",small);
}
