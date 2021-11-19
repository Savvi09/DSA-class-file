


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
 
 void Delete(struct Node *p,int index)
 {
 	struct Node *q;
 	int i,x;
 	if(index==1)
 	{
 		while(p->next!=head)
 		{
 			p=p->next;
		 }
		 x=head->Data;
		 
		 if(head==p)
		 {
		 	free(head);
		 	head=NULL;
		 }
		 else
		 {
		 	p->next=head->next;
		 	free(head);
		 	head=p->next;
		 	
		 }
		
	 }
 	else
 	{
 		for(i=0;i<index-2;i++)
 		{
 			p=p->next;
 			
		 }
		 q=p->next;
		 x=q->Data;
		 p->next=q->next;
		 free(q);
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
		Delete(head,0);
		Display(head);
	}
