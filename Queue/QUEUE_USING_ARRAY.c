#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Queue
{
	int size;
	int front;
	int rear;
	int *Q;
};

	void enqueue(struct Queue *q,int x)
	{
		if(q->rear==q->size-1)
		{
			printf("\n Queue is FULL");
		}
		else
		{
			q->rear++;
			q->Q[q->rear]=x;
		}
	}
	
	void dequeue(struct Queue *q)
	{
		int x=-1;
		if(q->rear==q->front)
		{
			printf("\n Queue is Empty");
		}
		else
		{
			x=q->Q[q->front];
			q->front++;	
		
	    }
	}
	
	void Display(struct Queue q)
	{
		int i;
	  if(q.rear==q.front)
		{
			printf("\n Queue is Empty");
		}
		else
		{
		
		  printf("\n Elements in the Queue are :\n");
		  for(i=q.front+1;i<=q.rear;i++)
		  {
			printf("%d\n",q.Q[i]);
		  }
	  }
	}
	
void main()
{
	struct Queue q;
	int a,b;
	printf("Enter Size :");
	scanf("%d",&q.size);
	q.Q=(int *)malloc(q.size*sizeof(int));
	q.rear=q.front=-1;
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
				enqueue(&q,a);
				break;
				
			case '2':
				dequeue(&q);
				printf("\n After Deleting, ");
				break;
				
			case '3':
				Display(q);
				break;
			
			case '4':
				break;	
			default:
				printf("\n Wrong Choice !!! Please Try Again ---");
				
		}
	}
}

	
