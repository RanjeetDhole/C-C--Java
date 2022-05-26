/*
  a  b  c  d
  a  b  c  d
  a  b  c  d

*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i =0 ;int j = 0;
    char ch = '\0';
    if(iRow != iCol)
    {
        return;
    }

    for(i = 1;i <= iRow ;i++)
    {     
        //          1          2        3
        for(j= 1,ch = 'a'; j <= iCol ;j++ ,ch++)     
        {
            printf("%c\t",ch);
        
            
        }
        printf("\n");


    }
}



int main()
{
    int iValue1 = 0; int iValue2 = 0;

    printf("Please enterof rows: \n");
    scanf("%d",&iValue1);

    printf("Please enterof columns: \n");
    scanf("%d",&iValue2);


    Display(iValue1,iValue2);

    return 0;
}