#include"header.h"
void display()
{
	temp= head;
	while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
}	

