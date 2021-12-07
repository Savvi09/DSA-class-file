#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct Queue 
{
	int size;
	int front;
	int rear;
	int  *Q;    // create Array dynamicaly we should have a pointer
};

void enqueue(struct Queue *q, int x)
{
	if((q->rear+1)%q->size == q->front)
	    printf("\n Queue is Full");
	else
	{
		q->rear=(q->rear+1)%q->size;
		q->Q[q->rear]=x;
	}
}
void dequeue(struct Queue *q)
{
	int x=-1;
	if(q->front==q->rear)
	     printf("\n Queue is Empty");
	else
	{
		q->front=(q->front+1)%q->size;
		x=q->Q[q->front];
	}	
	
}
void display(struct Queue q )
{
	int i=q.front+1;
 do
 {

 printf("%d ",q.Q[i]);
 i=(i+1)%q.size;
 }while(i!=(q.rear+1)%q.size);

 printf("\n");

}
int main()
{
	int a;
	struct Queue q;
	printf("Enter the Size of the queue i.e array...... : ");
	scanf("%d",&q.size);
	q.Q = (int *)malloc(q.size*sizeof(int));
	q.front=q.rear=-1;

	char ch ='1';
	while(ch != '4')
	{
		printf("\n 1 for INSERT");
		printf("\n 2 for Delete");
		printf("\n 3 for Display");
		printf("\n 4 for Quit");
		printf("\n Enter Your Choice............ :");
		fflush(stdin);
		ch= getchar();
		
		switch(ch)
		{
			case '1':
				printf("\nEnter Insert element.... :");
				scanf("%d",&a);
				enqueue(&q,a);
				break;
				
			case '2':
				printf("\n After Deleting");
				dequeue(&q);
				break;
				
			case '3':
				printf("\n Elements in the Queue are ...");
				display(q);
				break;
				
			case '4':
				break;
				
			default:
				printf("Wrong Choice !!! please reenter....");
					
		}
	}
	
	
}






