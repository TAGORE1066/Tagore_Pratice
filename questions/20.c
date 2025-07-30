#include <stdio.h>
int main()
{

float kg,gm,grams,kilograms;

printf("Enter the values:");
scanf("%f",&kg);
grams = kg * 1000;
printf("kilograms to grams:%f\n",grams);


scanf("%f",&gm);
kilograms = gm / 1000;
printf("grams to kilograms:%f\n",kilograms);

return 0;
}
