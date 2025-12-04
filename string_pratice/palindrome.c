#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int length = 0,flag = 0,i=0,j;
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	for(int i = 0; str[i] != '\0'; i++)
		length++;
	for(int i = 0, j = length-1; i < j; i++, j--)
	{
		if(str[i] != str[j])
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		printf("It is a palindrome\n");
	else
		printf("It is not a palindrome\n");
	return 0;
}
