//program to display 1 to 5 on screen
//output 1 2 3 4 5
 
#include<stdio.h>

 void Display(int iNo)
 {
     int iCnt = 0;
     if(iNo < 0)
     {
         
         iNo = - iNo;
     }

    /*
     //      1         2       3
     for(iCnt = 1; iCnt<=iNo;iCnt+1)
     {
         printf("%d\n",iCnt);   //4


     }*/

      iCnt = 1;     //1

    //
    while(iCnt <=iNo)
    {   
        {
         printf("%d\n",iCnt);   //4
         iCnt++;              //3
     }


    }
 }
////////////////////////////////////////////////////////////
int main()
{


    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);    //Display(4;)

    return 0;
}