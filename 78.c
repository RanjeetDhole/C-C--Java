#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// search element in array and break the loop
bool Search(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }

    
}
int main()
{
    int iSize = 0; 
    int iCnt = 0; 
    bool bRet ;
    int iValue = 0;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

     ptr = (int*)malloc(sizeof(int) *iSize);

     printf("Enter the values\n");
     for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

     printf(" Enter the element to  Search\n");
     scanf("%d",&iValue);

    bRet = Search(ptr,iSize,iValue);
    if(bRet == true)
    {
        printf("Element is there in array\n");
    }
    else
    {
        printf("Element is not there in array\n");
    }
     free(ptr);

    

    return 0;
}