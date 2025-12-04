#include <stdio.h>

int main()
{
char name[20];
printf("Enter the name:");
fgets(name);
printf("Hello %s\n",name);

return 0;

}

