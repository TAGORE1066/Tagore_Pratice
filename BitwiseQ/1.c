#include <stdio.h>

int main()

{

int num;

printf("Enter the numbers:");
scanf("%d",&num);
 
if(num & 1 ==1)
{
printf("%d It is a odd number:\n",num);
}
else
{
printf("%d It is a even number:\n",num);
}
return 0;
}
