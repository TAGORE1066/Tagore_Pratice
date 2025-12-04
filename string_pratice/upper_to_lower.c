#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter Upper Case:");
	fgets(str,sizeof(str),stdin);
	for(int i =0; str[i] != '\0';i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] +32;
	}
	printf("Lower case:%s\n",str);
	return 0;
}
