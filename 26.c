
// Display marks on you screen
#include<stdio.h>

/*
0 to 35    Fail
35 to 50   Pass class
50 to 60   second class
60 to 70   First class
70 to 100  First class with distinction
*/

void DisplayClass(float fMarks)
{
    if((fMarks > 0.0) && (fMarks < 35.0))
    {
     printf("You are fail\n");

    }

    else if((fMarks >= 35.0 ) && (fMarks < 50.0))
    {
    printf("You are Pass\n");

    }

    else if((fMarks >= 50.0 ) && (fMarks < 60.0))
    {
     printf("You are second class\n");


    }
    else if((fMarks >= 60.0 ) && (fMarks < 70.0))
    {
     printf("You are First class\n");

    }
    else if((fMarks >= 70.0 ) && (fMarks <= 100.0))
    {
    printf("You are First class with distinction\n");

    }
    else
    {
    printf("Invalid marks\n");
    }

}


int main()
{
    float fValue = 0.0 ;

    printf("Enter the percentage\n");
    scanf("%f",&fValue);


    DisplayClass(fValue);


    return 0;
}