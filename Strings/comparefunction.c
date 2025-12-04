#include <stdio.h>
#include <string.h>

int main()
{
char str1[] = "Hello";
char str2[] = "Helloworld";

int result = strncmp(str1,str2,4);

if(result == 0)
{
printf("First 4 lettters are same\n");
}
else
{
printf("First 4 letters are not same\n");
}

return 0;

}


