#include <stdio.h>

int main()
{
int arr[5] = {10,20,30,40,50};
int *p1 = &arr[1];
int *p2 = &arr[3];

if(p1 < p2)
{
printf("p1 is before p2 in memory\n");
}
else
{
printf("p1 is not before p2\n");
}

if(p1 == p2)
{
printf("both point to same element\n");
}
else
{
printf("they point to different element\n");
}

return 0;

}
