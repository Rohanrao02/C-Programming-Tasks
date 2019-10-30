#include<stdio.h>
int main()
{
    int age;
    char name[50],phone[12];
    printf("Enter your name:\n");
    scanf("%[^\n]s",name);
    printf("Enter your age:\n");
    scanf("%d",&age);
    printf("Enter your phone number:\n");
    scanf("%s",phone);
    printf("Name:%s\n",name);
    printf("Age:%d\nPhone number:%s\n",age,phone);
    return 0;
    
}
