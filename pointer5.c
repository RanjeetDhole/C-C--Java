#include<stdio.h>
int main()
{
int *p;
int no = 10;
p= &no;

printf("value of variable no is : %d\n",no);
printf("value of variable no is : %d\n",*p);
printf("Address of variable no is : %p\n",&no);
printf("value of variable no is : %p\n",p);
printf("value of variable p is : %p\n",&p);


return 0;

}
