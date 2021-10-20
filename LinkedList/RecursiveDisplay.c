
#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int Data;
	struct Node* next;
}*first=NULL;

void create(int A[],int n)
{
	int i;
	struct Node *t,*last;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->Data=A[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++)
	{
		t = (struct Node*)malloc(sizeof(struct Node));
		t->Data=A[i];
		t->next=NULL;
		last->next = t;
		last=t;
	}
}

void RDisplay(struct Node *p)
{
	if(p!=NULL)
	{
		printf("%d ",p->Data);
		RDisplay(p->next);
	}
}
	
int main()
{
    int A[]={12,3,4,21,8};
	create(A,5);
		
    RDisplay(first);
    
    
	return 0;
}
	
