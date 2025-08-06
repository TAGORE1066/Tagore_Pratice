#include <stdio.h>

int main()
{

int num,i;

printf("Enter the number:");
scanf("%d",&num);

printf("Position of the bit:");
scanf("%d",&i);

if (num&(1 << i))
{
printf("set of ith bit number:%d\n",i);   //means set 1
}
else
{
printf("not set of ith bit number:%d\n",i);  //means set 0
}

return 0;
}
