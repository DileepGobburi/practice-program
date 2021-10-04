#include"header.h"
void dte_end()
{
temp=head;
	while(temp->next!=tail)
		{
			temp=temp->next;
		}
	temp->next=NULL;
	tail=temp;
}

