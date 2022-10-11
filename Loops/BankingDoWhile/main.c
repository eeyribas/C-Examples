#include<stdio.h>
#include<conio.h>

int main()
{
    int account_no, credit, balance=0;

    do
    {
        printf("Account no = ");
        scanf("%d", &account_no);
        printf("Credit Limit = ");
        scanf("%d", &credit);
        balance = credit / 2;
        printf("\nNew balance = %d\n\n", balance);
    }while(account_no != 0);

    getch();
    return 0;
}
