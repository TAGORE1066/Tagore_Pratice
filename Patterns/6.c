#include <stdio.h>
int main()
{
int i,j,k;
for(i=0; i<=10; i++)
{
for(j=0; j<2*i; j++)
{
printf(" ");
}
for(k=0; k<2*(10-i)-1; k++)
{
printf("* ");
}
printf("\n");
}
return 0;
}
