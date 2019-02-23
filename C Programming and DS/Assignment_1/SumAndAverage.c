/*Q.6 Sum and Average
 */
#include<stdio.h>

int main(){
	int arr[1000], n,  sum=0,i;
	printf("Total number to be entered for sum and average - ");
	scanf("%d",&n);
	printf("Enter numbers - ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Sum of numbers is %d\n",sum);
	printf("Average of numbers is %0.4f\n",((float) sum/n));
	return 0;
}
