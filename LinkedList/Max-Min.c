

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
	
    int Max(struct Node *p)
    {
    	int max = -32422;
    while(p)
    {
    	if(p->Data>max)
    	{
    		max=p->Data;
    	}
    		p=p->next;	
	}
	    return max;
	}
	int Min(struct Node *q)
	{
		int min= 235474;
		while(q)
		{
			if(q->Data<min)
			{
				min=q->Data;
			}
			    q=q->next;
		}
		return min;
	}
	
	
	int main()
	{
		int A[100],j;
		printf("Enter the Array elements :\n");
		for(j=0;j<7;j++)
		{
			scanf("%d",&A[j]);
		}
		
		printf("\nThe Entered  Array is : ");
		for(j=0;j<7;j++)
		{
			printf("%d  ",A[j]);
		}
		
		create(A,7);
		printf("\n\n................RESULT....................");
		printf("\n\nThe Maximum Value is %d",Max(first));
		printf("\nThe Minimum Value is %d",Min(first));
		
		return 0;
	}
	

