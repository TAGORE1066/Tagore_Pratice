#include <stdio.h>
int main()
{
	int n, rev = 0;
	printf("Enter a number:");
	scanf("%d", &n);
	for (int i = 0; i < 4; i++)
	{
		rev = (rev << 1) | (n & 1);
		n = n >> 1;
	}
	printf("Reversed bits value: %d\n",rev);
	return 0;
}

