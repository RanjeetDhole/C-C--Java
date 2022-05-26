#include<stdio.h>
int main()
{
auto int iFuel= 0;

printf("Enter your city name \n");
scanf("%d",&iFuel);

switch(iFuel)
{
case 1:
printf("wellcome to Mumbai\n");
printf("Petrol : 110\n");
printf("Diseal : 92\n");
printf("CNG : 57\n");
printf("LPG : 55\n");
break;

case 2:
printf("wellcome to Pune\n");
printf("Petrol : 109\n");
printf("Diseal : 91\n");
printf("CNG : 56\n");
printf("LPG : 55\n");
break;

case 3:
printf("wellcome to Nagpur\n");
printf("Petrol : 111\n");
printf("Diseal : 93\n");
printf("CNG : 59\n");
printf("LPG : 57\n");
break;

case 4:
printf("wellcome to Nashik\n");
printf("Petrol : 110\n");
printf("Diseal : 92\n");
printf("CNG : 57\n");
printf("LPG : 55\n");
break;

case 5:
printf("wellcome to Kolhapur\n");
printf("Petrol : 108\n");
printf("Diseal : 93\n");
printf("CNG : 58\n");
printf("LPG : 54\n");
break;

defult :
printf("Invalid City");

}









return 0;
}