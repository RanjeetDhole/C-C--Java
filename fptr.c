#include<stdio.h>
int Addition(int no1,int no2)
{
int ans = 0;
ans = no1 + no2;
return ans;
}
int main()
{
int a = 50, b = 20;
int ret = 0;


int(*fptr)(int,int);
fptr = Addition;
ret = fptr(a,b);
printf("Addition is %d\n",ret);

return 0;
}