// Accept String from user calculate small Letters 

//Recurssive

#include<stdio.h>

int CountSmallR(char *str)
{
     static int iCnt = 0;
     if(*str != '\0')
     {
          if(*str >'a' && *str <='z')
          {
               iCnt++;
          }
          str++;
          CountSmallR(str);
     }
     return iCnt;
}

int main()
{
     char arr[20];
     int iRet = 0;
     printf("Enter string\n");
     scanf("%[^'\n']s",arr);

     iRet = CountSmallR(arr);

     printf("Small character are: %d\n",iRet);
   
    
     return 0;
}