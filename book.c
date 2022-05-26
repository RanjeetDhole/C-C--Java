#include<stdio.h>
int main()
{
int i = 0;
int n;
int m[10];
printf("ENTER THE NUMBER : ");
scanf("%d",&n);
while(n != 0)
{
m[i] = n % 10;
n = n / 10;
i++;
}
--i;
while(i >= 0);
{
switch(m[i])
 {
	case 0:
	printf("ZERO");
	break;
	case 1:
	printf("ONE");
	break;
	
	case 2:
	printf("TWO");
	break;
	
	case 3:
	printf("THREE");
	break;
	
	case 4:
	printf("FOUR");
	break;
	
	case 5:
	printf("FIVE");
	break;
	
	case 6:
	printf("SIX");
	break;
	
	case 7:
	printf("SEVEN");
	break;
	
	case 8:
	printf("EIGHT");
	break;
	
	case 9:
	printf("NINE");
	break;
	
}
 }	

return 0;
}