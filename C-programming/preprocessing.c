#include <stdio.h>
#define PI 2.003   // defined PI

int main() {
    float radius, area;

    printf("Enter the radius: \n");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area = %.2f\n", area);

    return 0;
}

