#include <stdio.h>
int main()
{
float principal,time,rate,simpleintrest;

printf("Enter the values:");
scanf("%f %f %f",&principal,&time,&rate);
simpleintrest = principal * rate * time / 100;

printf("calculation of simple intrest:%.2f\n",simpleintrest);

return 0;

}
