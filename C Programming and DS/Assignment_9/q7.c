#include<stdio.h>
#include<stdlib.h>
#define size 10
void push(int *,int,int *,int *);
int pop(int *,int *,int *);

void main()
{
int arr[size],n,val,front=-1,rear=-1,ret;
while(1)
{
printf("\nEnter the choice to perform in queue\n1.push\n2.pop\n3.exit\n");
scanf("%d",&n);
switch(n)
{
case 1:printf("\nEnter the value to be pushed on queue\n");
	       scanf("%d",&val);
	       push(arr,val,&front,&rear);
	       break;
        case 2:printf("Element popped ot of queue:\n");
	      ret=pop(arr,&front,&rear);
	       printf("Element out:%d\n",ret);
	       break;
	case 3:exit(0);
}
}
}

void push(int *a,int val,int *f,int *r)
{
if(*r==(size-1))
{
	printf("queue is full\n");
	return;
}
else
{
	++(*r);
	a[*r]=val;
	if(*f==-1)
	++(*f);
}

}
int pop(int *a,int *f,int *r)
{
if(*f==-1)
{
	printf("queue is empty\n");
	return 0;
}
int temp;
temp=a[*f];
a[*f]=0;
if(*f==*r)
{
*f=-1;
*r=-1;
return temp;
}
else
{
++*f;
return temp;
}

}
