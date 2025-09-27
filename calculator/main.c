#include <stdio.h>
#include "calc.h"
int main()
{
	int a,b;

	printf("Enter the number:");
	scanf("%d %d",&a,&b);

	printf("Addition:%d\n",add(a,b));
	printf("Subtraction:%d\n",sub(a,b));
	printf("Multiplication:%d\n",mul(a,b));
	printf("Division:%d\n",divi(a,b));

	return 0;
}
