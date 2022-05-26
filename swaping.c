#include<stdio.h>
void swap(int *a,int *b)
{
//int t;
//*a = *b
//*b = tempnum;
}

int main()
{
int num1,num2,t;

printf("Enter value of num1: ");
scanf("%d",&num1);
printf("Enter value of num2: ");
scanf("%dn",&num2);

printf("Before Swapping: num1=%d\n",num1);
printf("Before Swapping: num2=%d\n",num2);
printf("===============================\n");

t=num1;
num1=num2;
num2=t;

printf("After Swapping: num1=%d\n",num1);
printf("After Swapping: num2=%d\n",num2);

return 0;
}