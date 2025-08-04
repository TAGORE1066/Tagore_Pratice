#include <stdio.h>

int main()
{
int i;
float f;
char c;
short int si;
long int li;
double d;
long double ld;

printf("Size of int: %d bytes\n",sizeof(i));
printf("Size of float : %zu bytes\n",sizeof(f));
printf("Size of char : %zu bytes\n",sizeof(c));
printf("Size of short int: %d bytes\n",sizeof(si));
printf("Size of long int: %ld bytes\n",sizeof(li));
printf("Size of double: %zu bytes\n",sizeof(d));
printf("Size of long double: %zu bytes\n",sizeof(ld));

return 0;

}
