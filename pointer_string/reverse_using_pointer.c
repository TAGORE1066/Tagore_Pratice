#include<stdio.h>
int main()
{
	char str[100],*p,*q,temp;
	int len=0;
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	p = str;
	while(*p != '\0')
	{
		len++;
		p++;
	}
	p = str;
	q = str+len-1;
	while(p < q)
	{
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}
	printf("Reverse stirng:%s\n",str);
	return 0;
}
