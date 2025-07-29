#include <stdio.h>

int main()
{
float centimeteres,meteres,kilometeres;

printf("Enter the length: ");
scanf("%f",&centimeteres);
meteres = centimeteres / 100;
kilometeres = centimeteres / 100000;

printf("Enter the meteres: %.2f\n",meteres);
printf("Enter the kilometeres: %.2f\n",kilometeres);

return 0;

}
