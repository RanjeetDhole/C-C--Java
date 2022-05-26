//Input: 2 4
//Output: 16(2 * 2 * 2 * 2)

#include<stdio.h>

 unsigned long int Power(int iNo1,int iNo2)
{
  //  iNo = 2;
  //  iNo = 4;
     unsigned long int lMult = 1;
     register int iCnt = 0;

    //   1         2            3

    for(iCnt = 1; iCnt<=iNo2 ;iCnt++)
    {
        lMult = lMult * iNo1;  //4

    }
    return lMult;
    
  
}

int main()
{
     auto int iValue1 = 0;
    auto  int iValue2 = 0;
    auto  unsigned long int lRet = 0;

    printf("Enter base: \n");
    scanf("%d",&iValue1);

    printf("Enter Power: \n");
    scanf("%d",&iValue2);

    lRet = Power(iValue1,iValue2);

    printf("Result is : %ld\n",lRet);


    return 0;
}