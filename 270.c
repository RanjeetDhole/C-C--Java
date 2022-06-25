// 6
//A B C D F

// By Recurssion

#include<stdio.h>

void DisplayR(int iNo)
{

     static int i = 0;
     
    
     if(iNo > i)
     {
          printf("%c\t", 'a' + i);
          iNo++;
          i++;
         
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