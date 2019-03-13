#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>

typedef struct USER{
	unsigned int accountNo;
	char name[20];
	float balance;
}USER_st;


void createAccount(USER_st *cust,unsigned int *accNo, char *name, float *bal);  
void displayRecords(USER_st *cust);
int search(USER_st *cust,unsigned int accNo);

int main()
{
	USER_st data[20];
	int recordCount = 0;
	char name[20];
	unsigned int accNo = 120230;
	float bal = 20000.0;
	int ch;
	while(1){
		printf("Enter Choice\n1: Create Account\n2: Display Records\n3:Search\n0:Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter Account no. : Name : Balance\n");
			       	scanf("%u %[^\n]s",&accNo,name);
				__fpurge(stdin);
				scanf("%f",&bal);
				createAccount(&data[recordCount++],&accNo,name,&bal);
				break;
			case 2:
				for(int i = 0 ; i<recordCount; i++)
					displayRecords(&data[i]);
				break;
			case 3:
				printf("Enter the account no.\n");
				scanf("%u",&accNo);
				printf("Record Index: %i",search(data,accNo));
				break;
			case 0: 
				exit(0);
				break;
		}
	}
	createAccount(&data[0],&accNo,"Jagannath",&bal);
	displayRecords(data);
	return 0;
}


int search(USER_st *cust,unsigned int accNo){
	int index = 0;
	if(cust == 0)
	{
		return -1;
	}
	if(cust->accountNo == accNo)
	{
		return index;
	}
	else
	{
		cust = (cust+index++);
		search(cust,accNo);
	}
}

void createAccount(USER_st *cust,unsigned int *accNo, char *name, float *bal)
{
	cust->accountNo = *accNo;
	strcpy(cust->name,name);
	cust->balance = *bal;
}

void displayRecords(USER_st *cust)
{
	printf("**************************\n");
	printf("Account No. :%u\n",cust->accountNo);
	printf("Name: %s\n", cust->name);
	printf("Balance: %f\n",cust->balance);
}
