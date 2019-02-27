
/*Q9. Generation of identity, null matrices*/
#include<stdio.h>

#ifdef DEBUG
# define DEBUG_PRINT(x) printf(x);
#else
# define DEBUG_PRINT(x) do {} while (0)
#endif

void displayMat(int (*mat)[3],int col, int row);

int main()
{
	int row=3,col=3, temp = 0;
	int mat1[3][3] = {0}, mat2[3][3] = {0};
	//initialize matrix
	for(int i = 0; i < col; i++)
        {
		mat1[i][i] = 1;
                        //printf("mat1[%d][%d]:",i,j);
                        //scanf("%d",&mat1[i][j]);
	}
	printf("Null Matrix:\n");
	displayMat(mat2,3,3);
	printf("Identity Matrix: \n");
	displayMat(mat1,3,3);
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

