#include <stdio.h>
int main()
{
	char *p = "hello";
	for(int i =0; i<5; i++)
	{
		printf("%c ",*p);
	p++;
	}
	return 0;
}
