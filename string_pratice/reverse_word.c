#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int i=0;
	char temp;
	int start=0;
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	while(1)
	{
		if(str[i] == ' ' || str[i] == '\0')
		{
			int left = start;
			int right = i-1;
			while(left < right)
			{
				temp = str[left];
				str[left] = str[right];
				str[right] = temp;
				left++;
				right--;
			}
			start = i+1;
		}
		if(str[i] == '\0')
			break;
		i++;
	}
	printf("Reverse string:%s", str);
	printf("\n");
	return 0;
}
