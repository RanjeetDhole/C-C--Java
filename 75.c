#include<stdio.h>
#include<stdlib.h>
// Minimun positive and Negative
int Minimun(int Arr[],int iLength)
{
    int iMin =Arr[0];
    int iCnt = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        } 
    }
    return iMin;
   
}

int main()
{
    int iSize = 0; 
    int iCnt = 0; 
    int iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int) *iSize);

     printf("Enter the values\n");
     
     for(iCnt = 0; iCnt < iSize ; iCnt++)
     {
         scanf("%d",&ptr[iCnt]);
     }
     iRet = Minimun(ptr,iSize);

     printf(" Minimun number is: %d\n",iRet);
     free(ptr);

    return 0;
}