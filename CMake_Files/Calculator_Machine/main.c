#include <stdio.h>
#include "calc.h"

int main()
{
	int a, b,choice;

	while(1)
	{
		printf("\n===Calculator===\n");
		printf("1.ADDITION");
		printf("2.SUBTRACTION");
		printf("3.MULTIPLICATION");
		printf("4.DIVISION");
		printf("\n");
		printf("Enter your choice:");
		scanf("%d",&choice);




		printf("Enter the Numbers:");
		scanf("%d %d",&a,&b);




		switch (choice)
		{
			case 1:
				printf("Result:%d\n",add(a,b));
				break;
			case 2:
				printf("Result:%d\n",sub(a,b));
				break;
			case 3:
				printf("Result:%d\n",mul(a,b));
				break;
			case 4:
				printf("Result:%d\n",divi(a,b));
				break;

		}
	}

	return 0;

}


