#include <stdio.h>
#include <conio.h>

int main()
{
	int account_no, limit;
	int first_balance, sum_expense, sum_credit;

	printf("Account no (Exit = -1) = ");
	scanf("%d", &account_no);
	while (account_no != -1) {
        printf("First Balance =");
        scanf("%d", &first_balance);
        printf("Sum Expense = ");
        scanf("%d", &sum_expense);
        printf("Sum Credit = ");
        scanf("%d", &sum_credit);
        printf("Credit Limit = ");
        scanf("%d", &limit);
        int new_balance = first_balance + sum_expense - sum_credit;
        printf("Account No = %d\n", account_no);
        printf("Limit = %d\n", sum_credit);
        printf("Balance = %d\n", new_balance);
        if (new_balance > sum_credit)
            printf("Credit Limit Error\n\n");
        else
            printf("Credit Limit...");
        printf("Account No = (Exit = -1) = ");
        scanf("%d", &account_no);
	}
	printf("Press a key to exit!...");

	getch();

	return 0;
}
