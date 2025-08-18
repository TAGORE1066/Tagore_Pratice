#include <stdio.h>

int main()
{

int arr[6] = {5,2,9,1,5,6};
int temp;

for(int i = 0; i < 6; i++)
{
for(int j = 1; j < i + 1; j++)
{
if(arr[i] > arr[j])
{

temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
printf("Sorted Array: ");
for(int j = 0; j < 6; j++)
{
printf("%d\n",arr[j]); 
}
return 0;
}
