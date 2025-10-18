#include <stdio.h>
int main()
{
	int a[10],n = 0,choice,i;


	while(1)
	{
		printf("\n");
		printf("...Array Operation..\n");
		printf("1. Insert Element\n");
		printf("2. Display Element\n");
		printf("3. Exit\n");

		printf("\n");

		printf("Enter our choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: printf("How many elements do u insert: ");
				scanf("%d",&n);
				if(n > 10)
				{
					printf("cannot insert more than 10 elements \n");
					n = 10;
				} 
				for(int i = 0; i <n; i++)
				{
					printf("Enter elements %d: ",i+1);
					scanf("%d",&a[i]);
				}
				break;
			case 2:
				if(n == 0)
				{
					printf("Array is Empty\n");
				}
				else
				{
					printf("Array elements: ");
					for(int i = 0; i < n; i++)
					{
						printf("%d",a[i]);
					}
					printf("\n");
					break;

					case 3:
					printf("Exiting program.\n");
					break;
					default:
					printf("invalid choice.\n");
				}
				while (choice != 3);

		}
	}
	return 0;
}


