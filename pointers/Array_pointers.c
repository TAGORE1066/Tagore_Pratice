#include <stdio.h>
int main()
{
	int a = 10,b = 20,c = 30;
	int *p[3] = {&a,&b,&c};

	for(int i = 0; i < 3; i++)
	{
		printf("Address:%d\n",*p[i]);

		printf("Value of array:%p\n",p[i]);
		printf("\n");
	}
	return 0;
}
