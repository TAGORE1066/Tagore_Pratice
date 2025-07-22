#include <stdio.h>
void remember(int n)
{
static int remember;
printf("diplay the values:%d\n",remember);
remember++;
}
int main()
{
remember();
return 0;
}

