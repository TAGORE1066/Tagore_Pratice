#include <stdio.h>
#include "operations.h"

int main() {
    int a, b;

    printf("Enter two numbers: ");

    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Add: %d\n", add(a, b));
    printf("Multiply: %d\n", multiply(a, b));

    return 0;
}

