#include <stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5};
	int (*p)[5] = &arr;

	for(int i = 0; i < 5; i++)
	{
		printf("value of i:%d\n",(*p)[i]);
		printf("Address of i:%p\n",&(*p)[i]);
	}
	printf("\n");

}
