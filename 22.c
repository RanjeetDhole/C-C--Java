//
//Input : 4
//Output : 10(1+2+3+4)

#include<stdio.h>
Summation(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    if(iNo < 0 )
      {

        iNo = - iNo;

       }

       for ( iCnt=1 ;iCnt<=iNo ;iCnt++ )
       {
           iSum = iSum + iCnt ;

       }
       return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter the number\n");
    scanf("%d",&iValue);

    Summation(iValue);
    iRet = Summation(iValue);
    printf("Summation is : %d\n",iRet);

    return 0;
}

































