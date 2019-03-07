/*
 * Q5. write a program to implement stack using array.
 * */

#include<stdio.h>

#define STACK_SIZE 5

void push(int *st, int *top,int );
void display(int *st, int *top);
int pop(int *st,int *top);

int main()
{
	int top = -1;
	int stack[STACK_SIZE];
	push(stack,&top,10);
	push(stack,&top,20);
	push(stack,&top,30);
	push(stack,&top,40);
	display(stack,&top);
	printf("Poped value is %d\n",pop(stack,&top));
	display(stack,&top);
	return 0;
}

int  pop(int *st, int *top)
{
	int temp;
	if(*top==-1)
	{
		printf("The stack Is empty\n");
		return -1 ;
	}
	else	
	{
		temp = st[*top];
		st[*top]=0;
		--(*top);
	}

	return temp;
}

void push(int *st, int *top, int val)
{
	//int *i = top;
	if( *top == (STACK_SIZE-1))
	{
		printf("Stack is Full\n");
		return;
	}
	else
	{
		++(*top);
		st[*top] = val;
	}
}

void display(int *st, int *tp)
{
	int i = *tp;
	while(i >= 0){
		printf("<== %d ",st[i]);
	        i--;	
	}
	printf("\n");
}
