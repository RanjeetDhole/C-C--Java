//Recursion Problems    (By Removing Static)
///  *123
//   3 2 1 

#include<stdio.h>
void DisplayI(int no)
{

     while(no != 0)          //(iCnt < 4)
     {
          printf("%d\t",no % 10);
          no = no / 10;
     }
}
void DisplayR(int no)
{
     if(no != 0)          //(iCnt < 4)
     {
          printf("%d\t",no % 10);
          no = no / 10;
          DisplayR(no);
     }
}
int main()
{

     DisplayR(123);

     return 0;
}