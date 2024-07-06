#include<stdio.h>
float balance=13459;
void check_balance( )
{
	printf("Your balance is=%.2f\n",balance);
}
void Withdraw_Money(float amount)
{
	if(amount>0 && amount<=balance)
	{
		balance-=amount;
		printf("Withdrawn $%.2f\n",amount);
		printf("Remaining balance $%.2f\n",balance);
	}
	else
	{
		printf("Invalid anmount or Insufficient balance\n please try again\n");
	}
}
void deposit_Money(float amount)
{
	if(amount>0)
	{
		balance+=amount;
		printf("Amount deposited $.2f\n",amount);
		printf("Current balance is=%.2f\n",balance);		
	}
	else
	{
		printf("Invalid anmount or Insufficient balance\n please try again\n");
	}
}
void transfer(float amount)
{
	
	if(amount>0 && amount<=balance)	
	{
		balance-=amount;
		printf("transferred $%.2f\n",amount);
		printf("Remaining balance $%.2f\n",balance);
	}
	else
	{
		printf("Invalid anmount or Insufficient balance\n please try again\n");
	}
}
int main()
{
	int choice;
	float amount;
	float recipeant_balance=0;
	printf("                                    WELCOME TO ATM SIMULATOR      ");
	do
	{
		printf("\n");
		printf("1.Check Balance\n");
		printf("2.Withdraw Money\n");
		printf("3.deposit Money\n");
		printf("4.Transfermoney\n");
		printf("5.Exit\n");
		
		printf("Enter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				check_balance();
				break;
				
			case 2:
				printf("Enter the amount to withdraw:");
				scanf("%f",&amount);
				Withdraw_Money(amount);
				break;
				
			case 3:
				printf("Enter the amount to be deposited:");
				scanf("%f",&amount);
				deposit_Money(amount);
				break;
				
			case 4:
				printf("Enter amount to transfer:");
				scanf("%f",&amount);
				transfer(amount);
				break;
				
			case 5:
				printf("Thank you for using ATM simulator\n");
				break;
				
			default:
				printf("Invalid Choice!!");
				
		}
	}while(choice!=5);
	return 0;
}
