// 6
//A B C D F

// By Recurssion


#include<stdio.h>

void DisplayR(int iNo)
{
     static int i = 0;
     static char ch = 'a';
    
     if(i < iNo)
     {
          printf("%c\t",ch);
          i++;
          ch++;
          DisplayR(iNo);
     }
}

int main()
{
     int iValue = 0;
  
     printf("Enter Number\n");
     scanf("%d",&iValue);

     DisplayR(iValue);


   
    
     return 0;
}