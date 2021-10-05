#include"header.h"
void add_end()
{
	new=(struct node*)malloc(sizeof(struct node));
	printf("enter data \n");
	scanf("%d",&value);
	new->data=value;
	tail->next=new;
	new->next=head;
	tail=new;
}

