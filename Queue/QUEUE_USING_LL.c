

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*rear=NULL,*front=NULL;


void enqueue(int x)
{
	struct Node *t;
	t=(struct Node *)malloc(sizeof(struct Node));
	if(t==NULL)
	    printf("Queue Is Full\n");
	else
	{
		t->data=x;
		t->next=NULL;
		if(front==NULL)
		    front=rear=t;	
		else
		{
			rear->next=t;
			rear=t;
		}	
	}
}

void dequeue()
{
	int x=-1;
	struct Node *t;
	t=(struct Node *)malloc(sizeof(struct Node));
	if(front==NULL)
	   printf("Queue is Empty\n");
	else
	{
		t=front;
		front=front->next;
		x=t->data;
		free(t);		
	}
}

void Display()
{
	struct Node *p;
	p=front;
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}


void main()
{
    int a,b;
	char ch='1';
	while(ch!='4')
	{
		printf("\n 1 - Insert");
		printf("\n 2 - Delete");
		printf("\n 3 - Display");
		printf("\n 4 - Quit");
		printf("\n Enter the Choice:");
		fflush(stdin);
		ch = getchar();
		
		switch(ch)
		{
			case '1':
				printf("\n Enter The Element to be inserted :");
				scanf("%d",&a);
				enqueue(a);
				break;
				
			case '2':
				dequeue();
				printf("\n DELETED\n........NOW CHECK TO USE DISPLAY.......\n");
				break;
				
			case '3':
				printf("Display the elements inside Queue...........: ");
				Display();
				break;
			
			case '4':
				break;	
			default:
				printf("\n Wrong Choice !!! Please Try Again ---");
				
		}
	}
}






