#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *head =NULL;
struct node *temp = NULL;
struct node *tail = NULL;
int main()
{
	temp = malloc(sizeof(struct node));
	temp->data=10;
	temp->link=NULL;
	if(head == NULL)
	{
		head = tail = temp;
	}
	temp = malloc(sizeof(struct node));
	temp->data=20;
	temp->link=NULL;
	head->link=temp;
	tail = temp;
	temp = malloc(sizeof(struct node));
	temp->data = 30;
	temp->link=NULL;
	tail->link =temp;
	tail=temp;
	temp = malloc(sizeof(struct node));
	temp->data =40;
	temp->link =NULL;
        tail->link=temp;
	tail=temp;
	
	printf("%d->",head->data);
	printf("%d->",head->link->data);
	printf("%d->",head->link->link->data);
	printf("%d\n",head->link->link->link->data);
	return 0;
}
