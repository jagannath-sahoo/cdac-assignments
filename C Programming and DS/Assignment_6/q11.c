/* Q11. Print the last element of array without the length of array
 * */

#include<stdio.h>

int main()
{
	int arr[] = {10,20,30,40,50};
	int *p = *(&arr + 1) -1;
	printf("arr[%d] = %d\n",4,*p);
	return 0;
}
