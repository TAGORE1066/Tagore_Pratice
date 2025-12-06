#include <stdio.h>
int main() {
    int marks = 75;

    if (marks >= 35 && marks < 50)
        printf("Pass\n");
    else if (marks >= 50 && marks < 75)
        printf("Good\n");
    else if (marks >= 75 && marks <= 100)
        printf("Excellent\n");
    else
        printf("Fail\n");

    return 0;
}

