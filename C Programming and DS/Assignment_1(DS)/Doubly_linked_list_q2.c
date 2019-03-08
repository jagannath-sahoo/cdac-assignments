/*
 *
 * Q2. write a program on doubly linked list and perform all the operations
stated in above question.
 * */

#include<stdio.h>
#include<stdlib.h>


typedef struct NODE{
	struct NODE *prev;
	int data;
	struct NODE *next;
}NODE_t;

void insertAtBegin(NODE_t **p,int val);
void insertAtEnd(NODE_t **p, int val);
void insertAtPosition(NODE_t **p, int pos, int val);
void deleteAtBegining(NODE_t **p,int *delVal);
void deleteAtEnd(NODE_t **p, int *delVal );
void deleteAtPosition(NODE_t **p,int pos,int *delVal);

void search(NODE_t **p,int val);

void display(NODE_t *p);

int main()
{
	int val = 0;

	NODE_t *head =  NULL;
	insertAtBegin(&head,10);
	insertAtBegin(&head,20);
	insertAtBegin(&head,30);
	insertAtBegin(&head,40);
	insertAtEnd(&head,50);
	display(head);
	insertAtPosition(&head,3,1000);
	display(head);
	//deleteAtBegining(&head, &val);
	//printf("Deleted Value: %d\n",val);
	//display(head);
	//deleteAtEnd(&head,&val);
	//printf("Deleted Value: %d\n",val);
	//display(head);
	//deleteAtPosition(&head,2,&val);
	//printf("Deleted Value: %d\n",val);
	//display(head);
	printf("Enter the value to search\n");
	scanf("%d",&val);
	search(&head,val);
	return 0;
}

void search(NODE_t **p, int val)
{
	int count = 0;
	NODE_t *temp = *p;
	while(temp->next != 0)
	{
		count++;
		if(temp->data == val)
		{
			printf("Found!!!! at %d\n", count);
		}
		temp = temp->next;
	}
}

void deleteAtPosition(NODE_t **p,int pos,int *delVal)
{
	NODE_t *t1 = *p;
	int i = 0;
	if(pos == 1)
	{
		deleteAtBegining(p,delVal);
	}
	while(i++ < (pos-1))
	{
		t1 = t1->next;
	}
	NODE_t *temp = t1;
	*delVal = temp->data;
	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	free(temp);

}

void deleteAtEnd(NODE_t **p, int *delVal)
{
	NODE_t *t1 = *p;
	NODE_t *temp;
	while(t1->next != 0)
	{
		t1 = t1->next;
	}
	temp = t1;
	*delVal = t1->data;
	temp->prev->next = NULL;
	free(temp);	

}

void insertAtPosition(NODE_t **p, int pos, int val)
{
	NODE_t *temp = (NODE_t *) calloc(1,sizeof(NODE_t));
        temp->data = val;
        temp->prev = NULL;
        temp->next = NULL;
	NODE_t *t1 = *p;
	int i = 1;
	while(i++ < (pos-1))
	{
		t1 = t1->next;
	}
	temp->next = t1->next;
	temp->prev = t1;
	t1->next->prev = temp;
	t1->next = temp;
}

void deleteAtBegining(NODE_t **p, int *delVal)
{
	NODE_t *t1 = *p;
	NODE_t *temp;
	if(*p == NULL)
		printf("Empty Linked List\n");
	else
	{
		//*delValue = t1->data;
		//t1->next->prev = NULL;
		temp = t1;
		*delVal = temp->data;
		*p = temp->next;
		free(temp);
	}
}

void insertAtEnd(NODE_t **p, int val)
{
	NODE_t *temp = (NODE_t *) calloc(1,sizeof(NODE_t));
        temp->data = val;
        temp->prev = NULL;
        temp->next = NULL;
	NODE_t *t1 = *p;
	while(t1->next != 0)
	{
		t1 = t1->next;
	}
	t1->next = temp;
	temp->prev = t1;

}
void insertAtBegin(NODE_t **p, int val)
{
	NODE_t *temp = (NODE_t *) calloc(1,sizeof(NODE_t));
	temp->data = val;
	temp->prev = NULL;
	temp->next = NULL;
	
	NODE_t *t1 = *p;
	if(*p == NULL)
	{
		*p = temp;
	}
	else{
		t1->prev = temp;
		temp->next = t1;
		//temp->next = *p;
	        //*p = temp;	
	}
	*p = temp;
}

void display(NODE_t *p)
{
	NODE_t *temp = p;
	while(temp != NULL)
	{
		printf("--> %d",temp->data);
		temp = temp->next;
	}
	printf("\n");

}

