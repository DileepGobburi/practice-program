#include"header.h"
void dte_end()
{
temp=head;
	while(temp->next!=tail)
		{
			temp=temp->next;
		}
	tail->next=NULL;
	temp->next=head;
	tail=temp;
}

