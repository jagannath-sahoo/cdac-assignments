
/*Q7. Determinat of 2x2 matrix*/
#include<stdio.h>

#ifdef DEBUG
# define DEBUG_PRINT(x) printf(x);
#else
# define DEBUG_PRINT(x) do {} while (0)
#endif

int main()
{

	int row=2,col=2, d = 0;
        int mat1[2][2];
	int temp[2] = {1};
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
                if( i == 0)
			temp[0] = mat1[i][i] * mat1[i+1][i+1];
		else
			temp[1] = mat1[i][0] * mat1[0][i];
	}
	printf("Determinat: %d",(temp[0] - temp[1]));

	
	return 0;
}
