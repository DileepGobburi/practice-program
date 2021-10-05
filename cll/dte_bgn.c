#include"header.h"
void dte_bgn()
{
	temp=head;
	head=head->next;
	tail->next=head;
	temp->next=NULL;
}

