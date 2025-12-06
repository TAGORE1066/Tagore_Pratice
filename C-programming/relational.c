#include <stdio.h>
int main()
{
int a = 12, b = 14;

printf("Enter the numbers: ");
scanf("%d %d",&a,&b);
printf("a == b : %d\n",a == b);
printf("a != b : %d\n",a != b);
printf("a > b : %d\n",a > b);
printf("a < b : %d\n",a < b);
printf("a >= b : %d\n",a >= b);
printf("a <= b : %d\n",a <= b);

return 0;
}

