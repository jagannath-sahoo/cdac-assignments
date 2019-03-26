#include<stdio.h>
#include<stdlib.h>
#define size 5
struct node
{
 int data;
 struct node *next;
};
void insert(int,struct node**);
void display(struct node *);
void pop(struct node **,int *,int *);
void push(int ,struct node **,int *,int *);
void main()
{
	struct node *head=NULL;
	int front=-1,rear=-1;
while(1){
	int n,val;
	printf("\nEnter the choice to perform in queue\n1.push\n2.pop\n3.display\n4.exit\n");
scanf("%d",&n);
switch(n)
{
	case 1:printf("Enter the data value\n");
	      scanf("%d",&val);
	      push(val,&head,&front,&rear);
	      break;
	case 2: printf("To delete the first node\n");
		pop(&head,&front,&rear);
		break;
	case 3:printf("------LIST------\n");
	      display(head);
	      break;
	case 4:exit(0);
}}}
void pop(struct node **p,int *f,int *r)
{
        struct node *temp;
	if(*f==-1)
{
	printf("queue is empty\n");
	return ;
}


	temp=*p;
	*p=temp->next;
	printf("Popped element is--> %d\n\n",temp->data);
	free(temp);
	if(*f==*r)
	{
	*f=-1;
	*r=-1;
	}
	else
	{
	++(*f);
	}

}
void push(int val,struct node **p,int *f,int *r)
{
	struct node *temp;
	struct node *t1;
	if(*r==(size-1))
{
	printf("queue is full\n");
	return;
}
else
{
	++(*r);
temp=(struct node *)malloc(sizeof(struct node));
temp->data=val;
temp->next=NULL;
if(*p==NULL)
{
*p=temp;
}
else
{
t1=*p;
while(t1->next!=NULL)
{
t1=t1->next;
}
t1->next=temp;
}
if((*f)==-1)
	++(*f);
}
}
void display(struct node *p)
{
while(p!=NULL)
{
printf("-->%d",p->data);
p=p->next;
}
}
