#include <stdio.h>

int main()

{
int num,count = 0;

printf("Enter the numbers:");
scanf("%d",&num);

while(num)
{
if(num & 1)
count++;
num = num >> 1;
}

printf("Count number of set bits:%d\n",count);

return 0;

}


