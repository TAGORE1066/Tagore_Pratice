#include <stdio.h>
int main()
{
	int a[100],n;
	printf("Enter the Number of Elements:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	printf("Array of elements:");
	for(int i = 0; i < n; i++)
		printf("%d\n",a[i]);
	return 0;
}
