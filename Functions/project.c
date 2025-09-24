#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int divi(int a, int b)
{
	return a / b;
}
int main()
{
	int num1,num2,choice;
	printf("Enter the numbers:");
	scanf("%d %d",&num1, &num2);
	while(1){
		printf("\nCalculator\n");
		printf("\n");
		printf("1.Additon\n");
		printf("2.Subtraction\n");
		printf("3.Multiplication\n");
		printf("4.Division\n");
		printf("\n");
		printf("Enter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Addition:%d\n",add(num1,num2));
				break;
			case 2:
				printf("Subtraction:%d\n",sub(num1,num2));
				break;
			case 3:
				printf("Multiplication:%d\n",mul(num1,num2));
				break;
			case 4:
				printf("Division:%d\n",divi(num1,num2));
				break;
		}
	}
	return 0;
}

