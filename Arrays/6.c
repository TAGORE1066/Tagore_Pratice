#include <stdio.h>

int main()
{
int arr[5] = {1,2,3,4,5};
int n = 5;
int rev[5];

for(int i = 0; i < n; i++)
{
rev[i] = arr[n-1-i];
}
printf("Reverse array:\n");
for(int i = 0; i < n; i++)
{
printf("%d\n",rev[i]);
}
return 0;
}
