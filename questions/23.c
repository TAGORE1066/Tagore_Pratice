#include <stdio.h>
#include <math.h>

int main()
{

float principal,time,rate,compoundinterest,amount;

printf("Enter the principal amount,time(in years),rate(in percent):\n");
scanf("%f %f %f",&principal,&time,&rate);

amount = principal * pow((1 + rate / 100),time);
compoundinterest = amount - principal;


printf("Amount:%.2f\n",amount);
printf("Compound Interest:%.2f\n",compoundinterest);

return 0;

}
