#include <stdio.h>
int main() {
    float x, y;
    printf("Enter two float numbers: ");
    scanf("%f %f", &x, &y);

    printf("Addition = %.2f\n", x + y);
    printf("Subtraction = %.2f\n", x - y);
    printf("Multiplication = %.2f\n", x * y);
    printf("Division = %.2f\n", x / y);

    return 0;
}

