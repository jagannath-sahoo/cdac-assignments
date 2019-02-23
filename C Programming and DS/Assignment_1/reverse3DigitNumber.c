/* Q2. Reverse 3 digit Number */


#include<stdio.h>

int main(){
	int n,temp, revArr[3],i=0;
	printf("Enter int type number\n");

	scanf("%d",&n);
	

	while(n!= 0)
	{
		temp = n % 10;
		//printf("temp: %d\n",temp);
		revArr[i] = temp;//Array for storing 
		//rev = rev + temp*100; 
		//printf("rev: %d\n",rev);
		n = n/10; 
		//printf("n: %d\n",n);
		i++;
	}
	
	printf("Reverse: %d\n",(revArr[0]*100)+(revArr[1]*10)+revArr[2]);

	return 0;
}

