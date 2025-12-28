#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the Number:");
	scanf("%d",&n);
	printf("Enter the position to toggle:");
	scanf("%d",&i);
	n ^= (1 << i);
	printf("After toggiling %d the bit:%d\n",i,n);
	return 0;
}
