#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>

#define CLEAR system("clear")

typedef struct USER{
	unsigned int accountNo;
	char name[20];
	float balance;
}USER_st;


void createAccount(USER_st *cust,unsigned int *accNo, char *name, float *bal);  
void displayRecords(USER_st *cust);
int search(USER_st *cust,unsigned int accNo);
int withdraw(USER_st *data);
int deposit(USER_st *data);

int main()
{
	USER_st *data = NULL;// = (USER_st *)calloc(1,sizeof(USER_st));
	int searchIndex = 0;
	int recordCount = 0;
	char name[20];
	unsigned int accNo = 120230;
	float bal = 20000.0;
	int ch;
	while(1){
		printf("\n\n*****************************\n");
		printf("Welcome to new Bank\n");
		printf("Enter Choice\n1: Create Account\n2: Display Records\n3:Search\n4:Deposit\n5:Withdraw\n0:Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				CLEAR;
			//	recordCount++;
				data = (USER_st * )realloc(data,sizeof(USER_st)*1);
				printf("Enter Account no. : Name : Balance\n");
			       	scanf("%u %[^\n]s",&accNo,name);
				__fpurge(stdin);
				scanf("%f",&bal);
					
				createAccount((data+recordCount++),&accNo,name,&bal);
				break;
			case 2:
				CLEAR;
				for(int i = 0 ; i<recordCount; i++)
					displayRecords(&data[i]);
				break;
			case 3:
				CLEAR;
				printf("Enter the account no.\n");
				scanf("%u",&accNo);
				searchIndex = search(data,accNo);
				if(searchIndex >= 0)
				{
				//printf("Record Index: %d\n",search(data,accNo));
				printf("Account no.: %d\n",data[searchIndex].accountNo);
				printf("Name: %s\n",data[searchIndex].name);
				printf("Balance: %f\n",data[searchIndex].balance);
				}
				else{
					printf("NOT FOUND!\n");
				}

				break;
			case 4: 
				CLEAR;
				printf("****Deposit****\n");
				deposit(data);
				break;
			case 5:
				CLEAR;
                                printf("****Withdraw****\n");
                                withdraw(data);
                                break;

			case 0: 
				exit(0);
				break;
		}
	}
	//createAccount(&data[0],&accNo,"Jagannath",&bal);
	displayRecords(data);
	return 0;
}


int deposit(USER_st *data)
{
	float bal = 0;
	int accNo,searchIndex = 0;
	int ch;
	printf("****Deposit****\n");
                                printf("Enter user account number\n");
                                scanf("%d",&accNo);
                                searchIndex = search(data,accNo);//look for record index
				printf("searchIndex: %d\n",searchIndex);
                                if(searchIndex >= 0)
                                {
                                        printf("Account Found!\n");
                                        printf("Enter the deposit ammount\n");
                                        scanf("%f",&bal);
                                        data[searchIndex].balance += bal;
					displayRecords(&data[searchIndex]);

                                }
                                else
                                {
                                        printf("Invalid Account no.\n");
                                }

}

int withdraw(USER_st *data)
{
        float bal = 0;
        int accNo,searchIndex = 0;
        int ch;
        printf("****Withdraw****\n");
                                printf("Enter user account number\n");
                                scanf("%d",&accNo);
                                searchIndex = search(data,accNo);//look for record index
                                printf("searchIndex: %d\n",searchIndex);
                                if(searchIndex >= 0)
                                {
                                        printf("Account Found!\n");
                                        printf("Enter the withdraw ammount\n");
                                        scanf("%f",&bal);
                                        data[searchIndex].balance -= bal;
                                        displayRecords(&data[searchIndex]);

                                }
                                else
                                {
                                        printf("Invalid Account no.\n");
                                }

}

int search(USER_st *cust,unsigned int accNo){
	int accIndex = 0;
	while(accIndex <= 20){
		if((cust+accIndex)->accountNo == accNo)
		{
			return (accIndex);
		}
		accIndex++;
	}
	return -1;
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
