//Accept string from user and convert the sting into lowercase and uppercase means toggal 


#include<iostream>
using namespace std;

void strtoggaleX(char str[])
{
     int iCnt  = 0 ;
     while(*str != '\0')
     {
         if((*str>='a') && (*str<='z'))
          {
               *str = *str - 32;
          }
          else if((*str>='A') && (*str<='Z'))
          {
               *str = *str + 32;
          }
          str++;
     }
}

int main()
{
     char Arr[20];

     cout<<"Enter string "<<endl;
     cin.getline(Arr,20);

     strtoggaleX(Arr);

     cout<<"String after toggal : "<<Arr<<endl;
     return 0;
}