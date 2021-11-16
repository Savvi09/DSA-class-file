
#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int Data;
	struct Node* next;
}*head=NULL;

void create(int A[100],int n)
{
	int i;
	struct Node *t,*last;
	head=(struct Node*)malloc(sizeof(struct Node));
	head->Data=A[0];
	head->next=head;
	last=head;
	for(i=1;i<n;i++)
	{
		t = (struct Node *)malloc(sizeof(struct Node));
		t->Data=A[i];
		t->next=last->next;
		last->next = t;
		last=t;
	}
}
 
 void Insert(struct Node *p,int index,int x)
 {
 	struct Node *t;
 	int i;
 	if(index==0)
 	{
	   t=(struct Node *)malloc(sizeof(struct Node));
	   t->Data=x;
	    if(head==NULL)
 	    {
 	 	  head=t;
 		  head->next= head;
	    }
	    else
	    {
	 	   while(p->next!=head)
	 	   {
	 	  	p=p->next;
		   }
		   p->next=t;
		   t->next=head;
		   head=t;
	    }
   }
 	else
 	{
 	    t=(struct Node *)malloc(sizeof(struct Node));
	   
	    p=head;
	    for(i=0;i<index-1;i++)
	    {
	       p=p->next;	
		}
		t->Data=x;
		t->next=p->next;
		p->next=t;
 		
	}
 		
 }
	void Display(struct Node *h)
	{
		printf("\n\n");
		printf("In the list .... Array elements are : ");
	     do
	     {
	     	printf("%d ",h->Data);
	     	h=h->next;
		 }while(h!=head);
		 printf("\n");
	}
	
	int main()
	{
		int A[100],j;
		printf("Enter the Array elements : ");
		for(j=0;j<7;j++)
		{
			scanf("%d",&A[j]);
		}
		
		printf("The Entered  Array is : ");
		for(j=0;j<7;j++)
		{
			printf("%d  ",A[j]);
		}
		
		create(A,5);
		Insert(head,0,10);
		Display(head);
	}
	
