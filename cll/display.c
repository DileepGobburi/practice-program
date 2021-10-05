#include"header.h"
void display()
{
	temp= head;
	while(temp->next!=head)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
		
		printf("last element=%d\n",temp->data);
}	

