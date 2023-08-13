#include <stdio.h>

int main()
{
    int i = 25;
    int i_1 = 25;
    int i_2 = 25U;
    int i_3 = 25L;
    int i_4 = 25UL;

    double r = 17.2;
    double r_1 = 17.2;
    double r_2 = 17.2L;
    double r_3 = 17.2F;

    printf("i     = %d   \n", i);
    printf("i_1   = %d   \n", i_1);
    printf("i_2   = %u  \n", i_2);
    printf("i_3   = %ld  \n", i_3);
    printf("i_4   = %lu  \n", i_4);

    return 0;
}
