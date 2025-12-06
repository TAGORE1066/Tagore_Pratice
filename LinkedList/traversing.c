#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *link;
};
int main()
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 10;
	head->link = NULL;
	struct node *tail = malloc(sizeof(struct node));
	tail->data = 20;
	tail->link = NULL;
	head->link = tail;
	tail = malloc(sizeof(struct node));
	tail->data = 30;
	tail->link = NULL;
	head->link->link = tail;

	struct node *ptr = head;
	while(ptr != NULL)
	{
	printf("%d->",ptr->data);
	ptr = ptr->link;
	}
	printf("NULL\n");
	return 0;
}
