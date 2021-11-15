
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
	head->next=NULL;
	last=head;
	for(i=1;i<n;i++)
	{
		t = (struct Node *)malloc(sizeof(struct Node));
		t->Data=A[i];
		t->next=NULL;
		last->next = t;
		last=t;
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
		Display(head);
	}
	
