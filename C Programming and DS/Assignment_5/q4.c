/*Q4. Matrix Operations*/


#include<stdio.h>

//int* initMat3x3(int mat);


void displayMat(int (*mat)[3],int col, int row);

int main()
{
	int col = 3,row = 3;
	int mat2[3][3],mat1[3][3],sumMat[3][3] = {0}, subMat[3][3] = {0},mulMat[3][3] = {0};
//	initMat3x3(Matrix,3,3);
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
                        printf("mat2[%d][%d]:",i,j);
                        scanf("%d",&mat2[i][j]);
                }
        }
	//Addition
	for(int i = 0; i < col; i++)
        {
                for(int j = 0; j < row;j++)
                {
                       // printf("mat2[%d][%d]:",i,j);
                       // scanf("%d",&mat2[i][j]);
		       sumMat[i][j] = mat1[i][j] + mat2[i][j];
                }
        }
	//Substraction
	for(int i = 0; i < col; i++)
        {
                for(int j = 0; j < row;j++)
                {
                       // printf("mat2[%d][%d]:",i,j);
                       // scanf("%d",&mat2[i][j]);
                       subMat[i][j] = mat1[i][j] - mat2[i][j];
                }
        }
	//Multiplication
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++){
			mulMat[i][j] = 0;
			for(int k = 0; k < 3; k++)
			{
				mulMat[i][j] = mulMat[i][j] + (mat1[i][k] * mat2[k][j]);
				/*Logic for multiplication*/
			}
		}
	}
	displayMat(mat1,3,3);
	printf("/**************************/\n");
	displayMat(mat2,3,3);
	printf("Addition of 2 Matrix\n");
	displayMat(sumMat,3,3);
	printf("Substraction of 2 Matrix\n");
        displayMat(subMat,3,3);
	printf("Multiplication of 2 Matrix\n");
        displayMat(mulMat,3,3);

	return 0;
}

/*int* initMat3x3(int mat[][],int col, int row)
{
	for(int i = 0; i < col; i++)
	{
		for(int j = 0; j < row;j++)
		{
			printf("mat[%d][%d]:",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	return mat;
}*/


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
