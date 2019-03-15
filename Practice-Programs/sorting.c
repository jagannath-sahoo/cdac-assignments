// C program for implementation of Bubble sort 
#include <stdio.h> 
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{
	for(int i = 0; i<n;i++)
	{
		for(int j = 0; j < (n-1); j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
} 

void selectionSort(int arr[], int n)
{
	int i,j,min_index;
	for(i = 0; i < n;i++)
	{
		min_index = i;
		for(j = i+1; j < n; j++)
		{
			if(arr[min_index] > arr[j])
			{
				min_index = j;
			}
		}
		swap(&arr[i],&arr[min_index]);	
	}
}


void insertionSort(int arr[],int n)
{
	int key = 0;
	int j;
	for(int i=1; i < n;i++)
	{
		key = arr[i];
		j = i-1;
		while((j>=0) && (arr[j]>key))
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	
}



/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("n"); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    selectionSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
}
