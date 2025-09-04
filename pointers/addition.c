#include <stdio.h>

int main()

{

int arr[5] = {2,4,5,6,10};
int *ptr = arr;

printf("%d",*ptr);
printf(" %d",*(ptr + 1));
printf(" %d",*(ptr + 2));
printf(" %d",*(ptr + 3));
printf(" %d\n",*(ptr + 4));


return 0;

}
