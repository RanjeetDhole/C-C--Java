#include<stdio.h>
int main()
{
int num1,num2,num3;
int *p1,*p2,*p3;

p1 = &num1;
p2 = &num2;
p3 = &num3;

printf("Enter the first num1: ");
scanf("%d",&num1);

printf("Enter the second num2: ");
scanf("%d",&num2);

printf("Enter the third num3: ");
scanf("%d",&num3);


if(*p1 > *p2)
	{
	if (*p1 > *p3)
		{
		printf("largest number is %d",*p1);
		}
	else
		{
		printf("largest number is %d",*p3);
		}
	}
else
	
	{
	if (*p2 > *p3)
		{
		printf("largest number is %d",*p2);
		}
	else
		{
		printf("largest number is %d",*p3);
		}
	}
	
	
return 0;
}