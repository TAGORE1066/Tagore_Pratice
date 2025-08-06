#include <stdio.h>
int main()
{
int i,num;
printf("Enter the value:");
scanf("%d",&num);

printf("Enter the bit position:");
scanf("%d",&i);

num = num ^ (1 << i);

printf("Toggle the bit %d:%d\n",i,num);

return 0;

}

