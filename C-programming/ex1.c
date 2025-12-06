#include <stdio.h>

int main() {
    unsigned int num, result;
    int shift;

    // Input from user
    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter how many positions to shift right: ");
    scanf("%d", &shift);

    // Right shift operation
    result = num >> shift;

    // Output result
    printf("After right shifting %d positions: %u\n", shift, result);

    return 0;
}

