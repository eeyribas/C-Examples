#include <stdio.h>

#define SIZE 50

struct Bank{
    char   name[SIZE];
    double bank_deposit;
    char   save[SIZE];
    double save_deposit;
};

double Sum(const struct Bank*);

int main()
{
    struct Bank bn = {
        "Credit Bank",
        10.500,
        "note",
        12.500
    };
    printf("Sum : %.2f $\n", Sum(&bn));

    getch();
    return 0;
}

double Sum(const struct Bank *money)
{
    return(money->bank_deposit + money->save_deposit);
}
