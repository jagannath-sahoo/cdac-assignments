/*
 *
 * Q3. write a program to implement singly circular linked list .
 * */

#include<stdio.h>
#include<stdlib.h>


typedef struct node{
	int data;
	struct node *next;
}NODE_t;

void insertAtBegining(NODE_t **p, int val);
void insertAtEnd(NODE_t **p, int val);
void insertAtPos(NODE_t **p, int pos, int val);
void display(NODE_t *p);
int deleteAtBegining(NODE_t **p);
int deleteAtEnd(NODE_t **p);
int deleteAtPos(NODE_t **,int pos);

int main()
{
	NODE_t *head = NULL;
	insertAtBegining(&head,10);
	insertAtBegining(&head,20);
	insertAtBegining(&head,30);
	insertAtBegining(&head,40);
	display(head);
//	insertAtEnd(&head,1000);
//	display(head);
 //        insertAtPos(&head, 3, 2000);
//	display(head);
	printf("Del: %d\n",deleteAtBegining(&head));	
	insertAtEnd(&head,1000);
	display(head);
	return 0;
}


int deleteAtBegining(NODE_t **p)
{
	int val = 0;
	NODE_t *temp = *p;
	NODE_t *t1 = *p;
	while(temp->next != 0)
	{

	//	printf("temp->data  = %d\n",temp->data);
		temp = temp->next;
		if(temp == *p)
			break;
	}
	val = t1->data;
	printf("temp->data  = %d\n",temp->data);
	temp->next = t1->next;
	*p = t1->next;
       
	free(t1);
	return val;

}
void insertAtPos(NODE_t **p, int pos, int val)
{
NODE_t *temp = (NODE_t *) calloc(1,sizeof(NODE_t));
        temp->data = val;
        temp->next = NULL;
	int i = 1;
        NODE_t *t1 = *p;
	if(*p == NULL)
	{
		insertAtBegining(p,val);
	}
	else
	{
		while(i++ < (pos-1))
		{
			t1 = t1->next;
		}
		temp->next = t1->next;
		t1->next = temp;		
	}
}
void insertAtEnd(NODE_t **p, int val)
{       
        NODE_t *temp = (NODE_t *) calloc(1,sizeof(NODE_t));
        temp->data = val;
        temp->next = NULL;
        NODE_t *t1 = *p;
        while(t1->next != 0)
        {
        	t1 = t1->next;
        }
	t1->next = temp;
       	temp->next = *p;
        
}

void insertAtBegining(NODE_t **p, int val)
{
	NODE_t *temp = (NODE_t *) calloc(1,sizeof(NODE_t));
	temp->data = val;
	temp->next = NULL;
	//NODE_t *t1 = *p;
	if(*p == NULL)
	{
		*p = temp;
	//		temp->next = temp;
	}
	else{
		temp->next = *p;
		*p = temp;
	}
}

void display(NODE_t *p)
{
	NODE_t *temp = p;
	while(temp != 0)
	{
		printf("==> %d ",temp->data);	
		temp = temp->next;
		if(temp == p)
			return;
	}
	printf("\n");
}
