#include <stdio.h>
#include "prime.h"

int main()

{

	int num;

	printf("Enter the Number:");
	scanf("%d",&num);

	if(is_prime(num))

	{
		printf("%d It is a prime number\n",num);
	}

	else
	{
		printf("%d It is not a prime number\n",num);
	}

	return 0;
}
