#include <stdio.h>
#include <string.h>

int main()
{
char str[] = {'H','e','l','l','o'};  //0,1,2,3,4
char dest[6];

strncpy(dest,str,2);
printf("%s\n",dest);

return 0;

}
