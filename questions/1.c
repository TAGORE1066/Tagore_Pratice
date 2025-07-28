#include <stdio.h>

int main(void)
{
int i;
float f;
char ch;
char str [100];
double d;
short int si;
long int li;

printf("Enter the integer value: ");
scanf("%d",&i);

printf("Enter the float value: ");
scanf("%f",&f);

printf("Enter the char value: ");
scanf("%c",&ch);

printf("Enter the string value: ");
scanf("%s",&str);
getchar();

printf("Enter the double value: ");
scanf("%lf",&d);

printf("Enter the short int value: ");
scanf("%hd",&si);

printf("Enter the long int value: ");
scanf("%ld",&li);

return 0;

}


