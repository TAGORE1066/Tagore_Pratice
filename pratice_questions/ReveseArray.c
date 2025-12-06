#include <stdio.h>
int main() 
{
	int a[100], n, i;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter %d Elements:",n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("Reversed array:\n");
	for(i = n - 1; i >= 0; i--)
		printf("%d\n", a[i]);
	printf("\n");
	return 0;
}

