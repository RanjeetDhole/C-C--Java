/*
   *
   * *
   * * *
   * * * *
*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0;int j = 0;
    if(iRow != iCol)
    {
        return;
    }

    for(i = 1;i <= iRow ;i++)
    {
        for(j= 1;j <= i;j++)      //   OPTIMIZATION ALSO ON iCol; number 2
        {
          
                printf("*\t");     // removing if condition
            
        }
        printf("\n");


    }
}



int main()
{
    int iValue1 = 0; int iValue2 = 0;

    printf("Please enter of rows: \n");
    scanf("%d",&iValue1);

    printf("Please enter of columns: \n");
    scanf("%d",&iValue2);


    Display(iValue1,iValue2);

    return 0;
}