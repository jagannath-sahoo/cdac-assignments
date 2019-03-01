/*
 *Q8. Usage of assert macro before dereferencing any pointer.
 * */
#include<stdio.h>
#include<string.h>
#include<assert.h>

int main()
{
	char str[100];
	printf("Enter a string:\n");
	scanf("%s",str);
	printf("Entered: %s\n",str);
	char *ptr = str;
	//assert(str != NULL);
	for(int i = 0; i <= strlen(str);i++)
	{
		/*
		 * assert(expression): if expression true => Do nothing
		 * 				     false => Print file name with
		 * 				     line no. and abort
		 * */
		assert(*(str+i) != 0);
		printf("str[%d] = %c\n",i,*(str+i));
	}
	return 0;
}

