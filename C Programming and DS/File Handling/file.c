#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    fp=fopen("filea.txt","W");
    printf("Enter Data");
    while(ch=getchar()!=EOF)
    {
        putc(ch,fp);
    }
    fclose(fp);
    fp=fopen("filea.txt","R");
    while((ch=getc(fp))!=EOF)
    {
     putchar(ch);   
    }
    fclose(fp);
    return 0;
}