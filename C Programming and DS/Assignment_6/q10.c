/* Q10. Access 2D array Element using pointer*/

#include<stdio.h>

int main()
{
	int arr[3][4] = {1,2,3,4,
			 5,6,7,8,
			 9,10,11,12};
	int (*p)[4];
	p = arr;
	printf("sizeof(p) %lu\n",sizeof(p));
	printf("sizeof(*p) %lu\n",sizeof(*p));
	printf("sizeof(**p) %lu\n",sizeof(**p));
	
	printf("Values of p = %p\n",p);
	printf("Values of p+1 = %p\n",p+1);
	printf("arr[i][j] \n");
	for(int i = 0; i < 3; i++)
        {
                for(int j = 0; j < 4;j++)
                {
                        printf("[%d][%d]:%d ",i,j,arr[i][j]);
                        //scanf("%d",&mat1[i][j]);
                }
		printf("\n");
        }

	printf("(*(p+1))[j] \n");
        for(int i = 0; i < 3; i++)
        {
                for(int j = 0; j < 4;j++)
                {
                        printf("[%d][%d]:%d ",i,j,(*(p+1))[j]);
                        //scanf("%d",&mat1[i][j]);
                }
                printf("\n");
        }

	printf("*(*(p+i)+j \n");
        for(int i = 0; i < 3; i++)
        {
                for(int j = 0; j < 4;j++)
                {
                        printf("[%d][%d]:%d ",i,j,*(*(p+i)+j));
                        //scanf("%d",&mat1[i][j]);
                }
                printf("\n");
        }

	return 0;
}
