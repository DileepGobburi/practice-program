#include"header.h"
void odd()
{
temp=head;
	while(temp->next!=head)
		{	
			int var=temp->data;
			if(var%2==0)
			{
				printf("%d\n", temp->data);
				temp=temp->next;
			
			}
			else
			{
		
			temp=temp->next;
			}
		}
}		
		

