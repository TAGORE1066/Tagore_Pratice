#include<stdio.h>
#include <string.h>
int main()
{
	char str[100],*p,*q,temp;
	int i =0;
	printf("Enter the sring:");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	p = str;
	while(*p != '\0')
	{
		while(*p == ' ')
		{
			p++;
		}
		q = p;
		while(*q != ' ' && *q != '\0')
		{
			q++;
		}
		q--;
		while(p<q)
		{
			temp = *p;
			*p = *q;
			*q = temp;
			p++;
			q--;
		}
		while(*p != ' ' && *p != '\0')
		{
			p++;
		}
	}
	printf("Reverse word sring:%s\n",str);
	return 0;
}
