#include<stdio.h>
#include<conio.h>

int main(){

	int account_no, first_balance, sum_expence, sum_credit;
	int limit, new_balance;
	printf("Account no (Exit = -1) = ");
	scanf("%d", &account_no);
	while(account_no != -1){
	printf("First Balance =");
	scanf("%d", &first_balance);
	printf("Sum Expence = ");
	scanf("%d", &sum_expence);
	printf("Sum Credit = ");
	scanf("%d", &sum_credit);
	printf("Credit Limit = ");
	scanf("%d", &limit);
	new_balance = first_balance + sum_expence - sum_credit;
	printf("Account No = %d\n", account_no);
	printf("Limit = %d\n", sum_credit);
	printf("Balance = %d\n", new_balance);
	if(new_balance > sum_credit){
		printf("Credit Limit Error\n\n");
	}
	else{
	printf("Credi Limit...");
	}
	printf("Account No = (Exit = -1) = ");
	scanf("%d", &account_no);
	}
	printf("Press a key to exit!...");
	getch();
	return 0;


}
