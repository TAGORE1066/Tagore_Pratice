#include <stdio.h>
int main()
{
int num,i;
printf("Enter the value:");
scanf("%d",&num);

printf("Enter the bit position:");
scanf("%d",&i);

int result = num | (1 << i);

printf("set the %d position:%d \n",i,result);


return 0;
}
