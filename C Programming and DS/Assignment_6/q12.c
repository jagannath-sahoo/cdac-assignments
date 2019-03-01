/*
 * Q12. What is the significance of following pointer
int (*q)[3][4];*/


#include<stdio.h>

int main()
{
	int arr[3][4];
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			scanf("%d",&arr[i][j]);		
		}
	}

	int (*q)[3][4];
	q = &arr;
	printf("Array:\n");
	for(int i = 0; i < 3; i++)
        {
                for(int j = 0; j < 4; j++)
                {
                        printf("%d \t",(*q)[i][j]);
                }
		printf("\n");
        }

	printf("Sizeof(q): %lu\n",sizeof(q));// 8,size of pointer 
	printf("Sizeof(*q): %lu\n",sizeof(*q));//48, size of pointer * rows * cols
	printf("Sizeof(**q): %lu\n",sizeof(**q));//16, size of pointer * cols
	printf("Sizeof(***q): %lu\n",sizeof(***q));//8,size of pointer

	return 0;
}
