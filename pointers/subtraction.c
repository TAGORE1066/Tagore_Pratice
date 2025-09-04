#include <stdio.h>

int main()
{

int arr[5] = {1,3,5,7,9};
int *ptr = &arr[4];

printf("%d",*ptr);
printf(" %d",*(ptr - 1));
printf(" %d",*(ptr - 2));
printf(" %d",*(ptr - 3));
printf(" %d\n",*(ptr - 4));


return 0;

}
