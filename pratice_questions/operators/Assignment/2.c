#include <stdio.h>
int main() {
    int x = 5;
    int y;

    y = (x += 10) + 5; 

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}

