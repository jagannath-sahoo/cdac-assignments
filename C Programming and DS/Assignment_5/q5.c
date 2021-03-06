
/*Q5. Transpose of a Matrix*/
#include<stdio.h>

#define DEBUG

#ifdef DEBUG
# define DEBUG_PRINT(x) printf(x);
#else
# define DEBUG_PRINT(x) do {} while (0)
#endif

//void swap(int *x, int *y);
void displayMat(int (*mat)[3],int col, int row);

int main()
{
	int row=3,col=3, temp = 0;
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

	//Transpose
	for(int i = 0; i < col; i++)
        {
                for(int j = 0; j < row;j++)
                {
			if(i < j){
				temp = mat1[j][i];
		        	mat1[j][i] = mat1[i][j];
				mat1[i][j] = temp;
				
			}
                }
      }
	//Display
	displayMat(mat1,row,col);
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

