#include <stdio.h>

int main()

{
float centimeters,meters,kilometers;
printf("Enter the values:");
scanf("%f",&centimeters);
meters = centimeters / 100;
kilometers = centimeters / 100000;

printf("convertion of centimeters to meters:%.2f\n",meters);
printf("convertionof centimeters to kilometers:%.2f\n",kilometers);

return 0;

}
