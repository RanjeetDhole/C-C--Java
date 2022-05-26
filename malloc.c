#include<stdio.h>
#include<stdlib.h>


int main()
{
int n,i,*ptr,sum = 0;

printf("Enter number of element : ");
scanf("%d",&n);

ptr = (int*)malloc(n * sizeof(int));

if(ptr == NULL)

{
printf("Error! memory not allocated.");
exit(0);
};

printf("Enter element : ");
for(i=0;i<n;++i)
{
scanf("%d",ptr + i);
sum += *(ptr +i);
}

}
printf(sum = "%d",sum);

free(void*);



//return 0;
}