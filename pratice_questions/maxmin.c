#include <stdio.h>
int main()
{
	int a[100],max,min,n;
	printf("Enter no.of Elements:");
	scanf("%d",&n);
	printf("Enter %d Elements:",n);
	for(int i = 0; i < n; i++)

		scanf("%d",&a[i]);
	max = min = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] > max)
			max = a[i];
		if(a[i] < min)
			 min = a[i];
	}
	printf("Maximum %d\n Minimum %d\n",max,min);
	return 0;
}
