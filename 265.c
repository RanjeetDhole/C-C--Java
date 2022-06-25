// Accept String from user  Digit and summmation


//Recurssive

#include<stdio.h>

int SumR(int iNo)
{
     static int iSum = 0;
     int iDigit = 0;         // Does not take static 

     if(iNo !=0)
     {
          iDigit = iNo % 10 ;
          iSum = iSum + iDigit;
          iNo = iNo / 10 ;

           SumR( iNo);
     }
     return iSum;
}

int main()
{
     int iValue = 0;
     int iRet = 0;
     printf("Enter Number\n");
     scanf("%d",&iValue);

     iRet  =SumR(iValue);

     printf("Addition is: %d\n",iRet);
   
    
     return 0;
}