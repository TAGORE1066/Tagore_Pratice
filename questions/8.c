#include <stdio.h>

int main()
{

float fahrenheit,celsius;

printf("Enter the temperature: ");
scanf("%f",&celsius);
fahrenheit = (celsius * 9/5)+32;
printf("Enter temperature in celsius:%.2f\n",fahrenheit);

return 0;
}
