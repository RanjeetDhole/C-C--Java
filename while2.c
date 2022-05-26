#include<stdio.h>
int main()
{
int number;
int n;
number=1;

printf("Enter the value of N: ");
scanf("%d",&n);

printf("Even Number from 1 to %d: \n",n);

while(number<=n)
{
if(number%10==0)
	printf("%d\n",number);
	number++;
};


return 0;
}