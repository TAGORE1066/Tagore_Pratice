#include <stdio.h>

int main()

{

int num;

printf("Enter the numbers:");
scanf("%d",&num);

if(num % 5 == 0 && num % 11 == 0)
{
printf("%d Divisible by 5 and 11.\n",num);
}
else if(num % 5 == 0)
{
printf("%d Divisible by 5.\n",num);
}

else if(num % 11 == 0)
{
printf("%d Divisible by 11.\n",num);
}
else
{
printf("%d Not divisible by 5 and 11.\n",num);
}
return 0;

}
