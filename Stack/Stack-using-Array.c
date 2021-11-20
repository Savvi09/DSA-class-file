
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
	printf("Enter Size:");
	scanf("%d",&st->size);
	st->top=-1;
	st->S=(int *)malloc(st->size*sizeof(int));
}

void Display(struct Stack st)
{   
    printf("\nREADY TO DISPlAY.......\n");
	int i;
	for(i=st.top;i>=0;i--)
	{
		printf("%d ",st.S[i]);
	}
	printf("\n");
}
void push(struct Stack *st, int x)
{
	if(st->top==st->size-1)
	     printf("Stack Overflow");
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
	{
		printf("Stack Underflow");
	}
	else
	{
		x=st->S[st->top];
		st->top--;
		printf("Delete value- %d\n ",x);
	}
	
}

void peek(struct Stack st,int pos)
{
	int i=-1;
	int x;
	if(st.top-pos+1<0)
        printf("Invalid Position");
    else
    {
       x=st.S[st.top-pos+1];
	   printf("Position value - %d\n",x);	
	}	
}

int StackTop(struct Stack st)
{
	if(st.top==-1)
		return -1;
	else
	    return st.S[st.top]; 	   
}

int  IsEmpty(struct Stack st)
{
	if(st.top==-1)
	    return 1;
	else
	    return 0;
}

int IsFull(struct Stack st)
{
	if(st.top==st.size-1)
	   return 1;
	else
	   return 0;	
}

int main()
{
	struct Stack st;
	create(&st);
	push(&st,15);
	push(&st,24);
	push(&st,5);
	push(&st,19);
	push(&st,29);
	
	pop(&st);
	peek(st,2);
	
	Display(st);
	printf("%d \n",IsFull(st));
	printf("%d \n",StackTop(st));
}

