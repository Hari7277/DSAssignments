#include <stdio.h>
int arr[5],i,top=-1,choice,value;
void Push(void);
void Pop(void);
void display(void);
int main()
{
   do
   {
     printf("Enter the choice:\n");
     printf("1.Push\n");
     printf("2.Pop\n");
     printf("3.Display\n");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1:
         {
             Push();
             break;
         }
         case 2:
         {
             Pop();
             break;
         }
         case 3:
         {
             display();
             break;
         }
         default:
         {
             printf("Invalid Input");
         }
     }
  }
   while(choice!=0);
   return 0;
}
void Push()
{
	if(top==4)
	  printf("Stack Overflow");
	else
	{
	    printf("Enter the value ");
	    scanf("%d",&value);
		top++;
		arr[top]=value;
	}
}
void Pop()
{
	if(top==-1)
	  printf("Stack is Empty");
	else
	{
	   printf("Popped element is %d\n",arr[top]);
	   top--;
	}
}
void display()
{
	for(i=4;i>=0;i--)
	  printf("%d ",arr[i]);
}
