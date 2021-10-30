


#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int Data;
	struct Node* next;
}*first=NULL;


void create(int A[100],int n)
{
	int i;
	struct Node *t,*last;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->Data=A[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++)
	{
		t = (struct Node *)malloc(sizeof(struct Node));
		t->Data=A[i];
		t->next=NULL;
		last->next = t;
		last=t;
	}
}
	void Display(struct Node *p)
	{
		printf("\n\n");
		printf("In the list .... Array elements are : ");
		while(p!=NULL)
		{
			printf("%d  ",p->Data);
			p=p->next;
		}
	}
	 
  int count(struct Node *p)
  {
  	int c=0;
    while(p!=NULL)
  	{
  		c++;
  		p=p->next;
	}
	return (c);
  }
  
  
  void Insert(struct Node *p,int index,int x)
  
   {
  	struct Node *t;
  	int i;
  	
  	if(index<0 || index>count(p))
  	   {
  		return NULL;
	   }
	
	t= (struct Node*)malloc(sizeof(struct Node));
	t->Data=x;
	
	
	if(index==0)
	  {
		t->next=first;
		first=t;
	  }
	
  	else
  	{
  		for(i=0;i<index-1;i++)
  		p=p->next;
  		
  	t->next=p->next;
  	p->next=t;	
	}

  }
	
	
	
	int main()
	{
		int A[]={20,23,7,54,4};
	
		create(A,4);
		Insert(first,2,15);	
		Display(first);	
			
	return 0;
	
	}
	

