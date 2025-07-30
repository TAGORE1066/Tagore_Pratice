#include <stdio.h>
#include <math.h>

int main()
{

float side,area;
printf("Enter the values: ");
scanf("%f",&side);
area = (sqrt(3) / 4 ) * side * side;

printf("Area of an equilateral triangle:%.2f\n",area);

return 0;

}

