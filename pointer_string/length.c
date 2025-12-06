#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char *p = str;
	int length = 0;
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
   	str[strcspn(str,"\n")]='\0';
	while(*p != '\0')
	{
		length++;
		p++;
	}
	printf("string length:%d\n",length);
	return 0;
}
