//Check number is Pallindrome or not(Means Reverse number is true or false)
//Input: 121
//Output: 121 is pallindrome number
#include<stdio.h>
#include<stdbool.h>

int CheckPallindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = 0;
    
      if(iNo < 0)
    {
        iNo = -iNo;
    }
    iTemp = iNo;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;

        iNo = iNo / 10;
    }
    if (iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }

}

    

int main()
{
   int iValue = 0;
   bool bRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);


    bRet = CheckPallindrome(iValue);
    if(bRet == true)
    {
        printf("%d is pallindrome number \n",iValue);
    }
    else
    {
        printf("%d is not  pallindrome number \n",iValue);
    }

    return 0;
}