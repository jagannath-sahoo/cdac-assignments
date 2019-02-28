
/*Q8. WAP to Solving linear equations of 2 unknown*/
#include<stdio.h>

//#define  4
#define VAR 	4

#ifdef DEBUG
# define DEBUG_PRINT(x) printf(x);
#else
# define DEBUG_PRINT(x) do {} while (0)
#endif

//int findDet(int (*)[3]);

float findDet(float (*mat)[3],float *det);
void displayMat(float (*mat)[3],int col, int row);

void copyMat(float (*matS)[3],float (*matD)[3],int col, int row);

int main()
{
	float mat1[4],mat2[4],mat3[4], d[3][3],d1[3][3],d2[3][3],d3[3][3];
       	int fstMul,secMul;
	float x,y,z;
	float det,D1,D2,D3,D;
	//initialize matrix
	printf("1st Eq. Enter values in {a1,b1,c1,d1} format\n");

	for(int i = 0; i < VAR; i++)
        {
                scanf("%f",&mat1[i]);//{a1,b1,c1}
	}

	printf("2nd Eq. Enter values in {a2,b2,c2,d2} format\n");

	for(int i = 0; i < VAR; i++)
        {
                scanf("%f",&mat2[i]);//{a2,b2,c2}
	}

	printf("3rd Eq. Enter values in {a3,b3,c3,d3} format\n");

        for(int i = 0; i < VAR; i++)
        {
                scanf("%f",&mat3[i]);//{a2,b2,c2}
        }
	
	
	for(int j = 0; j < 3;j++)
	{
		d[0][j] = mat1[j];
		d[1][j] = mat2[j];
		d[2][j] = mat3[j];
	}

	//Copy
	copyMat(d,d1,3,3);
	copyMat(d,d2,3,3);
	copyMat(d,d3,3,3);
	//Replace
	d1[0][0] = d2[0][1] = d3[0][2]  =  mat1[3];
	d1[1][0] = d2[1][1] = d3[1][2]  =  mat2[3];
	d1[2][0] = d2[2][1] = d3[2][2]  =  mat3[3];
	
	//Check D
	D = findDet(d,&D);
	D1 = findDet(d1,&D1);
	D2 = findDet(d2,&D2);
	D3 = findDet(d3,&D3);

	printf("***************\n");
//	printf("\nD = %f, D1 = %f,D2 = %f,D3 = %f",D, D1, D2, D3); 

	if(D != 0) 	
	{
//              float tempDet1,tempDet;
                x = D1/D;
                y = D2/D;
                z = D3/D;
                printf("*****************************\n");
                printf("x = %f\ny = %f\nz = %f", x, y, z);
        }
	else
	{
		if (D == 0 && D1 == 0 && D2 == 0 && D3 == 0)
		{
			printf("*******\nInfinitely many Solution*******\n");
		}
		if ( D1 != 0|| D2 != 0 || D3 != 0)
		{	
			printf("*******\nNo solution*******\n");
		}

	}
//	printf("Determinant of 3x3 Matrix: %f",findDet(d,&det));
	//displayMat(d1,3,3);
	//printf("det=%d\n",findDet(mat1,&det));
	//1
	/*fstMul = mat2[0];
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
	*/
	//printf("/*******************/\n x = %2f, y= %2f",x,y);
	return 0;
}

float findDet(float (*mat)[3],float *det)
{
	*det = (mat[0][0]*((mat[1][1]*mat[2][2]) - (mat[2][1]*mat[1][2]))) - (mat[0][1]*((mat[1][0]*mat[2][2]) - (mat[1][2]*mat[2][0]))) + (mat[0][2]*((mat[1][0]*mat[2][1]) - (mat[1][1]*mat[2][0])));
	return *det;
}

void displayMat(float (*mat)[3],int col, int row)
{
	 for(int i = 0; i < col; i++)
        {
                for(int j = 0; j < row;j++)
                {
                        printf("[%d][%d]:%f ",i,j,mat[i][j]);
                        //scanf("%d",&mat1[i][j]);
                }
		printf("\n");
        }

}


void copyMat(float (*matS)[3],float (*matD)[3],int col, int row)
{
         for(int i = 0; i < col; i++)
        {
                for(int j = 0; j < row;j++)
                {
                        matD[i][j] = matS[i][j];
                }
                printf("\n");
        }

}

