
/*Q7. Determinat of 3x3 matrix*/
#include<stdio.h>

#ifdef DEBUG
# define DEBUG_PRINT(x) printf(x);
#else
# define DEBUG_PRINT(x) do {} while (0)
#endif

int main()
{
	int row=3,col=3, det = 0;
	int mat[3][3];
	//initialize matrix
	for(int i = 0; i < col; i++)
        {
                for(int j = 0; j < row;j++)
                {
                        printf("mat[%d][%d]:",i,j);
                        scanf("%d",&mat[i][j]);
                }
	}
//	a = mat[0][0];
//	b = mat[0][1];
//	c = mat[0][2];
//	d = mat[1][0];

	det = (mat[0][0]*((mat[1][1]*mat[2][2]) - (mat[2][1]*mat[1][2]))) - (mat[0][1]*((mat[1][0]*mat[2][2]) - (mat[1][2]*mat[2][0]))) + (mat[0][2]*((mat[1][0]*mat[2][1]) - (mat[1][1]*mat[2][0])));
	printf("Determinant of 3x3 Matrix: %d",det);
	



	return 0;
}
