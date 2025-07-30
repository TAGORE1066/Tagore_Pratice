#include <stdio.h>

int main(void)
{
float length,base,height,area;

printf("Enter the values: ");
scanf("%f %f",&base, &height);
area = 0.5 * base * height;

printf("Area of a triangle:%.2f\n",area);

return 0;

}
