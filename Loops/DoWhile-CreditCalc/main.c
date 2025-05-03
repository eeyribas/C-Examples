#include <stdio.h>
#include <conio.h>

int main()
{
    int account_no = 0;

    do {
        int credit = 0;
        printf("Account no = ");
        scanf("%d", &account_no);
        printf("Credit Limit = ");
        scanf("%d", &credit);
        int credit_calc = credit / 2;
        printf("\nCredit Calc = %d\n\n", credit_calc);
    } while(account_no != 0);

    getch();
    return 0;
}
