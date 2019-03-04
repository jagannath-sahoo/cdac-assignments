/*
 *Q8. Passing 1D, 2D arrays to a function
– sum, min, max of array elements
– Matrix operations
 * */


#include<stdio.h>

int row,col;
int add(int *a, int size);
int maximum(int *a,int size);
int minimum(int *a,int size);
int maximum2(int (*arr)[row], int row, int col);
int minimum2(int (*arr)[row], int row, int col);

int add2(int (*arr)[row], int row, int col);
int main ()
{
	int num1;
//	int arr1[];
//	int arr2[][];
	printf("Enter the Limit For 1-D array\n");
	scanf("%d",&num1);
	
	printf("Enter the Rows And Col. for 2-D Array\n");
	scanf("%d%d",&row,&col);
	int arr1[num1];
	int arr2[row][col];

	//Scanning of array elements
	printf("Enter The Numbers For 1-d Array\n");	
	for(int i=0;i<num1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("----------\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		scanf("%d",&arr2[i][j]);
		}
	}
	
	printf("Addition Of 1-D Array is %d\n", add(arr1,num1));
	printf("Addition for 2-d Array is %d\n",add2(arr2,row,col));
	printf("maximum element in 1-D Array %d\n",maximum(arr1,num1));
	printf("Minimum Element in 1-D array %d\n",minimum(arr1,num1));
	printf("Maximum Element in 2-D array %d\n",maximum2(arr2,row,col));
	printf("Minimum Element in 2-D array %d\n",minimum2(arr2,row,col));
}



int add(int *a, int size)
{
	int sum =0;
	for(int i=0;i < size;i++)
	{
		sum=sum+a[i];
	}
	return sum;	

}


int add2(int (*arr)[row], int row, int col)
{
int res=0;
for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		
		 res=res+arr[i][j] ;
		
		}
	
	}

	return res;
}


int maximum(int *a,int size)
{
int max=0;
for(int i=0;i<size;i++)
	{
	
	if(max<a[i])
	{
		max=a[i];
	
	}
	
	}


	return max;

}


int minimum(int *a,int size)
{
int min=a[0];
for(int i=1;i<size;i++)
        {

        if(min>a[i])
        {
                min=a[i];

        }

        }


        return min;
}




int maximum2(int (*arr)[row], int row, int col)
{
int max=0;
for(int i=0;i<row;i++)
        {
                for(int j=0;j<col;j++)
                {

         	  if(max<arr[i][j])
		  {
		  
		  	max=arr[i][j];
		  
		  }
	
                }

        }

        return max;
}



int minimum2(int (*arr)[row], int row, int col)
{
int min=arr[0][0];
for(int i=1;i<row;i++)
        {
                for(int j=0;j<col;j++)
                {

                  if(min>arr[i][j])
                  {

                        min=arr[i][j];

                  }

                }

        }

        return min;
}




