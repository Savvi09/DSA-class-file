#include<stdio.h>
#include<stdlib.h>

struct Node {
	struct Node *prev;
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[],int index)
{
	struct Node *t,*last;
	int i;
	first = (struct Node*)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=first->prev=NULL;
	last=first;
	
	for(i=1;i<index;i++)
	{
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=last->next;
		t->prev=last;
		last->next=t;
		last=t;
	}
}
	void Delete(struct Node *p,int index)
	{
		struct Node *q=NULL;
		int x=-1;
		if(index==1)
		{
			q=first;
			first=first->next;
			x=q->data;
			free(q);
			if(first)
			{
				first->prev=NULL;
			}
		}
		else
		{
			q=first;
			int i;
			for(i=0;i<index-1;i++)
			{
				q=q->next;
			}
			q->prev->next=q->next;
			if(q->next)
			{
				q->next->prev=q->prev;
			}
			x=q->data;
			free(q);
			
		}
			
	}
	
	void Display(struct Node *p)
	{
		while(p)
		{
			printf("%d ",p->data);
			p=p->next;
		}
		printf("\n");
	}

int main()
{
	int A[]={10,20,30,40,50};
	create(A,5);
	Delete(first,4);
	Display(first);
	
  return 0;
}

