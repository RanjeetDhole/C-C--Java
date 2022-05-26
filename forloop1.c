#include<stdio.h>
#include<conio.h>
int main()
{
int *p;

int Arr[7]={11,22,33,44,55,66,77};

p = &Arr[0];

for (int i = 0; i < 7 ;i++)
{

printf("Arr[%d]: value is %d and address is: %d\n",i,*p,p);

p++;

}


return 0;
}