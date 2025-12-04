#include <stdio.h>
#include <string.h>
int main()
{
	char str[200];
	int i=0,count = 1;
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	for(i = 0; str[i] != '\0'; i++)

	{
		if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')

		count++;
	}
	printf("Words Count:%d\n",count);
	return 0;
}
