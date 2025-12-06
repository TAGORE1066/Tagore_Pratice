#include <stdio.h>
int main()
{
	int a[100],n,count = 0;;
	printf("Enter the no.of Elements:");
	scanf("%d",&n);
	printf("Enter %d Elements:",n);
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	printf("Negative Elements\n");
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			printf("%d\n",a[i]);
			count++;
		}
	}
	printf("Total No.Of Negative Elements:%d\n",count);
	return 0;
}
