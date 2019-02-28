/* Q7. Acessing of elements with suitable dereferencing*/


#include<stdio.h>


int main()
{
	int arr[5];
	printf("Enter elements for array\n");

	for(int i = 0; i < 5 ;i++)
	{
		scanf("%d",&arr[i]);
	}

	int (*parr)[5];
	parr = &arr;
//	printf("sizeof(parr): %lu\n", sizeof(parr));
//	printf("sizeof(*parr): %lu\n". sizeof(*parr));
//	printf("sizeof(**parr): %lu\n", sizeof(**parr));

	for(int i = 0; i < 5 ;i++)
        {
                printf("arr[%d]: %d\n",i,*(*(parr)+i));
        }
	return 0;
}
