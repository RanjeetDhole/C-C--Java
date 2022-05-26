#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size = 0;
	int *ptr = NULL;

	printf("Enter number of element : ");
	scanf("%d",&size);

	ptr = (int *)malloc(size * sizeof(int));
	if(ptr == NULL)
{
	printf("Unable to allocate memory\n");
}
else
{
	printf("Memory succesfully allocated\n");
}


	free(ptr);
	return 0;
}