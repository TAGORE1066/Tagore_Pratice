#include <stdio.h>

int main()
{

int maths,english,science,social,telugu,total;
float average,percentage;

printf("Enter the marks:");
scanf("%d %d %d %d %d",&maths,&english,&science,&telugu,&social);

total = maths + english + science + social + telugu;
average = total / 5.0;
percentage = (total / 500.0 ) * 100;

printf("Total of five subjects:%d\n",total);
printf("Average of five subjects:%.2f\n",average);
printf("Percentage of five subjects:%.2f\n",percentage);

return 0;

}
