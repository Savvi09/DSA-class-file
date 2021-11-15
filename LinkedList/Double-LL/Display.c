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
 int Length(struct Node *p)
 {
 	int len=0;
 	while(p)
 	{
 	  len++;
	  p=p->next;	
	}
	return len;
 }
 
 void Display(struct Node *p)
 {
 	printf("Array :");
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
 	printf("Length is %d \n",Length(first));
 	Display(first);
 }

