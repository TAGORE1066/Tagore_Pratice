#include <stdio.h>
int main() 
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if (n & 1)
		printf("LSB is 1 Odd number\n");
	else
		printf("LSB is 0 Even number\n");
	return 0;
}

