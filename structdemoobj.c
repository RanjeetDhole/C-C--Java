#include<stdio.h>
struct Demo
{
	int arr[3];
	float brr[2];
	
};
int main()
{	
struct Demo obj;
	obj.arr[0] = 10;
	obj.arr[1] = 20;
	obj.arr[2] = 30;
	
	obj.brr[0] = 10.11;
	obj.brr[1] = 20.11;
	
	printf("%d\n",obj.arr[0]);

	return 0;
}