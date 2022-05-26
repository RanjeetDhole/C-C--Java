#include<stdio.h>

int main()
{
int arr[6] ={10,20,30,40,50,60};


int *P = arr;
int **R = &P;
int ***S = &R;
int ****T = &S;
int *****Q = &T;
//int *W = arr[3];

//printf("%d\n",*W);
printf("%d\n",*P);
printf("%d\n",arr[5]);
printf("%d\n",*R);
printf("%d\n",sizeof(**R));
printf("%d\n",****T);
printf("%d\n",*****Q);





return 0;
}