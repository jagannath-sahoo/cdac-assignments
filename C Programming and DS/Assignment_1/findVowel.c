/* Q4. Find out given charactor is vowel or not*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[] = {97, 101, 105, 111, 117};
	char ch;
	printf("Enter your Char. to check\n");
	scanf("%c",&ch);

	for(int i = 0; i < 5; i++)
	{
		if(ch == arr[i])
		{
			printf("Vowel Found\n");
			exit(0);
		}
	}

	printf("Not Found\n");

	return 0;
}

