/*
 *q2 little endian big endian conversion
 */
#include<stdio.h>
void swap (char* , char*);
int main()
{
	short int x;
	printf("Enter a short interger number");
	scanf("%hd",&x);
	char * p= (char *) &x;
	//swap(p,p+1);
	printf("Little Indian Form\n");
	printf("0x%x::%p \n0x%x::%p\n",*p ,p,*(p+1),(p+1));
	//printf("%x::%x",*p ,*(p+1));:W
	
	swap(p,p+1);

	printf("Big Indian Form\n");
	printf("0x%x::%p \n0x%x::%p\n",*p ,p,*(p+1),(p+1));
	swap(p,p+1);
	printf("Little Indian Form\n");
	printf("0x%x::%p \n0x%x::%p\n",*p ,p,*(p+1),(p+1));
	return 0;
}


void swap(char *a ,char *b)
{
	*a= *a^*b;
	*b= *a^*b;
	*a=*a^*b;
}
