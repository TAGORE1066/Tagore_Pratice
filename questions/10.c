#include <stdio.h>

int main()
{

int days,weeks,years;

printf("Enter the number of days: ");
scanf("%d",&days);
years = days / 365;
days = days % 365;

weeks = days / 7;
days = days % 7;

printf("Enter the years :%d\n",years);
printf("Enter the weeks :%d\n",weeks);
printf("Enter the days : %d\n",days);

return 0 ;

}

