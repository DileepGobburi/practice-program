#include"header.h"
void add_bgn()
{
	new=(struct node*)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&value);
	new->data=value;
	new->next=head;
	tail->next=new;
	head=new;
}

