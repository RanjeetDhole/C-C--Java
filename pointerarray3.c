#include<stdio.h>


void demo(int *num)
{
printf("%d\n",*num);
}

int main()
{
int arr[] = {1,2,3,4,5,6,7,8,9,0};
for(int i=0;i<10;i++)

{
demo(&arr[i]);
}
return 0;
}