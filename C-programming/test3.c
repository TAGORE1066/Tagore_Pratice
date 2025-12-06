#include <stdio.h>

int main()

{
int a,b;
printf("Enter the number:");
scanf("%d %d",&a,&b);
if (a > b)
{
printf("a is largest number. %d\n");
}
else if(a < b)
{
printf("b is largest number.%d\n");
}
else
{
printf("both are equal.%d\n");
}
return 0;
}
