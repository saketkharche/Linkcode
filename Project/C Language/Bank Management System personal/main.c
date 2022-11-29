#include <stdio.h>
char name[20];
int ch;
int dip_amt, amt = 10000, acc_no;
void menu();

int main()
{
	printf("Enter your name : ");
	gets(name);//TOget multiple input
	
	printf("Enter your acoount no. : ");
	scanf("%d",&acc_no);
	
	menu();
	printf("\nEnter your Choice : \n");
	scanf("%d",&ch);
	
	switch(ch) 
	{
		
		case 1:
			deposite_money();
		break;
		
		case 2:
			withdraw_money();
		break;
			
		case 3:
			Transfer_money();
		break;
			
		case 4:
			account_detail();
		break;
			
		case 5:
			transaction_detail();
		break;
			
		case 6:
			last_details();
		exit(0);
			
		
		default:
			printf("INVALID CHOICE !!!");
		break;
	}

	
	return 0;
}
//function for menus
void menu()
{
	printf("MAIN MENU\n");
	printf("1.Deposite Money\n");
	printf("2.Withdraw Money\n");
	printf("3.transfer Money\n");
	printf("4.Acoount Details\n");
	printf("5.transaction Details\n");
	printf("6.Exit");

}

//functions
//void withdraw_money()
//void Transfer_money()
//void account_detail()
//void transaction_detail()
//void last_details()


void deposit_money()
{
    printf("DEPOSITING MONEY \n");
    printf("Enter the amount : ");
    scanf("%d", &dip_amt);
	amt += dip_amt;
    printf("MONEY DEPOSITED\n");
    printf("current balance : %d", amt);
}
