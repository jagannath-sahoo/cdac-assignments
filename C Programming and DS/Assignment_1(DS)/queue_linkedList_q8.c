/*
 * Q6. write a program to implement stack using singly linked list.
 *
 * */

#include<stdio.h>
#include<stdlib.h>

#define QUEUE_SIZE	5

typedef struct QUEUE_t{
	int data;
	struct QUEUE_t *next;
}QUEUE_t;

int count = 1;

void enqueue(QUEUE_t **f, QUEUE_t **r, int val);
int dequeue(QUEUE_t **f, QUEUE_t **r);

void display(QUEUE_t *f,QUEUE_t *r);

int main()
{
	QUEUE_t *front = NULL, *rear = NULL;
	enqueue(&front,&rear,10);
	enqueue(&front,&rear,20);
	enqueue(&front,&rear,30);
	enqueue(&front,&rear,40);
	enqueue(&front,&rear,50);
	display(front,rear);

	printf("DELETED: %d\n",dequeue(&front,&rear));
	display(front,rear);
	
	printf("DELETED: %d\n",dequeue(&front,&rear));
	//display(front,rear);
	return 0;
}


int dequeue(QUEUE_t **f, QUEUE_t **r)
{
	int ret;
	if(count >= 0)
	{
		count--;
		QUEUE_t *temp = *r;
		ret = temp->data;
		(*f) = (*f)->next;
		printf("***%d***",(*r)->data);
		free(temp);
	//	if(*r == *f)
	//	{
	//		*r = *f = NULL;
	//	}
		return ret;
	}
	else
	{
		printf("Underflow\n");
	}
}

void enqueue(QUEUE_t **f, QUEUE_t **r, int val)
{
	if(count <= QUEUE_SIZE)
	{
		count++;
		QUEUE_t *temp = (QUEUE_t *) calloc(1, sizeof(QUEUE_t));
		temp->data = val;
		temp->next = NULL;
		if(*r == NULL)	
		{
			*f = temp;
			*r = temp;;
		}
		else
		{
			temp->next = *r;
			*r = temp;
		}
	}
	else{
		printf("Overflow\n");
	}

}

void display(QUEUE_t *f, QUEUE_t *r)
{
	QUEUE_t *p = f;
	while(p!=NULL){
	//	if(p->data != 0)	printf("-->%d", p->data);
		printf("=>%d",p->data);
		p=p->next;
	}
	printf("\n");
}
