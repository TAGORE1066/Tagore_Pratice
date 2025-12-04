#include <stdio.h>
#include <string.h>

int main()
{
	char str[4] = {"123"};
	char dest[4];

	strcpy(dest,str);
	printf("%s\n",dest);

	return 0;

}
