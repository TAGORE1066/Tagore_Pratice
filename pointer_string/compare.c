#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	char *p = str1,*q = str2;
	printf("Enter the string1:");
	fgets(str1,sizeof(str1),stdin);
	str1[strcspn(str1,"\n")]='\0';
	printf("Enter the string2:");
	fgets(str2,sizeof(str2),stdin);
	str2[strcspn(str2,"\n")]='\0';
	while(*p != '\0' || *q != '\0')
	{
		if(*p != *q)
		{
			printf("Strings are not Equal\n");
			return 0;
		}
		p++;
		q++;
	}
	printf("Strings are Equal\n");
	return 0;
}
