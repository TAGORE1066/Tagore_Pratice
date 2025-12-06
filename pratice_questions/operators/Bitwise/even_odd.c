#include <stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num & 1)
	{
		printf("it is odd\n");
	}
	else
	{
		printf("it is even\n");
	}
	return 0;
}
