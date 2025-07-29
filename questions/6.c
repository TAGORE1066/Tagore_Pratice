#include <stdio.h>
#define PI 3.14
int main()
{

float radius,diameter,circumference,area;

printf("Enter the radius of a circle: ");
scanf("%f",&diameter);
radius = diameter / 2;
printf("Radius of a circle:%f\n",radius);

printf("Enter the diameter of a circle: ");
scanf("%f",&radius);
diameter = 2 * radius;
printf("Diameter of a circle:%f\n",diameter);

printf("Enter the circumference of a circle: ");
scanf("%f", &radius);
circumference = 2 * PI * radius;
printf("circumference of a circle:%f\n",circumference);

printf("Enter the area of a circle: ");
scanf("%f",&radius);
area = PI * radius * radius;
printf("Area of a circle:%f\n",area);


return 0;

}
