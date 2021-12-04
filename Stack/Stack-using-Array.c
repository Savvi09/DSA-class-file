
#include<stdio.h>
#include<stdlib.h>

struct Stack 
{
	int size;
	int top;
	int *S;
};

void create(struct Stack *st)
{
	printf("Enter the Size of arry:");
	scanf("%d",&st->size);
	st->top=-1;
	st->S=(int *)malloc(st->size*sizeof(int));	
}
void display(struct Stack st)
{
	int i;
	printf("Resulted elements on stack :");
	for(i=st.top;i>=0;i--)
	{
		printf("%d ",st.S[i]);
	}
	printf("\n");
}
void push(struct Stack *st, int x)
{
	if(st->top==st->size-1)
	{
		printf("Stack Overflow");
	}
	else
	{
		st->top++;
		st->S[st->top]=x;
	}
}
void pop(struct Stack *st)
{
	int x=-1;
	if(st->top==-1)
	   printf("Stack Underflow");
	else
	{
		x=st->S[st->top];
		st->top--;
	}
}
void peek(struct Stack st, int pos)
{
	int x=-1;
	if(st.top-pos+1<0)
         printf("\nInvalid position\n");
    else
    {
    	x=st.S[st.top-pos+1];
    	printf("\nindex no.%d ---- element is : %d\n",pos,x);
	}
}
void IsEmpty(struct Stack st)
{
	if(st.top==-1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		printf("NOT EMPTY\n");
	}
}

void IsFull(struct Stack st)
{
	if(st.top==st.size-1)
	{
		printf("Stack is Full\n");
	}
	else
	{
		printf("NOT FULL\n");
	}
}
int StackTop(struct Stack st)
{
	if(st.top==-1)
	{
		return -1;
	}
	else
	{
		return st.S[st.top];
	}
}


int main()
{
	int a;
	struct Stack st;
	create(&st);
	
	push(&st,10);
	push(&st,20);
	push(&st,30);
	push(&st,40);
	push(&st,50);
	push(&st,60);
	push(&st,70);
	push(&st,80);
	push(&st,90);
	
	pop(&st);
	pop(&st);
	

	display(st);
	
	peek(st,2);
	IsEmpty(st);
	IsFull(st);
	a=StackTop(st);
     printf("Top most Element is %d",a);
	
}


