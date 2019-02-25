#include<stdio.h>
int main ()
	{
	int i,x,p;
	printf("Enter a value for i ,x,p\n");
	scanf("%d%d%d",&i,&x,&p);
	int temp=i;
	int k=i++;
	printf("Post incremet k=i++ is %d\n",k);
	i=temp;
	k=++i;
	printf("Pre increment k=++i is %d\n",k);
	temp=x;
	int y=x++*10;
	printf("Post increment y=x++*10 is %d\n",y);
	x=temp;
	y=++x*10;
	printf("Pre increment y=++x*10 is %d\n",y);
	temp = p;
	int q=p--/3;
	printf("Post increment q=p--/3 is %d\n",q);
	p=temp;
	q=--p/3;
	printf("Pre increment q=--p/3 is %d\n",q);



	return 0;

	}	
