#include<stdio.h>
#include<stdlib.h>
struct node
	{
		int data;
		struct node *next;
	}*new,*head,*tail,*temp;
int value;
void add_bgn();
void add_end(); 
void dte_bgn();
void dte_end();
void display();
void odd();

