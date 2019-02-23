
/*
 * Q2. Display String both in orders( Forward and Reverse order)
 * */

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[] = "Hello World";
	printf("String in Forward order\n");
	for(int i = 0; i < strlen(str1); i++)
	{
		printf("%c\t",str1[i]);
	}

	printf("\nString in Reverse order\n");
        for(int i = strlen(str1); i >= 0; i--)
        {
                printf("%c\t",str1[i-1]);
        }
	//printf("Len: %d", strlen(str1));
	return 0;

}
