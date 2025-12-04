#include <stdio.h>
#include <string.h>

int main()
{
char str[] = {"Hello World"};
char *ptr;

ptr = strrchr(str,'o');

if(ptr !=NULL)
{
printf("last occurance of 'o' found at position:%ld\n",ptr - str);
printf("substring from last 'o':%s\n",ptr);
}
else
{
printf("Character not found");
}
return 0;

}
