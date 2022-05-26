#include<stdio.h>

struct Demo
	{
	int no;
	float f;

struct Hello

	{
	int na;
	};struct Hello hobj;

};struct Demo dobj;

int main()
{
dobj.no = 20;
dobj.f = 20.20;
dobj.hobj.na = 10; 


printf("%d\n",dobj.no);
printf("%d\n",dobj.hobj.na);


return 0;
}