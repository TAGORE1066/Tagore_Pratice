#include <stdio.h>
int main()
{
int sum,a,b;
float average;
printf("Enter the values:");

scanf("%d %d",&a,&b);
sum = a + b;

average = sum / 2.0;

printf("Sum of two numbers:%d\n",sum);
printf("Average of two numbers:%.2f\n",average);

return 0;

}
