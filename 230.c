//Recursion Problems    (By Removing Static)
///  *  *  *  *

#include<stdio.h>

void DisplayI()
{
      auto int iCnt = 0;

     while(iCnt != 4)          //(iCnt < 4)
     {
          printf("*\t");
          iCnt++;
     }
}
void DisplayR()
{
     int iCnt = 0;

     if(iCnt < 4)          //(iCnt < 4)
     {
          printf("*\t");
          iCnt++;
          DisplayR();    // Recurssive Call
     }

}
int main()
{
     DisplayR();

     return 0;
}