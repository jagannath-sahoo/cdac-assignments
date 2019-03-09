/*
 * Q1. Define your own iterative functions for
(using array notation as well as exclusively using pointers)
a) finding length
b) copying
c) concatenation
d) comparision
e) reversing in memory
f) finding first occurrence of given character
g)finding last occurrence of given character
h)counting no.of occurences of a given character
i) finding a substring in a main string
j) Whether a string starts or ends with a particular sub string
 * */

#include<stdio.h>
#include<stdlib.h>


/*
 * Find length of string
 * params: str : string input
 * return: length of string
 * */
int strLen(const char *str);

/*
 * Copy src string to dest string
 * params: dest: destination string
 * 	   src :source string
 * return :dest str:destination string. 
 *
 * */
char* copying(char *dest,const char *src);

/*
 * Find the occurance of given char
 * params: string address
 * 	   ch: give char
 * return: position of char
 * */
int findChar(const char *, char *);

/*
 * Concate two strings
 *	params: dest string
 *		src string
 *	return dest string
 * */
char* conCat(char *, char *);
/*
 *reversing of a string 
 *	params:src string
 *	return : reverse src string
 **/  
char* reverse(char*,char*);
/*
 * Find the substring
 * parms: const type char string
 * 	  lower index
 * 	  higher index
 * 	  buffer storage for returning value
 * */
char* subString(const char *str, int low, int high,char *strBuf);

int checkSubstring(const char *str,const char *subString);
int main()
{
	//char str1[64] = { 0 };
	//char str2[64] = { 0 };
	char str[64] = "CDAC,Acts-Pune";
	char buf[64] ={0};
	//printf("%s",str);
	//printf("Enter the string\n");
	//scanf("%[^\n]s",str1);
	//printf("Entered String: %s\n",str1);
	//printf("Copied String: str1 = %s to %s\n",str1,copying(str2,str1));
	//printf("Length of string str1 is %d",strLen(str1));
	//printf("Concate \"%s\" and \"Acts\":\n %s", str,conCat(str,"Acts"));
	//printf("Reversed string of %s is %s",str,reverse(buf,str));
	
	//printf("Occurance of %c in %s\n Index: %d",'C', "CDAC",findChar("CDAC",'C'));
	printf("Enter Sub-String of %s is:\n %s\n",str,subString(str,1,4,buf));
	checkSubstring(str,buf);
	return 0;
}

int checkSubstring(const char *str, const char *substring)
{
	int strLenStr = strLen(str);
	int strSubLen = strLen(substring);
	int blockSize = strLenStr/strSubLen;
	int low = 0,high = blockSize;
	char *temp = (char *)calloc(blockSize,sizeof(char));
	for(int i = 0; i < blockSize;i++)
	{
		subString(str,low+i,high,temp);
		printf("%s\n",temp);
		low = high+blockSize;
		high = high+blockSize;
	}
	free(temp);
	
}



char* subString(const char *str, int low, int high, char *strBuf){
	static int i=0;
	if(low<=high)
	{
		*(strBuf+i) = *(str+low);
		i++;
		subString(str,low+1,high,strBuf);
	}
	return strBuf;
}

char* copying(char *dest,const char *src)
{
    char *temp = dest;    
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return temp;
}



int strLen(const char *str)
{
	int count=0;
	while(*str !='\0')
	{
		count++;
		str++;
	}
	return count;
}

char* conCat(char *str1, char *str2)
{
	char *temp = str1;
	while(*str1 != 0)//Count until str1 reaches null
	{
		//printf("1:%c\n",*str1);
		str1++;
	}
	//*str1 = *str2;
	//str1++;
	//str2++;
	//*str1 = *str2;
	while(*str2 != 0)//append str2 on the end of str1
	{
		//printf("2: %c\n",*str2);
		*str1 = *str2;
		str1++;
		str2++;
	}	
	*str1 = 0;//add null
	return temp;
}



char* reverse(char* buf, char*st)
{
        //char* temp=buf;	
	int count = strLen(st);
	int j = 0;
	for(int i = count-1; (i >= 0);i--)
	{
		
		*(buf+j) = *(st+i);
		j++;
	}
	*(buf+j)='\0';
	printf("%s", buf);
	return buf;

}

int findChar(const char *str, char *ch)
{
	for(int i = 0; i < strLen(str); i++)
	{
		if(*(str+i) == *ch)
		{
			return (i+1);
		}
	}
	return 0;
}
