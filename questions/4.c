#include <stdio.h>

int main()
{
int length;
int breadth;
int perimeter;

printf("Perimeter of rectangle: ");
scanf("%d %d",&length,&breadth);
perimeter=2 *(length + breadth);
printf("perimeter of a rectangle:%d\n",perimeter);

return 0;
}

