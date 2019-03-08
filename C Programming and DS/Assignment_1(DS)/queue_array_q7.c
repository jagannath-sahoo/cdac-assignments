#include<stdio.h>

#define QUEUE_SIZE	5


void enqueue(int *qu,int *f, int *r, int val);
void displayQ(int *qu,int *f, int *r);
int dequeue(int *qu,int *f,int *r);


int main()
{
	int queue[QUEUE_SIZE];
	int front = -1,rear = -1;

	enqueue(queue,&front,&rear,10);
	enqueue(queue,&front,&rear,20);
	enqueue(queue,&front,&rear,30);
	enqueue(queue,&front,&rear,40);
	enqueue(queue,&front,&rear,50);
	printf("The deleted element is %d\n",dequeue(queue,&front,&rear));
	enqueue(queue,&front,&rear,60);
	displayQ(queue,&front,&rear);
	printf("The deleted element is %d\n",dequeue(queue,&front,&rear));
	displayQ(queue,&front,&rear);
	return 0;
}

int dequeue(int *qu,int *f,int *r)
{

	int temp;
	if(*r== -1)
	{
	printf("Queue is Empty");
	return -1;
	
	}
	else
	{
		temp=qu[*r];
		qu[*r]=0;
		*r=*r+1;

		if(*f==*r)
		{
			*f=*r=-1;
			
		}
		
	}
	return temp;

}
void enqueue(int *qu,int *f, int *r, int val)
{
	if(*f == (QUEUE_SIZE-1))
	{
		printf("Queue overflow\n");
		return;
	}
	else
	{
		if(*f == -1)
		{
			++(*r);
		}
		qu[++(*f)] = val;
	}
}


void displayQ(int *qu, int *f, int *r)
{
	for(int i = 0; i < *f; i++)
	{
		if(qu[i] != 0)
		printf("->>%d",qu[i]);
	}
	printf("\n");
	printf("Front->%d\n",*f);
	printf("Rear->%d\n",*r);
}
