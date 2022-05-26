#include<stdio.h>
int main()
{
double L,B,D;
double area;

printf("Enter the value of length : ");
scanf("%f",&L);

printf("Enter the value of breadth : ");
scanf("%f",&B);

printf("Enter the value ofdepth : ");
scanf("%f",&D);

area = L*B*D;

printf("Area of rectangle: %f\n",&area);


return 0;
}