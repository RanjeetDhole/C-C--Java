#include<stdio.h>
int main()
{
float A,B,H;
float AREA;

///area=((a+b)/2)*h;
//area=(0.5*(a+b))*h;

printf("Enter the value of A : ");
scanf("%f",&A);

printf("Enter the value of B : ");
scanf("%f",&B);

printf("Enter the value of H : ");
scanf("%f",&H);

AREA = (0.5f*(A+B))*H;

printf("Area of the given is: %6.2f",AREA);


return 0; 
}