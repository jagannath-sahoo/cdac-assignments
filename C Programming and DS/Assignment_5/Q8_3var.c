
/*Q8. WAP to Solving linear equations of 2 unknown*/
#include<stdio.h>

#define col 3

#ifdef DEBUG
# define DEBUG_PRINT(x) printf(x);
#else
# define DEBUG_PRINT(x) do {} while (0)
#endif

int main()
{
	int mat1[4],mat2[4], tranMat[3][3];
       	int fstMul,secMul;
	float x,y;
	//initialize matrix
	printf("1st Eq. Enter values in {a1,b1,c1} format\n");

	for(int i = 0; i < col; i++)
        {
                scanf("%d",&mat1[i]);//{a1,b1,c1}
	}

	printf("2nd Eq. Enter values in {a1,b1,c1} format\n");

	for(int i = 0; i < col; i++)
        {
                scanf("%d",&mat2[i]);//{a2,b2,c2}
	}
	
	//1
	fstMul = mat2[0];
	secMul = mat1[0];

	for(int i = 0; i < col; i++)
	{
		mat1[i] = fstMul * mat1[i];
	       	mat2[i] = secMul * mat2[i]; 
	}
	if( (mat1[0] - mat2[0]) == 0)
	{
		y = (mat1[2] - mat2[2])/(mat1[1] - mat2[1]);
		x = (mat1[2] - (mat1[1]*y))/mat1[0];
	}
	else
		printf("\nError\n");
	printf("/*******************/\n x = %2f, y= %2f",x,y);
	return 0;
}
