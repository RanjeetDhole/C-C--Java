#include<stdio.h>

struct Demo
{
int Brr[3];
double Drr[2];

};
 int main()
 {
 struct Demo obj;
 obj.Brr[0]=10;
 obj.Brr[1]=20;
 obj.Brr[2]=30;
 
 //Obj.Drr[0]=50.5;
 obj.Drr[1]=20.2;
 
 printf("%d\n",obj.Brr[0]);
 //printf("%d\n",obj.sizeof(obj));
 printf("%d\n",obj.Drr[1]);
 //printf("%d\n",obj.sizeof(Drr[1]));
 printf("%d\n",obj.Brr[1]);
 printf("%d\n",obj.Brr[2]);
 //printf("%d\n",obj.Drr[0]);

 return 0;
 }