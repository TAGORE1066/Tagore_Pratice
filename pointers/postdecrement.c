#include <stdio.h>

int main()
{
int arr[5] = {1,3,5,7,9};
int *p = &arr[4];

for(int i = 0; i < 5; i++)
{

printf("Post-decrement: %d\n",*p--);

}

printf("\n");

p =&arr[5];

for(int j = 0; j < 5; j++)
{
printf("Pre-decrement: %d\n",*--p);
}
return 0;

}
