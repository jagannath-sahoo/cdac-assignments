#include<stdio.h>
int main()
	{
	int hh,mm,ss,temp=0,ch,tss=0;
	printf("Enter your choice to convert\n1.HH:MM:SS => Total seconds\n2.Total seconds => HH:MM:SS\n");
	scanf("%d",&ch);
	if(ch==1){
		printf("Enter time in HH:MM:SS format\n");
		scanf("%d%d%d",&hh,&mm,&ss);

		temp=(hh*3600)+(mm*60)+ss;
		printf("Total seconds: %d\n",temp);
		
	}
	if(ch==2)
	{
		printf("Enter Total seconds");
		scanf("%d",&tss);
		hh=(tss/3600);
		temp=(tss-(hh*3600));
		mm = temp / 60;
		//printf("temp = %d\nmm = %d",temp,mm);
		ss=(temp-(mm*60));
		printf("%d:%d:%d\n",hh,mm,ss);
	
	}
	return 0;
	}
