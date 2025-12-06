#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	char *p = str1,*q = str2;
	printf("Enter the string:");
	fgets(str1,sizeof(str1),stdin);
	str1[strcspn(str1,"\n")]='\0';
	while(*p != '\0')
	{
		*q = *p;
		p++;
		q++;
	}
	*q = '\0';
	printf("copied string:%s\n",str2);
	return 0;
} 
