#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void insertionatbeg(struct Node** p,int val)
{
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=val;
	ptr->next=*p;
    *p=ptr;
}

void insertionatmid(struct Node* head,int val,int index)
{
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	struct Node* p=head;
	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	ptr->data=val;
	ptr->next=p->next;
	p->next=ptr;
}
void insertionatend(struct Node* p,int val)
{
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	while(p->next!=NULL)
	{
		p=p->next;
	}
	ptr->data=val;
	ptr->next=NULL;
	p->next=ptr;
}


void display(struct Node* n)
{
	while(n!=NULL)
	{
       printf("%d ",n->data);
       n=n->next;       
	}
}
int main()
{
	struct Node* head=NULL;
    
    insertionatbeg(&head,100);
    insertionatend(head,300);
    insertionatmid(head,200,1);
    display(head);
    return 0;
}
