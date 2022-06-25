// By Recurssion 
// Head Recurssion
//Back Tracking stack
// %c-> %s
//Pattern ALSO

#include<stdio.h>

void Display(char *str)
{

    if(*str!='\0')
     {
          printf("%s\n",str);
          Display(str + 1);       //Head Recurssion
     }

  
}

int main()
{
     char Arr[20];

     printf("Enter string\n");
     scanf("%[^'\n']s",Arr);

     Display(Arr);           // Dispaly(920);
  
    
     return 0;
}