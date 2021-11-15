#include<stdio.h>
 
 struct Node
 {
 	struct Node *prev;
 	int data;
 	struct Node *next;
 }*first=NULL;
 
 void create(int A[],int n)
 {
 	struct Node *t,*last;
 	int i;
 	first= (struct Node*)malloc(sizeof(struct Node));
 	first->data=A[0];
 	first->next=first->prev=NULL;
 	last=first;
 	for(i=1;i<n;i++)
 	{
 		t=(struct Node *)malloc(sizeof(struct Node));
 		t->data=A[i];
 		t->next=last->next;
 		t->prev=last;
 		last->next=t;
 		last=t;
    }
 }
 
  void Insert(struct Node *p,int index,int x)
  {
  	int i;
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    if(index==0)
    {
      
      t->prev=NULL;
      t->next=first;
      first->prev = t;
      first =t;
    }
    else
    {
       	for(i=0;i<index-1;i++)
       	{
       		p=p->next;
		}
		t->next=p->next;
		t->prev=p;
		
		if(p->next)
		{
			p->next->prev=t;
		}
		p->next=t;
	}
    
  }
 void Display(struct Node *p)
 {
 	printf("Array : ");
 	while(p)
 	{
 	  printf("%d ",p->data);
 	  p=p->next;
    }
 } 
 int main()
 {
 	int A[]={10,20,30,40,50};
 	create(A,5);
 	Insert(first,2,24);
 	Display(first);
 	
 }
 
