#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the Number:");
	scanf("%d",&n);
	printf("Enter the postion to clear:");
	scanf("%d",&i);
	n = n & ~(1 << i);
	printf("After clearing %d bit:%d\n",i,n);
	return 0;
}
