//Bubble Sort using Linked List


#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
	float data;
	struct node *next;
};
typedef struct node NODE;

void display( NODE *node) 
{ 
    while (node != NULL) 
    { 
        printf("    %.2f, ", node->data); 
        node = node->next; 
    } 
}

NODE *create()
{
	NODE *head, *cur, *temp;
	head=cur=temp=NULL;
	int w, qw, qe;
	char ch='y';
	while(ch=='y'||ch=='Y')
	{   
	    
		temp=(NODE*)malloc(sizeof(NODE));
		printf("Ent. Data \n :>");
		scanf("%f",&temp->data);
		temp->next=NULL;
		if(head==NULL)
		{
			head=cur=temp;
		}
		else
		{
			cur->next=temp;
			cur=cur->next;
			
		}
		printf("      Ent. Y to Cont. or N to stop\n      :>");
		scanf("%s",&ch);
	}
	return head; 
}

void bubble(NODE *head)
{
	NODE *temp, *cur;
	float sw;
	temp=head;
	while(temp->next!=NULL)
	{
		cur=temp;
       while(cur!=NULL)
       {
       	 
        if((temp->data)>(cur->data))
        {
     	sw=temp->data;
     	temp->data=cur->data;
     	cur->data=sw;
		}
		cur=cur->next;
	   }
	   temp=temp->next;
	}
}

void main()
{
	NODE *head;
	while(1)
	{    
	    int ch;
		printf("\nEnter 1: CREATE\nEnter 2: BUBBLE SORT\nEnter 3: DISPLAY\nEnter 4: EXIT\n:>");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			    head=create();
				break;
			case 2:
				bubble(head);
				break;
			case 3:
				display(head);
				break;
			case 4:
				exit(0);
		}
		
	}
}
