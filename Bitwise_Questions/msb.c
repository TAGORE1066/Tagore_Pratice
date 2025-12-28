#include <stdio.h>
int main()
{
	int n, msb = 0;
	printf("Enter the Number:");
	scanf("%d", &n);
	while (n > 1)
	{
		n = n >> 1;
		msb++;
	}
	printf("MSB position = %d\n", msb);
	return 0;
}

