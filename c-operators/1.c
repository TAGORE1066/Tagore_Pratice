#include <stdio.h>
int main()
{
int a,b,n;

printf("Enter the numbers:");
scanf("%d %d",&a,&b);

n = a;
a = b;
b = n;

printf("swap numbers a =%d,b =%d\n",a ,b);

return 0;

}
