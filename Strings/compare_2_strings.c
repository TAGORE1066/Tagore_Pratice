#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i;
	printf("Enter the string1:");
	fgets(s1,sizeof(s1),stdin);
	printf("Enter the string2:");
	fgets(s2,sizeof(s2),stdin);
	for(i =0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if(s1[i] != s2[i])
		{
			printf("Strings ar not Equal\n");
		}
	}
	printf("Strings are Equal\n");
	return 0;
}
