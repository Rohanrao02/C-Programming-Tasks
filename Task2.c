//Program to convert celsius to fahernheit
#include<stdio.h>
void main()
{
	float cl,ft;
	printf("Enter the temperature in degree centigrade:\n");
	scanf("%f",&cl);
	ft=(1.8*cl)+32;
	printf("The temperature %.2f in celsius is %f in fahrenheit\n",cl,ft);
}
