#include <stdio.h>

int main()
{
int arr[3] = {0,1,2};
int size = sizeof(arr)/sizeof(arr[0]);

printf("%d\n",size);

return 0;
}
