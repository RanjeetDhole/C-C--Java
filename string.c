#include<stdio.h>
#include<string.h>

int main()
{
char Arr[5] = "abcd";
char *ptr = Arr;

while(*ptr != '\0')
{
printf("%c\n",*ptr);

ptr++;
};

return 0;
}