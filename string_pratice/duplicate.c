#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,j,k=0,flag=0;
	char result[100];
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == '\n' || str[i] != '\0');
	}
	for(i = 0; str[i] != '\0'; i++)
	{
	int flag = 0;
		for(j = 0; j < k; j++)
		{
			if(result[j] == str[i])
			{
				flag=1;
				break;
			}
		}
		if(flag == 0)
		{
			result[k] = str[i];
			k++;
		}
	}
	result[k] = '\0';
	printf("Duplicates removing:%s\n",result);
	return 0;
}
