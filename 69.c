//Dynamically Allocated
#include<stdio.h>
#include<stdlib.h>  // malloc and free

void Display(int Arr[],int iLength)
{
   int iCnt = 0;
   printf("Element of Array are: \n");

  for(iCnt = 0; iCnt < iLength; iCnt++)
   {
       printf("%d\n",Arr[iCnt]);
   }
}

int main()
{
   // auto int Brr[5]; static memory allocation
    int *ptr = NULL;
    int iCnt = 0;
    int iSize = 0;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));

    printf("Enter element: \n");
    for(iCnt = 0; iCnt < iSize ;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    Display(ptr, iSize);   //Display(100,4);
    free(ptr);

    return 0;
}