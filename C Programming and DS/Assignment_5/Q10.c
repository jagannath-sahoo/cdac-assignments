
/*Q10. check identity matrix*/
#include<stdio.h>

#ifdef DEBUG
# define DEBUG_PRINT(x) printf(x);
#else
# define DEBUG_PRINT(x) do {} while (0)
#endif


void displayMat(int (*mat)[3],int col, int row);

int main()
{
	int row=3,col=3, count = 0;
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

	for(int i = 0; i < col; i++)
        {
                for(int j = 0; j < row;j++)
                {
                        //printf("[%d][%d]:%d ",i,j,mat[i][j]);
                        //scanf("%d",&mat1[i][j]);
			if((mat1[i][j] == 1))
			{
				count++;
			}
			if((mat1[i][j] == 0))
			{
				count++;
			}
                }
                printf("\n");
        }
//	printf("\n****%d***\n",count);
	displayMat(mat1,3,3);
	if(count == 9)
		printf("Identity Matrix\n");
	else
		printf("Not an Indentity matrix");
	return 0;
}

void displayMat(int (*mat)[3],int col, int row)
{
	 for(int i = 0; i < col; i++)
        {
                for(int j = 0; j < row;j++)
                {
                        printf("[%d][%d]:%d ",i,j,mat[i][j]);
                        //scanf("%d",&mat1[i][j]);
                }
		printf("\n");
        }

}
