#include<stdio.h>
int main()
{
int no = 999;
int *pno = &no;

char ch = 'R';
char *pch = &ch;

float ft = 11.9;
float *pft = &ft;

double dd = 20.9;
double *pdd = &dd;

printf("value of no is: %d\n",no);
printf("name of person is: %c\n",ch);
printf("%d\n",sizeof(*pno));
printf("%d\n",sizeof(*pch));
printf("Address of person is: %d\n",&ch);


return 0;
}