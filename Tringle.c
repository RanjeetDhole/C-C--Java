#include<stdio.h>
int main()
{
float AREA,B,H;

printf("Enter the height of tringle : ");
scanf("%f",&H);

printf("Enter the Base of tringle : ");
scanf("%f",&B);

AREA = 0.5f*B*H;

printf("Area of the given is: %6.2f",AREA);

return 0;
}