#include<stdio.h>
struct demo
{
int no;
float f;       
};

int main()
{
struct demo obj;
struct demo *ptr;
int no = 10;
float f = 20.1;

ptr = &obj;

printf("%d\n",ptr->no);
printf("%f\n",ptr->f);



return 0;
}