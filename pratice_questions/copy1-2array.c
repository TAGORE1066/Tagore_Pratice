#include <stdio.h>
int main()
{
	int n,a[100],b[100];
	printf("Enter no.of Elements:");
	scanf("%d",&n);
	printf("Enter %d Elemenents:",n);
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	for(int i = 0; i < n; i++)
		b[i] = a[i];
	printf("Copied Array Element\n");
	for(int i = 0; i < n; i++)
		printf("%d\n",b[i]);
	return 0;
}
