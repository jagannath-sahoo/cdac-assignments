/*
 *q2 little endian big endian conversion
 */
#include<stdio.h>
void swap (char* , char*);

void display(char *cp,int size);

int main()
{
	int x;
	printf("Enter a interger number: \n");
	scanf("%d",&x);
	char *p= (char *) &x;
	
	printf("Little endian Form\n");
	display(p,4);
	//swap(p,p+1);
	//printf("Little endian Form\n");
	//printf("0x%x =>>Address %p \n0x%x =>> Address %p\n",*p ,p,*(p+3),(p+3));
	//printf("%x::%x",*p ,*(p+1));
	printf("/******************************/\n");	
	//Little Endian to Big Endian
	swap(p,p+3);
	swap(p+1,p+2);
	printf("Big Endian Form\n");
	display(p,4);
	//printf("0x%x::%p \n0x%x::%p\n",*p ,p,*(p+3),(p+3));

	
	printf("/******************************/\n");	
	//Big Endian to Little Endian
	swap(p,p+3);
	swap(p+1,p+2);
	printf("Little Endian Form\n");
	display(p,4);
	//printf("0x%x::%p \n0x%x::%p\n",*p ,p,*(p+3),(p+3));
	return 0;
}


void swap(char *a ,char *b)
{
	*a= *a^*b;
	*b= *a^*b;
	*a=*a^*b;
}

void display(char *cp,int size)
{
	for(int i = 0 ;i < size; i++)
	{		
		printf("0x%x =>>Address %p \n----------------\n",*(cp+i) ,(cp+i));
	}
}	

