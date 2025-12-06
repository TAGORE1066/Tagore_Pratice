#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char *p = str;
	int words = 1;
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	while(*p != '\0')
	{
		if(*p == ' ' && *(p+1) != ' ' && *(p+1) != '\0')
			words++;
		p++;
	}
	printf("Count of Words:%d\n",words);
	return 0;
}
