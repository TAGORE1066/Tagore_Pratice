#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int length = 0;
	printf("Enter the string:\n");
	gets(str);
	for(int i = 0; str[i] != '\0'; i++)
		length++;
	printf("%d\n",length);
	return 0;
}
