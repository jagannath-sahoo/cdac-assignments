/*
 * Q1. Display element of array reverse order order;
 * */

#include<stdio.h>

int displayElement(int a[], int startPos, int len);
int reverseDisplayElement(int a[], int endPos);
int main()
{
	int arr[] = {1,2,3,4,5};
	printf("\nElement Display:\n");
	displayElement(arr,0,5);
	printf("\nElement In Reverse order:\n");
        reverseDisplayElement(arr,5);
	return 0;
}

int displayElement(int a[], int startPos, int len)
{
	if(startPos >= len)
		return 0;
	printf("%d\t",a[startPos]);
	displayElement(a,startPos+1,len);
}

int reverseDisplayElement(int a[], int endPos)
{
	if(endPos < 1)
		return 0;
	printf("%d\t",a[endPos-1]);
	reverseDisplayElement(a,endPos-1);
}
