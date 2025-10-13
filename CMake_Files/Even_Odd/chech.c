#include <stdio.h>
#include "checker.h"

int is_even(int num)
{
	if(num % 2== 0)
	{
		printf("it is even:%d\n",num);
		return 1;
	}
	else
	{
		printf("it is odd:%d\n",num);
		return 0;
	}
}
