#include <stdio.h>
struct mark
{
int subject1,subject2,subject3,subject4,subject5;
int sum;
float average;
};

int main()
{
struct mark m;
printf("Enter the marks of 5 subjects:");
scanf("%d %d %d %d %d",&m.subject1, &m.subject2, &m.subject3, &m.subject4, &m.subject5);

m.sum = m.subject1 + m.subject2 + m.subject3 + m.subject4 + m.subject5;

m.average = m.sum / 5.0;

printf("Sum of the marks:%d\n",m.sum);
printf("Average of the marks:%.2f\n",m.average);

return 0;

}
