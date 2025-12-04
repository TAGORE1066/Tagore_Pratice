#include <stdio.h>
#include <string.h>

int main()
{
char str1[10] = {"Wel"};
char str2[5] = {"come"};

strncat(str1, str2, 5);

printf("%s\n",str1);

return 0;

}
