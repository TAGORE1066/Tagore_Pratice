#include <stdio.h>

int main()
{

int arr[5] = {40,30,20,50,10};
int temp,i,num;

temp = arr[4];
arr[4] = arr[0];
arr[0] = temp;

num = arr[2];
arr[2] = arr[1];
arr[1] = num;




printf("Array swaping:\n");
for(int i=0; i<5; i++)
{
printf("%d\n",arr[i]); 
}
return 0;
}
