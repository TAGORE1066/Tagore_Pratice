#include <stdio.h>
int main()
{
	int a[100],sum = 0,n;
	printf("Enter no.of Elements:");
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	printf("Sum of Array Elements:%d\n",sum);
	return 0;
}
