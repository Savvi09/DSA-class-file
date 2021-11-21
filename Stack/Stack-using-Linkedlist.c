#include<stdio.h>
#include<stdlib.h>


struct Node
{
	int data;
	struct Node *next;
}*top=NULL;

void push(int x)
{
	struct Node *t;
	t=(struct Node *)malloc(sizeof(struct Node));
	
	if(t==NULL)
	    printf("Stack is Full\n");
	else
	{
		t->data=x;
		t->next=top;
		top=t;
	}
}

void pop()
{
	int x=-1;
    struct Node *t;
    if(top==NULL)
        printf("Stack is empty\n");
    else
    {
    	t=top;
    	top=top->next;
    	x=t->data;
    	free(t);
	}
}
void display()
{
    struct Node *p;
    p=top;
      
    while(p!=NULL)
    {
    	printf("%d ",p->data);
    	p=p->next;
	}
	printf("\n");
	
}


int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	
	pop();
	display();
}




