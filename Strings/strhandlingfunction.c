#include <stdio.h>
#include <string.h>

int main()
{
char str[] = {"Welcome"};
char *ptr;

ptr = strchr(str,'c');

if(ptr != NULL)
{
printf("Found character:%c\n",*ptr);
}
else
{
printf("Character not found\n");
}

return 0;

}
