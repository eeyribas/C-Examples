#include<stdio.h>
#include<conio.h>

int main()
{
    int account_no, credit, credit_calc=0;

    do{
        printf("Account no = ");
        scanf("%d", &account_no);
        printf("Credit Limit = ");
        scanf("%d", &credit);
        credit_calc = credit / 2;
        printf("\nCredit Calc = %d\n\n", credit_calc);
    }while(account_no != 0);

    getch();
    return 0;
}
