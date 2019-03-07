/*
 * Q5. Implement your own function to convert a string having only digits
into an integer and vice versa
 *
 * */

#include<stdio.h>
#include<string.h>


int strToInt(const char *,int *num);
char* intTostr(char *, int num);

int main()
{
	int temp = 0, num1 = 0;
	char str[] = "1234";
	char buffer[10];
	printf("\nNumber is %d\n",strToInt(str,&num1));
	printf("Int to String: %s\n",intTostr(buffer,3212));
	return 0;
}

char* intTostr(char *buff,int num)
{
	sprintf(buff,"%d",num);
	return buff;
}

int strToInt(const char *str,int *num)
{
	int temp;
	for(int i = 0; i < strlen(str); i++)
        {
                temp = str[i] - '0';
                for(int j = i;j < (strlen(str)-1);j++)
                {
                        temp = temp * 10;
                }
                *num = *num + temp;
                //printf("%d",temp);
        }
	return *num;
}
