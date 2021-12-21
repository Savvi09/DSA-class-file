
struct Node
{
	struct Node *lchild;
	int data;
	struct Node *rchild;
};

struct Queue
{
	int size;
	int rear;
	int front;
	struct Node **Q;
};

void Create(struct Queue *q,int size )
{
	q->size=size;
	q->front=q->rear= 0;
	q->Q=(struct Node **)malloc(q->size * sizeof(struct Node *));
}


void enqueue(struct Queue *q, struct Node *x)
{

 	if((q->rear+1)%q->size == q->front)
	    printf("\n Queue is Full");
	    
	else if(q->front==0 && q->rear==q->size-1)
	    printf("\n Queue is FULL");
	    
	else if(q->front=-1 && q->rear==-1)
	    q->front = q->rear =0;
		
    else if(q->rear==q->size-1 && q->front!=0)
        q->rear=0;
		
	else
	{
		q->rear++;
		q->Q[q->rear]=x;
	}
}

struct Node* dequeue(struct Queue *q)
{
  	int x=-1;
	if(q->front==q->rear)
	     printf("\n Queue is Empty");
	else 
	{
		x=q->front;
		if(q->front==q->rear)
		     q->front=q->rear=-1;
		else if(q->front==q->size-1)
		     q->front=0;
		else 
		  {
		  	q->front=q->front+1;
		  }
	}
 return x;
}

int IsEmpty(struct Queue q)
{
	return q.front==q.rear;
}


