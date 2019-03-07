/*
 * Q6. write a program to implement stack using singly linked list.
 * */

#include<stdio.h>
#include<stdlib.h>

#define STACK_SIZE 5

typedef struct stack{
	int data;
	struct stack *next;
}STACK_t;

int count = 1;//STACK counter to limit max size of stack

void push(STACK_t **t, int val);
int pop(STACK_t **t);
void displayList(STACK_t *p);

int main()
{
	STACK_t *top = NULL;
	push(&top,10);
	push(&top,20);
	push(&top,30);
	push(&top,40);
	push(&top,50);
	push(&top,60);
	displayList(top);
	printf("POP: %d\n",pop(&top));
	displayList(top);
	return 0;
}

int pop(STACK_t **t)
{
	if(count >= 0){
	count--;
	int ret;
	if(*t == NULL)
	{
		printf("Empty Stack\n");
		return -1;
	}
	STACK_t *temp = *t;
	ret = temp->data;
	*t = (*t)->next;
	free(temp);
	return (ret);
	}
	else
	{
		printf("Underflow\n");
	}
}

void push( STACK_t **t, int val)
{
	if(count <= STACK_SIZE){
	count++;
	printf("COunt:%d\n",count);	
	STACK_t *temp = (STACK_t * )calloc(1,sizeof(STACK_t));
	temp->data = val;
	temp->next = NULL;
	if(*t == NULL)
	{
		*t = temp;
	}
	else
	{
		temp->next = *t;
		*t = temp;
	}
	}
	else
	{
		printf("Overflow\n");
		return;
	}

}

void displayList(STACK_t *p){
	while(p!=NULL){
		printf("-->%d", p->data);
		p=p->next;
	}
	printf("\n");
}
