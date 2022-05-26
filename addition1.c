#include<stdio.h>


int Addition(int iNO1,int iNO2)
{
auto int iAns = 0;
iAns = iNO1 + iNO2;
}

int main()
{
auto int iNO1 = 0,iNO2 = 0;
auto int iRet = 0;

printf("Enter first number\n");
scanf("%d",&iNO1);

printf("Enter second number\n");
scanf("%d",&iNO2);

iRet = Addition(iNO1,iNO2);

printf("Addition is : \n",iRet);

return 0;
}