#include <stdio.h>
#include <string.h>
int main()
{
	char str[100], *p = str;
	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str,"\n")]='\0';
	while(*p != '\0')
	{
		if(*p >= 'a' && *p <= 'z')
			*p = *p - 32;
		else if(*p >= 'A' && *p <= 'Z')
			*p = *p + 32;
		p++;
	}
	printf("Toggled: %s\n", str);
	return 0;
}

