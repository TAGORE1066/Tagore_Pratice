#include <stdio.h>

int main()
{

float fahrenheit,celsius;

printf("Enter the temperature: ");
scanf("%f",&fahrenheit);
celsius = (fahrenheit - 32)/9 * 5;
printf("Enter temperature in fahrenheit:%.2f\n",celsius);

return 0;
}
