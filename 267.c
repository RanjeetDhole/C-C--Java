// 6
//A B C D F

#include<stdio.h>

void Display(int iNo)
{
     int i = 0;
     char ch = 'a';
    
     while(i < iNo)
     {
          printf("%c\t",ch);
          i++;
          ch++;
     }
}

int main()
{
     int iValue = 0;
  
     printf("Enter Number\n");
     scanf("%d",&iValue);

     Display(iValue);


   
    
     return 0;
}