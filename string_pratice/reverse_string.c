#include <stdio.h>
#include <string.h>
int main()
{
	char str[100],i = 0,temp,j;
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
		while(str[i] != '\0')
		{
			i++;
	}
				j=i-1;
			i =0;
		
	while(i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	printf("%s\n",str);
}

