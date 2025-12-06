#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char *p = str;
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	while(*p != '\0')
	{
		if(*p >= 'a' && *p <= 'z')
			*p = *p -32;
		p++;
	}
	printf("Upper case:%s\n",str);
	return 0;
}
