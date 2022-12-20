#include <stdio.h>
#define SIZE 50

struct bank{
    char   name[SIZE];
    double bank_deposit;
    char   save[SIZE];
    double save_deposit;
};

double Sum(const struct bank*);

int main(void)
{
    struct bank bn = {
        "Credit Bank",
        10.500,
        "note",
        12.500
    };
    printf("Sum : %.2f $\n", Sum(&bn));

    return 0;
}

double Sum(const struct bank * money)
{
    return(money->bank_deposit + money->save_deposit);
}
