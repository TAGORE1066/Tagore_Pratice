#include <stdio.h>
int main()
{
int num,i;
printf("Enter the value:");
scanf("%d",&num);

printf("Enter the bit position to clear:");   //making 1's into 0 or 0 to 1's
scanf("%d",&i);

num = num & ~(1 << i);

printf("Result after clearing %d:%d\n",i,num);

return 0;

}

