#include <stdio.h>

int main()
{
int a = 10;

printf("a += :%d\n",a += 12);
printf("a -= :%d\n",a -= 15);
printf("a *= :%d\n",a *= 13);
printf("a /= :%d\n",a /= 14);
printf("a %%= :%d\n",a %= 4);
printf("a <<= :%d\n",a <<= 6);
printf("a >>= :%d\n",a >>= 3);
printf("a ^= :%d\n",a ^= 10);
printf("a &= :%d\n",a &= 7);

return 0;
}

