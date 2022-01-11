#include <stdio.h>
//#include <stdio.h>
#include<stdlib.h>
 
#define MAX 5
int i;
int top=-1,t1=-1,s1[MAX],s2[MAX];
void push();
void pop();
void display();
 
void main()
{
  int ch;
  while(1) 
  {
   printf("\n*** Stack Menu ***");
   printf("\n\n1.enqueue\n2.push\n3.Display Stack \n4.Dequeue\n5.Display Queue\n6.Exit");
   printf("\n\nEnter your choice(1-4):");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1: enqueue();
             break;
     case 2: push();
             break;
     case 3: display();
             break;
     case 4: dequeue();
             break;
     case 5: display2();
             break;
     case 6: exit(0);
     default: printf("\nWrong Choice");
    }
  }
}
void enqueue()
{
   int val;
   if(top==MAX-1 && t1==MAX-1)
   {
     printf("\nqueue is full");
   }
   else
   {
     printf("\nEnter element to enqueue:");
     scanf("%d",&val);
     top=top+1;
     s1[top]=val;
   }
}
 
void push()
{
   if( t1==MAX-1)
{
   printf("\nqueue is overflow");
}
else
{
   // printf("\nDequeued element is %d",stack1[top]);
    t1++;
    s2[t1]=s1[top];
    printf("\npopped element is %d",s1[top]);
    top=top-1;
}
}
 
void dequeue()
{
  if( t1==-1)
{
  printf("\nqueue is empty!!");
}
else
{
  printf("dequeued element is-%d\n",s2[t1]);
  t1--;
}
}
void display()
{
  if(top==-1 )
{
  printf("\nqueue is empty!!");
}
else
{
  printf("\nStack is...\n");
  for(i=top;i>=0;--i)
  printf("%d\n",s1[i]);
}
}
void display2()
{
  if(t1==-1 )
{
  printf("\nqueue is empty!!");
}
else
{
  printf("\nqueue is...\n");
  for(i=t1;i>=0;--i)
  printf("%d\n",s2[i]);
}
}
