#include<stdio.h>
//Accept number from user and check whether number even or odd

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
if ((iNo %2 ) == 0) 
    {
    return 1;
    }
    else
    {
   return 0;
    }
 
}
int main()
{

    int iValue = 0;
    bool bRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet== true)
    {
        printf("%d is even number\n",iValue);
    }    
    else
    {
        printf("%d is odd number\n",iValue);
    }



    return 0;
}