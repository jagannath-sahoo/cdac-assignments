
/*Q6. Trace of a Matrix*/
#include<stdio.h>

#ifdef DEBUG
# define DEBUG_PRINT(x) printf(x);
#else
# define DEBUG_PRINT(x) do {} while (0)
#endif

int main()
{

	int row=3,col=3, sum = 0;
	int mat1[3][3], tranMat[3][3];
	//initialize matrix
	for(int i = 0; i < col; i++)
        {
                for(int j = 0; j < row;j++)
                {
                        printf("mat1[%d][%d]:",i,j);
                        scanf("%d",&mat1[i][j]);
		}
	} 

	for(int i=0;i<row;i++)
	{
		sum = sum + mat1[i][i];
	}
	printf("Trace of Matrix: %d\n",sum);

	return 0;
}
