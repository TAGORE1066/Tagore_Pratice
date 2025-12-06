#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char *p = str;
	int a = 0, d = 0, s = 0;
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	while(*p != '\0')
	{
		if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
			a++;
		else if(*p >= '0' && *p <= '9')
			d++;
		else
			s++;
		p++;
	}
	printf("Alphabets:%d\nDigits:%d\nSpecial:%d\n",a,d,s);
	return 0;
}

