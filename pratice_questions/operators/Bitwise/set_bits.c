#include <stdio.h>
int main()
{
	int num,count = 0;
	printf("Enter the Number:");
	scanf("%d",&num);
	while(num > 0)
	{
		if(num & 1)
			count++;
		num = num >> 1;
	}
	printf("Number of 1 set bits:%d\n",count);
	return 0;
}
