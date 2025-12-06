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
	struct node *current = malloc(sizeof(struct node));
	current->data = 20;
	current->link = NULL;
	head->link = current;
	printf("%d->",head->data);
	printf("%d\n",head->link->data);
	return 0;
}
