/* Q3. Biggest within 3 input numbers*/

#include<stdio.h>

int main(){
	int n1,n2,n3;
	printf("Enter int type 3 numbers\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1 > n2)
	{
		if(n3 > n1)
		{
			printf("Biggest: %d\n",n3);
		}
		else
		{
			printf("Biggest: %d\n",n1);
		}
	}
	else
	{
		printf("Biggest: %d\n",n2);
	}

	return 0;
}


