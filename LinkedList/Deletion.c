
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
  
  void Delete(struct Node *p,int index)
  {
  	struct Node *q=NULL;
  	int x=-1;
	int i;
  	if(index<0||index>count(p))
  	  {
  		printf("Invalid!");
	  }
	  if(index==1)
	  {
	  	q=first;    
	  	first=first->next;  // Move the first element to Next Node
	  	x=q->Data;
	  	free(q);            //Dealocation or delete pointer q
	  }
	  else
	  {	
	  if(index>1)
	  {
			q=first;
			p=NULL;
			for(i=0;i<index-1;i++)
			{
				p=q;
				q=q->next;
			}    
			p->next=q->next;   //Modify the link on next element
			x=q->Data;
			free(q);           //Dealocation or delete 
	  }
	  }
  }
  /*
  void Delete_at_anypos(struct Node *p,int index)
  {
  	struct Node *q=NULL;
  	int x=-1;
  	int i;
  	
	  if(index>1)
	  {
			q=first;
			p=NULL;
			for(i=0;i<index-1;i++)
			{
				p=q;
				q=q->next;
			}    
			p->next=q->next;
			x=q->Data;
			free(q);
	  }
  }
	*/
	int main()
	{
		int A[]={20,23,7,54,4,15};
	
		create(A,6);
		
		Delete(first,-1);	
		Display(first);	
			
	return 0;
	
	}
	
