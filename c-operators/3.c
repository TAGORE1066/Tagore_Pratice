#include <stdio.h>

int main()
{

int a,b,result,or,xor;

printf("Enter the inetegers:");
scanf("%d %d",&a,&b);

result = a & b;
or = a | b;
xor = a ^ b;

printf("AND operation:%d\n",result);
printf("OR operation:%d\n",or);
printf("XOR operation:%d\n",xor);

return 0;

}
