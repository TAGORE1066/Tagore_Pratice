#include <stdio.h>

int main()
{

char arr[7] = {'w','e','l','c','o','m','e'};
char *ptr1  = &arr[0];
char *ptr2  = &arr[6];

printf("Difference: %d\n",*ptr2 - *ptr1);

return 0;

}
  
