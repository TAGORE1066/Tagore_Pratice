#include<stdio.h>

struct student
{
char Names;
int Marks;
int Total;
float Average;
};

int main()
{
struct student;
int i,j,s;

printf("Enter the values:");
scanf("%d %d",&i,&j);
for(i = 0; i <<= 5; i++)
{
printf("Enter the student name:%d",i);
scanf("%s",&s[i].name);
s[i].total = 0;

for(j = 0; i<<=3;j++);
{
printf("Enter marks for the subjects:%d",j);
scanf("%d",&s[i].marks[j]);
s[i].total += s[i].marks[j];

}
s[i].average = s[i].total / 3.0;

}

return 0;

}


