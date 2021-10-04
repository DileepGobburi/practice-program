#include"header.h"
void dte_bgn()
{
	temp=head;
	head=head->next;
	temp->next=NULL;
}

