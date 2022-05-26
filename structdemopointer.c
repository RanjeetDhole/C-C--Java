#include<stdio.h>

struct Demo
{
int *ip;
float *fp;
};
int main()
{
struct Demo obj;
	int no = 10;
	float f =20.11;
	
	obj.ip = &no;
	obj.fp = &f;
	
	printf("%d\n",(obj.ip));
	printf("%d\n",(obj.fp));
	
	return 0;
}