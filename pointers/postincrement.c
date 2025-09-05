#include <stdio.h>

int  main()
{

int arr[5] = {1,3,5,7,9};

int *p = arr;
for(int i = 0; i < 5; i++)

{

printf("Post-incremwnt: %d = %d\n",i,*p++);

}

printf("\n");
p = arr;

printf("Pre-increment:%d = %d\n",0,*p);

for(int j = 1; j < 5; j++)

{

printf("Pre-increment: %d = %d\n",j,*++p);

}

return 0;

}
