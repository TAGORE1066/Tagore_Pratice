#include <stdio.h>
int main()
{
int num;
printf("Enter the numbers:");
scanf("%d",&num);

if(num & 1)
{
printf("%d is a odd number.\n",num);
}
else
{
printf("%d is a even number.\n",num);
}
return 0;
}
