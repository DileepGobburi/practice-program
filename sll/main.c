#include"header.h"
int main()
{
    int value,n;
    char ch,ch1;	
	do 
	{
		new =(struct node*)malloc(sizeof(struct node));
		printf("enter the node data\n");
		scanf("%d",&value);
		new->data=value;
		new->next=NULL;
		
		if(head==NULL)
			{
				head=new;
				tail=new;
			}
		else
			{
				tail->next=new;
				tail=new;
			}
			
	printf("you want to add data y-yes n-no\n");
	scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	
	do
		{	
			printf("enter 1. add_ bgn 2. add_end 3. dte_bgn 4.dte_end 5.display\n");
			scanf("%d",&n);
		switch(n)
			{
			case 1: add_bgn();break;
			case 2: add_end();break;
			case 3: dte_bgn();break;
			case 4: dte_end();break;
			case 5: display();break;
			default:printf("invalid operator\n");
			}
		
		printf("ente next fun() y-yes n- no \n");
		scanf(" %c",&ch1);
}while((ch1=='y')||(ch1=='Y'));	
}


