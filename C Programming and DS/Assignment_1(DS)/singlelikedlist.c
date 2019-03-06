#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data ;
	struct node *next;

} node ;

void insertAtEnd(node**  ,int val);
void insertAtBegining(node **, int val);
void delete (node**);
void display(node *);
void insertAtPosition(node **,int val, int position);
int deleteAtFirst(node **);
int deleteAtPosition(node **, int pos);
int deleteAtEnd(node **);
int main()	
{
	node *head = NULL; 
	insertAtEnd(&head,12);	
	insertAtEnd(&head,13);	
	insertAtEnd(&head,14);	
	display(head);
	insertAtBegining(&head,10);
	display(head);
	insertAtPosition(&head,144,3);
	display(head);
	printf("Deleted: %d",deleteAtFirst(&head));
	display(head);
	printf("Deleted: %d",deleteAtPosition(&head,3));
	display(head);
	deleteAtEnd(&head);
	display(head);
	return 0;
}

int deleteAtEnd(node **p)
{
	node *temp = *p;
	node *t1;
	int ret = 0;
	while( temp != NULL)
	{
		t1 = temp;
		temp= temp->next;
	}
	ret = temp->data;
	t1->next = temp->next;
	free(temp);
	return ret;
	
}

int deleteAtPosition(node **p,int pos)
{
	int ret = 0;
	node *temp = *p;// Store the copy address of head pointer
	node *t1; // for taking the pointer to the just previos node pointer
	int i = 1;
	while(i++ < pos)
	{
		t1 = temp;
		temp = temp->next;
	}
	t1->next = temp->next;
	ret =  temp->data;
	free(temp);
	return ret;
}

int deleteAtFirst(node **p)
{
	node *temp = *p;
	int ret = temp->data;
	(*p) = (*p)->next;
	free(temp);
	return ret;
}

void insertAtEnd(node **p,int v)
{
	//1. 
	node *temp = (node *) malloc(sizeof(node));
	node *t1 = *p;
	//2.
	temp -> data = v;
	temp -> next = NULL;
	//3.
	
	if(*p == NULL)
	{
		*p = temp;	
	}
	else
	{
		while(t1->next != NULL)
		{
			t1 = t1->next;
		}
		t1->next = temp;
	}
}


void display(node *p)
{
	printf("------------List----------\n");
	while(p != 0)
	{
		printf("==>%d",p->data);
		p = p->next;
	}
	printf("\n");
}

void insertAtBegining(node **p,int val)
{
	node *temp = (node *)malloc(sizeof(node));
	temp->data = val;
	temp->next = NULL; 
	node *t1 = *p;
	if(*p == NULL)
	{	
		*p = temp;
	}
	else
	{
		temp->next = *p;
		*p = temp;
	}
	
}


void insertAtPosition(node **p,int val, int position)
{
	node *t1 = *p;
	int i=1;
	if(position == 1)
		insertAtBegining(p,val);
	node *temp = (node *)malloc(sizeof(node));
	temp->data = val;
	temp->next = NULL;
	while(i++ < (position-1)){
		t1 = t1->next;
	}
	temp->next = t1->next;
	t1->next = temp;
}
