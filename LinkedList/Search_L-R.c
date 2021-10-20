

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
	struct Node *LSearch(struct Node *p,int key)
	{
		while(p)
		{
		   if(key==p->Data)
		   {
		   	 return p;
		   }
		 p= p->next;
     	}
     	return NULL;
	}
	
	struct Node *RSearch(struct Node *p,int key)
	{
		if(p==NULL)
		{
			return NULL;
		}
		if(key==p->Data)
		{
			return p;
		}
		return RSearch(p->next,key);
	}
	
	int main()
	{
		int A[100],j;
		struct Node *temp;
		
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
		
		int k;
		
		printf("\n Enter the value which you want to Search : ");
		scanf("%d",&k);
		
		create(A,7);
		
		temp = LSearch(first,k);
		if(temp)
		{
		   printf("Search element : %d ",temp->Data);	
		}
		
		temp = RSearch(first,k);
		if(temp)
		{
		   printf("Search element : %d ",temp->Data);	
		}
		
		
		return 0;
	}
	
