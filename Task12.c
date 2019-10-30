// Program driven menu for temperature conversion
#include<stdio.h>
void main()
{
	int choice;
	float ct,ft;
	abc:
	printf("Enter your choice:\n");
	printf("_________________________________\n");
	printf("1.Celsius to fahernheit\n2.Fahrenheit to celsius\n3.Exit\n");
	printf("_________________________________\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1: printf("Enter the temperature in celsius:\n");
			    scanf("%f",&ct);
			    ft=(1.8*ct)+32;
			    printf("%f in degree centigrade is %f in fahernheit scale\n",ct,ft);
			    goto abc;
		case 2: printf("Enter the temperature in fahernheit :\n ");
				scanf("%f",&ft);
				ct=(ft-32)/1.8;
				printf("%f in degree fahrenheit is %f in degree celsius\n",ft,ct);
				goto abc;
		case 3: break;
		default: printf("Enter the number within given choice\n");
				 goto abc;
	}
}
