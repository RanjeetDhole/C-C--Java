//Array
#include<stdio.h>


int main()
{
    auto int Arr[5];
    register int iCnt = 0;

    printf("Enter element: \n");

    for(iCnt = 0; iCnt < 5 ;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

   printf("Element of Array are: \n");

  for(iCnt = 0; iCnt < 5; iCnt++)
   {
       printf("%d\n",Arr[iCnt]);
   }

    return 0;
}