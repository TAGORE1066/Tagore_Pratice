#include <stdio.h>

int main(void)
{
float angle1,angle2,angle3;

printf("Enter the values: ");
scanf("%f %f",&angle1, &angle2);
angle3 = 180 - (angle1 + angle2);

printf("Third angle of a triangle:%.2f\n",angle3);

return 0;

}

