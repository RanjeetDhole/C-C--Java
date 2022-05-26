#include<stdio.h>
int main()
{
auto int iAge = 0;

printf("Enter your Age \n");
scanf("%d",&iAge);

if((iAge >= 0) && (iAge <= 10))
{
printf("All of you play:  Block Game\n");
}
else if ((iAge > 10) && (iAge <= 20))
{
printf("All of you play:  Cricket Game\n");
}
else if (iAge > 20)
{
printf("All of you play: Football Game\n");
}

return 0;
}