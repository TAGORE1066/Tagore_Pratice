#include <stdio.h>
int main()
{
	int a[100],n,pos;
	printf("Enter the no.of Elements:");
	scanf("%d",&n);
	printf("Enter %d Elements:",n);
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	printf("Enter the position to Delete:");
	scanf("%d",&pos);
	for(int  i = pos-1; i < n-1; i++)
		a[i] = a[i + 1];
	n--;
	printf("Array after Deletion\n");
	for(int i = 0; i < n; i++)
		printf("%d\n",a[i]);
	return 0;
}
