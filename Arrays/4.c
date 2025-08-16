#include <stdio.h>

int main()
{
int arr[5] = {10,90,100,30,1};
int n = 5,temp;
temp = arr[0];

for(int i = 0; i < n; i++)
{
if( temp < arr[i])
   temp = arr[i];
}
printf("Array elements: ");
for(int i = 0; i < n; i++)
{
printf("%d ",arr[i]);
}
printf("\n");
printf("Highest value of the give number:%d\n",temp);

return 0;
}
