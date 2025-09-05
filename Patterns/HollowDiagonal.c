#include <stdio.h>

int main()
{

int i,j,n;

printf("Enter the rows:");
scanf("%d",&n);

for(i = 0; i <= n; i++)

{

for(j = 0; j <= n; j++)

{

if(i == 0 || i == n || j == 0 || j == n|| i == j || (i + j == n-1))

{

printf("*");

}

else

{

printf(" ");

}

}

printf("\n");

}

return 0;

}

