#include <stdio.h>

int main()

{

int a,b,right,left;

printf("Enter the integers:");
scanf("%d",&a);

printf("Enter how many positions do you want ot shift:");
scanf("%d",&b);

right = a >> b;

left = a << b;

printf("right ot left shift:%d\n",right);
printf("left to right shift:%d\n",left);

return 0;

}

