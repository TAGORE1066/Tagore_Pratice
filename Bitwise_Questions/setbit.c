#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the Number:");
	scanf("%d",&n);
	printf("Enter the bit position to set:");
	scanf("%d",&i);
	n = n | (1 << i);
	printf("After seting the %d bit:%d\n",i,n);
	return 0;
}
