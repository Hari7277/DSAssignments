#include <stdio.h>
#include <stdlib.h>

struct Node{
	char data;
	struct Node* next;
};

struct Node* addemp(struct Node *l,char a)
{
	if(l!=NULL)
	 return l;
	 
	struct Node* p = (struct Node*)malloc(sizeof(struct Node));
	p->data=a;
	l=p;
	l->next=l;
	return l;
}

struct Node* addbeg(struct Node *l , char a)
{
	if(l==NULL)
	  return addemp(l,a);
	  
	struct Node* p =(struct Node*)malloc(sizeof(struct Node*));
	p->data=a;
	p->next=l->next;
	l->next=p;
	return l; 
}

struct Node* addend(struct Node *l,char a)
{
	if (l == NULL)
        return addemp(l,a);
     
    struct Node *p =(struct Node *)malloc(sizeof(struct Node));
 
    p -> data = a;
    p -> next = l -> next;
    l -> next = p;
    l = p;
 
    return l;
}

struct Node *addAfter(struct Node *l, char a, char b)
{
    if (l == NULL)
        return NULL;
  
    struct Node *p, *t;                                                    
    t = l -> next;
    do
    {
        if (t ->data == b)
        {
            p = (struct Node *)malloc(sizeof(struct Node));
            p -> data = a;
            p -> next = t -> next;
            t -> next = p;
 
            if (t == l)
                l = p;
            return l;
        }
        t = t -> next;
    }  while(t != l -> next);
 
    printf("%c is not present in the list");
    return l;
}

void traverse(struct Node *l)
{
    struct Node *p;
 
    if (l == NULL)
    {
        printf("List is empty");
        return;
    }
    p = l -> next;
 
    do
    {
        printf("%c ",p->data);
        p = p -> next;
 
    }
    while(p != l->next);
 
}

int main()
{
    struct Node *l = NULL;
 
    l = addemp(l, 'i');
    l = addbeg(l, 'e');
    l = addbeg(l, 'a');
    l = addend(l, 'u');
    l = addAfter(l, 'o', 'i');
 
    traverse(l);
 
    return 0;
}
